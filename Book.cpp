#include <iostream>
#include "Book.h"

namespace bookClass {

	Book::Book() : authorName(""), publicationDate(""), bookTitle("")
	{}

	Book::Book(string authName, string pubDate, string title) : authorName(authName), publicationDate(pubDate), bookTitle(title)
	{}

	bool operator<(const Book leftBook, const Book rightBook) {
		if (leftBook.authorName < rightBook.authorName) {
			return true;
		}
		else {
			return false;
		}
	}

	// getters
	string Book::getAuthor() {
		return authorName;
	}
	string Book::getPubDate() {
		return publicationDate;
	}
	string Book::getTitle() {
		return bookTitle;
	}
	void Book::outputAll() {
		if (authorName == "" || bookTitle == "" || publicationDate == "") {
			cout << "Sorry, author name, booktitle, or publication date has not been entered yet." << endl;
		}
		else {
			cout << authorName << ", " << bookTitle << ", " << publicationDate << endl;
		}
	}
}