#include "Reader.h"

Reader::Reader(string name) : readerName(name)
{
}

bool Reader::borrowBook(Book* b)
{
	if (b == nullptr)
	{
		cout << "图书不存在，借书失败！" << endl;
		return false;
	}
	if (!b->getAvailable())
	{
		cout << "该书已被借出，无法借阅！" << endl;
	}
	b->setAvailable(false);
	borrowList.push_back(b);
	cout << readerName << " 借书成功：《" << b->getName() << "》" << endl;
	return true;
}

bool Reader::returnBook(Book* b)
{
	for (size_t i = 0; i < borrowList.size(); i++)
	{
		if (borrowList[i] == b)
		{
			b->setAvailable(true);
			borrowList.erase(borrowList.begin() + i);
			cout << readerName << " 还书成功：《" << b->getName() << "》" << endl;
			return true;
		}
	}
	cout << "该书不在" << readerName << "的借阅列表中！" << endl;
	return false;
}

void Reader::showBorrow()
{
	cout << readerName << " 当前借阅的图书：" << endl;
	if (borrowList.empty())
	{
		cout << "  （无借阅图书）" << endl;
		return;
	}
	for (size_t i = 0; i < borrowList.size(); i++)
	{
		cout << "  《" << borrowList[i]->getName()
			<< "》 ISBN：" << borrowList[i]->getIsbn() << endl;
	}
}

