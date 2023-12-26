#include <bits/stdc++.h>

using namespace std;

class Meeting;
typedef unordered_map<int, vector<Meeting>> Calendar;   //

class Room {
    string name;
    Calendar calendar;

public:
    Room(string);

    const string& GetName() const;
    bool book(int, int, int);   //
};

//++++++++++++++++++++++++++++
class Meeting {
    int start, end;
    Room room;

public:
    Meeting(int, int, Room);

    int GetStart() const;
    int GetEnd() const;
};
//++++++++++++++++++++++++++++

Room :: Room(string name) {
    this->name = name;
}

const string& Room :: GetName() const {
    return name;
}

bool Room :: book(int day, int start, int end) {    //
    for(Meeting m : calendar[day]){ //
        if(m.GetStart() < end && start < m.GetEnd())
            return false;
    }
    Meeting meeting(start, end, *this);
    calendar[day].push_back(meeting);    //
    return true;
}

//---------------------------------------------------------------------------------------------



Meeting :: Meeting(int start, int end, Room room):room{room} {
    this->start = start;
    this->end = end;
}

int Meeting :: GetStart() const {
    return start;
}

int Meeting :: GetEnd() const {
    return end;
}

//-------------------------------------------------------------------------------------------

class Scheduler {
    vector<Room> rooms;

public:
    Scheduler(vector<Room> rooms);

    string book(int, int, int); //
};

Scheduler :: Scheduler(vector<Room> rooms) {
    this->rooms = rooms;
}

string Scheduler :: book(int day, int start, int end) { //
    for(Room& room : rooms){
        bool flag = room.book(day, start, end); //
        if(flag)
            return room.GetName();
    }
    return "No rooms available";
}

int main () {
    // cout << "Hello World!" << endl;
    Room room1("Atlas");
	Room room2("Nexus");
	Room room3("HolyCow");

	vector<Room> roomVec;
	roomVec.push_back(room1);
	roomVec.push_back(room2);
	roomVec.push_back(room3);

	Scheduler scheduler(roomVec);

	cout << scheduler.book(15,2,5) << "\n"; //	//Atlas
	cout << scheduler.book(15,5,8) << "\n"; //	//Atlas
	cout << scheduler.book(15,4,8) << "\n"; //	//Nexus
	cout << scheduler.book(15,3,6) << "\n"; //	//Holycow
	cout << scheduler.book(15,7,8) << "\n"; //	//Holycow
	cout << scheduler.book(15,6,9) << "\n"; //	//Atlas

    return 0;
}