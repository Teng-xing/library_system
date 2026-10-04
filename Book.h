#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
	string name;      //图书名称
	string isbn;      //isbn编号
	string press;     //出版社
	double price;     //价格
	int page;         //页数
	bool isAvailable; //true：可借 false：不可借

public:
	// 默认构造函数
	Book();
	// 重载构造函数
	Book(string n, string i, string p, double pr, int pg, bool avail);

	// 合法性校验 isbn简单校验：不为空
	bool checkIsbnValid(string isbn);

	// set 修改成员
	void setName(string n);
	void setIsbn(string i);
	void setPress(string p);
	void setPrice(double pr);
	void setPage(int pg);
	void setAvailable(bool b);

	// get 获取成员
	string getName();
	string getIsbn();
	string getPress();
	double getPrice();
	int getPage();
	bool getAvailable();

	//输出图书全部信息
	void showInfo();
};
