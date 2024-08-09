#include<iostream>
using namespace std;
#include"swap.h"
int main()
{
	//定义指针
	//int a = 10;
	//int* p;
	//p = &a;
	//cout << "&a = " << &a << endl;
	//cout << "p = " << p << endl;
	//cout << "a = " << a << endl;
	//cout << "*p = " << *p << endl;
	////使用指针
	////*代表解引用，可以找到指针所指的内存的值
	//*p = 1000;
	//cout << "a = " << a << endl;
	////32位操作系统指针占四个字节，64位占八个字节
	//cout << "sizeof(int*) = " << sizeof(int*) << endl;
	//cout << "sizeof(int*) = " << sizeof(char*) << endl;
	//cout << "sizeof(int*) = " << sizeof(double*) << endl;
	//cout << "sizeof(int*) = " << sizeof(float*) << endl;
	//空指针，指向内存中编号为0的空间，且不可以被访问
	//任何的访问都会报错
	//const修饰指针
	//可以修改指针的指向，但是不可以修改指针解引用的值
	int a = 10;
	int b = 20;
	//q = &b会报错
	//指针与数组
	int arr[5] = { 1,2,3,4,5 };
	int* r = arr;
	cout << "数组的第一个数字为：" << *r << endl;
	int* p2 = arr;
	for (int i = 0; i < 5; i++)
	{
		cout << "数组的第" << i+1<< "个元素为" << *p2 << endl;
		p2++;
	}
	//地址传递
	swap01(&a, &b);
	cout << "a的值为" << a << endl;
	cout << "b的值为" << b << endl;
	return 0;
}