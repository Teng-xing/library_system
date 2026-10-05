#pragma once
#include "Book.h"
#include <vector>
class Reader
{
private:
	string readerName;
	vector<Book*> borrowList;
public:
	Reader(string name);
	bool borrowBook(Book* b);
	bool returnBook(Book* b);
	void showBorrow();
};


