#include<iostream>
using namespace std;
int add(int num1, int num2)//num1,num2被称为形参
{
	int sum = num1 + num2;
	return sum;
}
#include"swap.h"//函数的分文件编写
//1，头文件.h定义，需要包含iostream，namespace，写出函数的声明
// 2，.cpp文件写出函数的定义，#include "xxxx.h"
// 3,main文件中写include.即可使用
//void swap(int num1, int num2)
//{
//	int temp = 0;
//	cout << "交换前num1为" << num1 << endl;
//	cout << "交换前num2为" << num2 << endl;
//	temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << "交换后num1为" << num1 << endl;
//	cout << "交换前num2为" << num2 << endl;
//}
void test00()
{
	cout << "this is test00" << endl;
}
void test01(int a)
{
	cout << "this is test01 a = " << a << endl;
}
int test02()
{
	cout << "this is test02" << endl;
	return 1000;
}
int test03(int a)
{
	cout << "this is test03" << endl;
	return a;
}
//函数的声明写在main函数之前，在函数定义在main函数之后的情况下必须使用
int max(int a, int b);
int main()
{
	int a = 0;
	int b = 4;//此处的a,b被称为实参，具有实际值的参数，调用时实参传递给形参
	/*cout << add(a, b) << endl;
	int c = 10;
	int d = 20;
	cout << "交换前c为" << c << endl;
	cout << "交换前d为" << d << endl;
	swap(c, d);
	cout << "交换后c为" << c << endl;
	cout << "交换后d为" << d << endl;*///值传递发生时，实参本身并不会发生改变
	//发生值传递的时候，实参只是把自己的值传递给形参，实参本身没发生变化
	//函数的形式有四种，无参数无返回值，有参数无返回值，无参数有返回值，有参数有返回值
	//1.无参数无返回值
	/*test00();
	test01(10000);
	test02();
	int c = test02();
	cout << "c = " << c << endl;
	test03(100000);
	int d = test03(100000);
	cout << "d = " << d <<endl;*/
	/*int c = 10;
	int d = 20;
	cout << max(c, d) << endl; */
	int c = 10;
	int d = 20;
	swap(c , d);
	return 0;
}
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}