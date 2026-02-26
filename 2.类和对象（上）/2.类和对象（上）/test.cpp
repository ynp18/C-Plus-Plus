#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//class Stack
//{
//public:
//	void Push(int x)
//	{
//
//	}
//	void pop()
//	{
//
//	}
//	int top()
//	{
//		return 0;
//	}
//private:
//	int* a;
//	int top;
//	int capacity;
//};
//
//
//int main()
//{
//	Stack st;
//	st.pop();
//	st.Push(3);
//
//	return 0;
//}

//class Data
//{
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	//这里只是声明，没有开空间
//	//为了区分成员变量，?般习惯上成员变量
//	//会加?个特殊标识_，如或者开头或者加上m
//	int _year;
//	int _month;
//	int _day;
//};

//class Data
//{
//public:
//	void Init(int year, int month, int day);
//private:
//	//这里只是声明，没有开空间
//	//为了区分成员变量，?般习惯上成员变量
//	//会加?个特殊标识_，如或者开头或者加上m
//	int _year;
//	int _month;
//	int _day;
//};
//
//void Data::Init(int year, int month, int day)
//{
//	_year = year;
//	_month = month;
//	_day = day;
//}

//
//int main()
//{
//	Data d1;
//	d1.Init(2026, 2, 11);
//	return 0;
//}

// C++struct升级成了类
// 1类??可以定义函数
// 2struct名称就可以代表类型
// struct ListNodeCPP
//{
//	int val;
//	ListNodeCPP* next;
//};
//
//
//typedef struct ListNodeC
//{
//	int val;
//	struct ListNodeC* next;
//}LTNodeC;

//class Stack
//{
//public:
//	void Init(int n = 4);
//private:
//	int* arr;
//	int top = 0;
//	int capacity;
//};
//
//void Stack::Init(int n)
//{
//	arr = (int*)malloc(sizeof(int) * n);
//	if (arr == nullptr)
//	{
//		perror("malloc failed");
//		return;
//	}
//	capacity = n;
//	top = 0;
//}
//
//int main()
//{
//	Stack s1;
//	s1.Init();
//	return 0;
//}

class Date
{
public:
	//void Init(Date* const this,int year, int month, int day)
	void Init(int year, int month, int day)
	{
		_year = year;   //this->year=year;
		_month = month;  //this->month=month;
		_day = day;  //this->day=day;
	}
	//void Print(Date* const this)
	void Print()
	{
		cout << _year << "/" << _month << "/" << _day << endl;
	}
private:
	//这里只是申明，没有开空间
	int _year;    //this->_year
	int _month;   //this->_month
	int _day;     //this->_day
};

int main()
{
	Date d1;
	Date d2;

	//d1.Init(&d1,2026, 2, 27);
	d1.Init(2026, 2, 27);
	//d2.Init(&d2,2026, 2, 28);
	d2.Init(2026, 2, 28);


	//编译器编译后，类的成员函数默认都会在形参第⼀个位置，增加⼀个当前类类型的指针，叫做this
	//指针
	//d1.Print(Date* const this);
	//d1.Print(&d1);
	d1.Print();
	//d2.Print(Date* const this);
	//C++规定不能在实参和形参的位置显⽰的写this指针(编译时编译器会处理)，但是可以在函数体内显
	//⽰使用this指针。
	//d2.Print(&d2);
	d2.Print();
	return 0;
}