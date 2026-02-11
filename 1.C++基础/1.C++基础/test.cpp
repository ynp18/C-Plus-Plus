#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <iostream>

//using namespace std;
//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}

//#include <stdlib.h>
//int a = 10;
//
////域
//namespace pid
//{
//	int rand = 10;
//}
//
//int main()
//{
//	printf("%p\n", rand);
//	printf("%d\n", pid::rand);
//	
//	int a = 1;
//	printf("%d\n", a);
//
//	//::域作用限定符,::左边没有东西代表是全局变量
//	printf("%d\n", ::a);
//}


//namespace pid
//{
//	int rand = 10;
//
//	int add(int a, int b)
//	{
//		return a + b;
//	}
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//}
//
//int main()
//{
//	printf("%d\n", pid::rand);
//	printf("%d\n", pid::add(1,3));
//	struct pid::Node node;
//	return 0;
//}

//namespace pid
//{
//	namespace jiaodu
//	{
//		int rand = 10;
//
//		int add(int a, int b)
//		{
//			return a + b;
//		}
//		struct Node
//		{
//			struct Node* next;
//			int val;
//		};
//	}
//	namespace sudu
//	{
//		int rand = 0;
//
//		int add1(int a, int b)
//		{
//			return a + b;
//		}
//		struct Node
//		{
//			struct Node* next;
//			int val;
//		};
//	}
//}
//
//int main()
//{
//	printf("%d\n", pid::jiaodu::add(1,4));
//	printf("%d\n", pid::sudu::add1(1,3));
//	struct pid::jiaodu::Node node;
//	struct pid::sudu::Node node1;
//	printf("%d\n", pid::jiaodu::rand);
//	printf("%d\n", pid::sudu::rand);
//	return 0;
//}
//
//namespace pid
//{
//	int a = 10;
//	int b = 0;
//}
//
//using pid::a;
//
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	double b = 0.95;
//	char c = 'x';
//	
//	cout << "a "<<a<<"b "<<b<<"c "<<c <<" " << endl;
//	cout << a << " " << b << " " << c << " " << endl;
//
//	//scanf("%d%lf", &a, &b);
//	//printf("%d%lf", a, b);
//	
//	//可以自动识别变量的类型
//	cin >> a;
//	cin >> b>>c;
//	cout << a << " " << b << " " << c <<" " << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	//在io需求⽐较⾼的地⽅，如部分⼤量输⼊的竞赛题中，加上以下3⾏代码
//	//可以提⾼C++IO效率
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	return 0;
//}

//缺省参数不能声明和定义同时给

//缺省参数
//#include<iostream>
//using namespace std;
//
//void Func(int a = 10)
//{
//	cout << a << endl;
//}
////全缺省
//void Func1(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
////半缺省
//void Func2(int a, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
//
//int main()
//{
//	Func();
//	Func(30);
//	Func1();
//	Func1(20, 30);
//	Func2(50);
//	return 0;
//}

//#include <iostream>
//using namespace std;

////函数重载
//// 1.函数类型不同
//int add(int a, int b)
//{
//	cout << "int add(int a,int b)" << endl;
//	cout << a + b << endl;
//	return a + b;
//}
//
//double add(double a, double b)
//{
//	cout << "double add(int a,int b)" << endl;
//	cout << a + b << endl;
//	return a + b;
//}
//
////2.参数个数不同
//void f()
//{
//	cout << "f()" << endl;
//}
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}
//
////3.参数类型顺序不同
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//
//void f(char b , int a)
//{
//	cout << "f(char b , int a)" << endl;
//}

//
//
//int main()
//{
//	add(4, 6);
//	add(8.7, 9.5);
//	f();
//	f(10);
//	f(10, 's');
//	f('i', 8);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
////下⾯两个函数构成重载
//
//// f1()但是调⽤时，会报错，存在歧义，编译器不知道调⽤谁
//
//void f1()
//{
//	cout << "f1()" << endl;
//}
//
//void f1(int a = 10)
//{
//	cout << "f1(int a)" << endl;
//}
//
//int main()
//{
//	return 0;
//}

//#include <iostream>
//using namespace std;
//引用
//引⽤在定义时必须初始化
//⼀个变量可以有多个引⽤
//引⽤⼀旦引⽤⼀个实体，再不能引⽤其他实体
//int main()
//{
//	int a = 10;
//	int& b = a;
//	int c = 20;
//	b = c;
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//void func(const int& val)
//{
//
//}
//
//int main()
//{
//	const int a = 10;
//	int rd = a;
//	//int& ra = a;
//	const int& ra = a;
//	//只有指针和引用的时候会涉及到权限放大的问题
//	//引用的时候权限可以缩小，但不能放大
//	int b = 40;
//	const int& rb = b;
//	b++;
//
//	//int& x=a+b; ，这句话不行，因为临时变量在C++中会认为是常量
//
//	const int& x = a + b;
//	const int& rc = 30;
//
//	double d = 12.56;
//	const int& i = d;
//	
//	func(d);
//	func(a + d);
//
//	return 0;
//}

//#define ADD(a,b)    ((a)+(b))
//
//#include<iostream>
//using namespace std;
//
//inline int ADD(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int ret = ADD(1, 2);
//	cout << ret * 5 << endl;
//	return 0;
//}

#include <iostream>
using namespace std;

void f(int x)
{
	cout << "f(int x)" << endl;
}

void f(int* ptr)
{
	cout << "f(int* ptr)" << endl;
}

int main()
{
	f(0);
	f(NULL);
	f(nullptr);
	void* p1 = NULL;
	int* p2 = (int*)p1;
	int i = NULL;
	int i = nullptr;
	return 0;
}