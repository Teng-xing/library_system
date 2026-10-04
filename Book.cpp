#include "Book.h"

//默认构造
Book::Book()
{
	name = "未知书名";
	isbn = "00000000";
	press = "未知出版社";
	price = 0.0;
	page = 0;
	isAvailable = true;
}

//重载构造
Book::Book(string n, string i, string p, double pr, int pg, bool avail)
{
	name = n;
	if (checkIsbnValid(i))
		isbn = i;
	else
		isbn = "00000000";

	press = p;
	if (pr > 0)
		price = pr;
	else
		price = 0;

	if (pg > 0)
		page = pg;
	else
		page = 0;

	isAvailable = avail;
}

bool Book::checkIsbnValid(string isbn)
{
	//简单校验：isbn不能为空字符串
	if (isbn.empty())
		return false;
	return true;
}

void Book::setName(string n) { name = n; }
void Book::setIsbn(string i)
{
	if (checkIsbnValid(i))
		isbn = i;
}
void Book::setPress(string p) { press = p; }
void Book::setPrice(double pr)
{
	if (pr >= 0) price = pr;
}
void Book::setPage(int pg)
{
	if (pg >= 0) page = pg;
}
void Book::setAvailable(bool b) { isAvailable = b; }

string Book::getName() { return name; }
string Book::getIsbn() { return isbn; }
string Book::getPress() { return press; }
double Book::getPrice() { return price; }
int Book::getPage() { return page; }
bool Book::getAvailable() { return isAvailable; }

void Book::showInfo()
{
	cout << "----------图书信息----------" << endl;
	cout << "书名：" << name << endl;
	cout << "ISBN：" << isbn << endl;
	cout << "出版社：" << press << endl;
	cout << "价格：" << price << endl;
	cout << "页数：" << page << endl;
	if (isAvailable)
		cout << "状态：可借阅" << endl;
	else
		cout << "状态：不可借阅" << endl;
	cout << "----------------------------" << endl;
}
