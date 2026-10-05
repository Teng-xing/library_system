#pragma once
#include "Book.h"
#include <vector>
class Library
{
private:
	vector<Book> bookList;
public:
	void addBook(Book b);
	Book* findBook(string isbn);
	void showAllBook();
};
