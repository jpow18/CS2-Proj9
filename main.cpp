#include <iostream>
#include <vector>
#include <algorithm>
#include "Book.h"

using namespace bookClass;
using std::cin;
using std::vector;
using std::sort;

int printMenu();

int main() {

	vector<Book> bookDB;

	int choice = 1;

	while (choice == 1 || choice == 2) {

		choice = printMenu();

		switch (choice) {
		case 1:
		{
			cin.clear();
			string author, pubDate, title;
			cout << "Enter author's name: " << endl;
			getline(cin, author);
			cout << "Enter book title: " << endl;
			getline(cin, title);
			cout << "Enter publication date: " << endl;
			getline(cin, pubDate);

			Book tempBook(author, pubDate, title);
			bookDB.push_back(tempBook);
		}
		break;

		case 2:
			sort(bookDB.begin(), bookDB.end());

			cout << endl << "The contents of the database are: " << endl;

			for (auto i : bookDB) {
				i.outputAll();
			}
			cout << endl;
			break;

		case 3:
			return 0;
		}
	}
	
}

int printMenu() {
	cout << "*******************************************" << endl;
	cout << "1.\t Add new book" << endl;
	cout << "2.\t Print database sorted by author" << endl;
	cout << "3.\t Quit" << endl;
	cout << "*******************************************" << endl;

	int choice;
	cin >> choice;
	cin.ignore();
	return choice;
}