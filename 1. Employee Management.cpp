#include <bits/stdc++.h>

using namespace std;

class Employee {
    int id;
    int getuniqueId();
    string name;
    list<Employee> subordinates;
    int managerId;

public:
    Employee(string);

    int GetId() const;
    const string& GetName() const;
    const list<Employee>& GetSubordinates() const;
    int GetManagerId() const;
    void SetManagerId(int managerId);

    void addSubordinate(Employee&);
};

Employee :: Employee(string name) {
    this->name = name;
    this->id = getuniqueId();
    this->managerId = 0;
}

int Employee :: getuniqueId() {
    static int empId = 1;
    return empId++;
}

int Employee :: GetId() const {
    return id;
}

const string& Employee :: GetName() const {
    return name;
}

const list<Employee>& Employee :: GetSubordinates() const {
    return subordinates;
}

int Employee :: GetManagerId() const {
    return managerId;
}

void Employee :: SetManagerId(int managerId) {
    this->managerId = managerId;
}

void Employee :: addSubordinate(Employee& employee) {
    subordinates.push_back(employee);
}

//-----------------------------------------------------------------------------------------

class System {
    list<Employee> employees;
    unordered_map<int, Employee*> employeeMap;

public:
    System() {}
    void registerEmployee(Employee&);
    void registerManager(int, int);
    void printDetails(int);
    void printDetails(string);
    list<Employee> getSubordinates(int);
    list<Employee> getSubordinates(string);
};

void System :: registerEmployee(Employee& employee) {
    employees.push_back(employee);
    employeeMap[employee.GetId()] = &employees.back();
}

void System :: registerManager(int empId, int managerId) {
    if(!employeeMap.count(empId) || !employeeMap.count(managerId)){
        cout << "Either employee or manager is not registered" << endl;
        return;
    }
    employeeMap[empId]->SetManagerId(managerId);
    employeeMap[managerId]->addSubordinate(*employeeMap[empId]);
}

void System :: printDetails(int empId) {
    if(employeeMap.find(empId) == employeeMap.end()){
        cout << "Employee not registered" << endl;
        return;
    }
    cout << "Id: " << empId << "\t";
    cout << "Name: " << employeeMap[empId]->GetName() << "\t";
    int mngrId = employeeMap[empId]->GetManagerId();
    cout << "Manager: " << employeeMap[mngrId]->GetName() << endl; 
}

void System :: printDetails(string empName) {
     for(Employee employee : employees){
        if(employee.GetName().substr(0, empName.size()) == empName){
            cout << "Id: " << employee.GetId() << "\tName: " << employee.GetName() << "\t";
            cout << "Manager: " << employeeMap[employee.GetManagerId()]->GetName() << endl;
        }
     }
}

list<Employee> System :: getSubordinates(int empId) {
    if(employeeMap.find(empId) == employeeMap.end()){
        cout << "Employee not registered" << endl;
        list<Employee> dummy;
        return dummy;
    }
    return employeeMap[empId]->GetSubordinates();
}

list<Employee> System :: getSubordinates(string empName) {
    for(Employee employee : employees){
        if(employee.GetName() == empName)
            return employee.GetSubordinates();
    }
    list<Employee> dummy;
    return dummy;
}

int main () {
    // cout << "Hello World!" << endl;

    Employee employee1("Alpha");
    Employee employee2("Beta");
    Employee employee3("Charlie");

    System system;
    system.registerEmployee(employee1);
    system.registerEmployee(employee2);
    system.registerEmployee(employee3);

    system.registerManager(employee1.GetId(), employee2.GetId());
    system.registerManager(employee3.GetId(), employee2.GetId());

    system.printDetails(employee1.GetId());
    system.printDetails("C");

    for(Employee e : system.getSubordinates(employee2.GetName())){
        cout << e.GetId() << " " << e.GetName() << endl;
    }
    for(Employee e : system.getSubordinates(employee2.GetId())){
        cout << e.GetId() << " " << e.GetName() << endl;
    }

    return 0;
}