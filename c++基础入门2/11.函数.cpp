#include<iostream>
using namespace std;
int add(int num1, int num2)//num1,num2����Ϊ�β�
{
	int sum = num1 + num2;
	return sum;
}
#include"swap.h"//�����ķ��ļ���д
//1��ͷ�ļ�.h���壬��Ҫ����iostream��namespace��д������������
// 2��.cpp�ļ�д�������Ķ��壬#include "xxxx.h"
// 3,main�ļ���дinclude.����ʹ��
//void swap(int num1, int num2)
//{
//	int temp = 0;
//	cout << "����ǰnum1Ϊ" << num1 << endl;
//	cout << "����ǰnum2Ϊ" << num2 << endl;
//	temp = num1;
//	num1 = num2;
//	num2 = temp;
//	cout << "������num1Ϊ" << num1 << endl;
//	cout << "����ǰnum2Ϊ" << num2 << endl;
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
//����������д��main����֮ǰ���ں���������main����֮�������±���ʹ��
int max(int a, int b);
int main()
{
	int a = 0;
	int b = 4;//�˴���a,b����Ϊʵ�Σ�����ʵ��ֵ�Ĳ���������ʱʵ�δ��ݸ��β�
	/*cout << add(a, b) << endl;
	int c = 10;
	int d = 20;
	cout << "����ǰcΪ" << c << endl;
	cout << "����ǰdΪ" << d << endl;
	swap(c, d);
	cout << "������cΪ" << c << endl;
	cout << "������dΪ" << d << endl;*///ֵ���ݷ���ʱ��ʵ�α������ᷢ���ı�
	//����ֵ���ݵ�ʱ��ʵ��ֻ�ǰ��Լ���ֵ���ݸ��βΣ�ʵ�α���û�����仯
	//��������ʽ�����֣��޲����޷���ֵ���в����޷���ֵ���޲����з���ֵ���в����з���ֵ
	//1.�޲����޷���ֵ
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