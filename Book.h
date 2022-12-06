#ifndef BOOK_H
#define BOOK_H

#include <string>

namespace bookClass {

	using std::string;
	using std::cout;
	using std::endl;

	class Book {

	public:
		Book();
		Book(string authName, string pubDate, string title);
		friend bool operator<(const Book leftBook, const Book rightBook);

		// getters
		string getAuthor();
		string getPubDate();
		string getTitle();
		void outputAll();

	private:
		string authorName;
		string publicationDate;
		string bookTitle;
	};
}
#endif // !BOOK_H
