#include <iostream>
#include "Book.h"
#include "Library.h"
#include "Reader.h"

using namespace std;

int main()
{
	//1. 创建图书
	Book b1("C++程序设计", "97871155", "人民邮电出版社", 49.5, 320, true);
	Book b2("数据结构（C++版）", "97870405", "高等教育出版社", 38.0, 280, true);
	Book b3("计算机操作系统", "97873026", "清华大学出版社", 45.0, 350, true);

	//2. 图书馆（组合 has-a）
	Library lib;
	lib.addBook(b1);
	lib.addBook(b2);
	lib.addBook(b3);
	lib.showAllBook();

	//3. 读者
	Reader r1("张三");
	Reader r2("李四");

	//4. 借书测试（依赖 use-a）
	Book* p1 = lib.findBook("97871155");
	r1.borrowBook(p1);

	Book* p2 = lib.findBook("97870405");
	r2.borrowBook(p2);

	r1.showBorrow();
	r2.showBorrow();

	//5. 还书
	r1.returnBook(p1);
	r1.showBorrow();

	r2.borrowBook(p1);
	r2.showBorrow();

	system("pause");
	return 0;
}
