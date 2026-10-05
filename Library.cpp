#include "Library.h"

void Library::addBook(Book b)
{
	bookList.push_back(b);
	cout << "图书入库成功：" << b.getName() << endl;
}

Book* Library::findBook(string isbn)
{
	for (size_t i = 0; i < bookList.size(); i++)
	{
		if (bookList[i].getIsbn() == isbn)
		{
			return &bookList[i];
		}
	}
	return nullptr;
}

void Library::showAllBook()
{
	cout << "====== 图书馆全部藏书 ======" << endl;
	for (size_t i = 0; i < bookList.size(); i++)
	{
		bookList[i].showInfo();
	}
}
