#include <bits/stdc++.h>

using namespace std;

enum Category {FICTION, SCI_FI, MYSTRY, FABLE, MYTHOLOGY};

class Book {
    string name;
    string author;
    string publisher;
    int publish_year;
    Category category;
    double price;
    int count;

public:
    Book(string, string, string, int, Category, double, int);

    const string& GetName() const;
    const string& GetAuthor() const;
    Category GetCategory() const;
    int GetCount() const;
};

Book :: Book(string name, string author, string publisher, int publish_year, Category category, double price, int count) {
    this->name = name;
    this->author = author;
    this->publisher = publisher;
    this->publish_year = publish_year;
    this->category = category;
    this->price = price;
    this->count = count;
}

const string& Book :: GetName() const {
    return name;
}

const string& Book :: GetAuthor() const {
    return author;
}

Category Book :: GetCategory() const {
    return category;
}

int Book :: GetCount() const {
    return count;
}

//----------------------------------------------------------------------------------------------

class Catalog {
    list<Book> books;
    typedef priority_queue<pair<int, Book*>, vector<pair<int, Book*>>, less<pair<int, Book*>>> countQueue;
    unordered_map<string, pair<vector<Book*>, countQueue>> authorMap;
    unordered_map<Category, countQueue> categoryMap;

public:
    Catalog () {}

    void addBookToCatalog(Book&);
    vector<Book> searchBookByName(string);
    vector<Book> searchBookByAuthor(string);
    vector<Book> getMostSoldBooksByAuthor(string, int);
    vector<Book> getMostSoldBooksByCategory(Category, int);
};

void Catalog :: addBookToCatalog(Book& book) {
    books.push_back(book);
    authorMap[book.GetAuthor()].first.push_back(&books.back());
    authorMap[book.GetAuthor()].second.push({book.GetCount(), &books.back()});
    categoryMap[book.GetCategory()].push({book.GetCount(), &books.back()});
}

vector<Book> Catalog :: searchBookByName(string prefix) {
    vector<Book> bookList;
    for(Book book : books){
        string name = book.GetName();
        if(name.substr(0, prefix.size()) == prefix)
            bookList.push_back(book);
    }
    return bookList;
}

vector<Book> Catalog :: searchBookByAuthor(string authorName) {
    vector<Book> bookList;
    auto p = authorMap[authorName];
    for(auto i : p.first)
        bookList.push_back(*i);
    return bookList;
}

vector<Book> Catalog :: getMostSoldBooksByAuthor(string authorName, int limit) {
    vector<Book> bookList;
    auto p = authorMap[authorName];
    auto pq = p.second;
    while(limit-- && pq.empty() == false){
        bookList.push_back(*(pq.top().second));
        pq.pop();
    }
    return bookList;
}

vector<Book> Catalog :: getMostSoldBooksByCategory(Category category, int limit) {
    vector<Book> bookList;
    auto pq = categoryMap[category];
    while(limit-- && pq.empty() == false){
        bookList.push_back(*(pq.top().second));
        pq.pop();
    }
    return bookList;
}

int main () {
    // cout << "Hello World!" << endl;
    Book book("HP & The PS", "J K Rowling", "Bloomsbury", 1997, Category::FICTION, 200, 80);
	Book book1("HP & The COS", "J K Rowling", "Bloomsbury", 1998, Category::FICTION, 1000, 100);
	Book book2("HP & The POA", "J K Rowling", "Bloomsbury", 1999, Category::FICTION, 2000, 500);
	Book book3("HP & The HBP", "J K Rowling", "Bloomsbury", 2005, Category::FICTION, 3000, 700);
	Book book4("The Immortals of Meluha", "Amish", "Westland", 2010, Category::MYTHOLOGY, 1500, 600);
	Book book5("The Secret of the Nagas", "Amish", "Westland", 2011, Category::MYTHOLOGY, 2500, 400);
	Book book6("The Oath of the Vayuputras", "Amish", "Westland", 2013, Category::MYTHOLOGY, 3500, 200);
	Book book7("Do Androids dream of Electric Sheep", "Philip K Dick", "DoubleDay", 1968, Category::SCI_FI, 30, 20);

	Catalog catalog;
	catalog.addBookToCatalog(book);
	catalog.addBookToCatalog(book1);
	catalog.addBookToCatalog(book2);
	catalog.addBookToCatalog(book3);
	catalog.addBookToCatalog(book4);
	catalog.addBookToCatalog(book5);
	catalog.addBookToCatalog(book6);
	catalog.addBookToCatalog(book7);

	vector<Book> list = catalog.getMostSoldBooksByAuthor("Amish", 2);
	for(Book book: list)
		cout << book.GetName() << " " << book.GetCount() << endl;

	cout << "**************************************************************************************\n";

	list = catalog.getMostSoldBooksByCategory(Category::FICTION, 2);
	for(Book book: list)
		cout << book.GetName() << " " << book.GetCount() << endl;
	cout << "**************************************************************************************\n";

	list = catalog.searchBookByAuthor("Amish");
	for(Book book: list)
		cout << book.GetName() << " " << book.GetCount() << endl;
	cout << "**************************************************************************************\n";

	list = catalog.searchBookByName("Do");
	for(Book book: list)
		cout << book.GetName() << " " << book.GetCount() << endl;
    
    return 0;
}