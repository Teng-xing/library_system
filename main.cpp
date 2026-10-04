#include "Book.h"

int main()
{
	//调用默认构造
	Book b1;
	b1.showInfo();

	//重载构造创建图书对象
	Book b2("C++面向对象程序设计", "9787302643948", "清华大学出版社", 59.8, 380, true);
	b2.showInfo();

	//测试修改
	b2.setPrice(49.9);
	b2.setAvailable(false);
	cout << "\n修改之后：" << endl;
	b2.showInfo();

	return 0;
}
