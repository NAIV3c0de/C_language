#include<iostream>
using namespace std;
#include"swap.h"
int main()
{
	//����ָ��
	//int a = 10;
	//int* p;
	//p = &a;
	//cout << "&a = " << &a << endl;
	//cout << "p = " << p << endl;
	//cout << "a = " << a << endl;
	//cout << "*p = " << *p << endl;
	////ʹ��ָ��
	////*��������ã������ҵ�ָ����ָ���ڴ��ֵ
	//*p = 1000;
	//cout << "a = " << a << endl;
	////32λ����ϵͳָ��ռ�ĸ��ֽڣ�64λռ�˸��ֽ�
	//cout << "sizeof(int*) = " << sizeof(int*) << endl;
	//cout << "sizeof(int*) = " << sizeof(char*) << endl;
	//cout << "sizeof(int*) = " << sizeof(double*) << endl;
	//cout << "sizeof(int*) = " << sizeof(float*) << endl;
	//��ָ�룬ָ���ڴ��б��Ϊ0�Ŀռ䣬�Ҳ����Ա�����
	//�κεķ��ʶ��ᱨ��
	//const����ָ��
	//�����޸�ָ���ָ�򣬵��ǲ������޸�ָ������õ�ֵ
	int a = 10;
	int b = 20;
	//q = &b�ᱨ��
	//ָ��������
	int arr[5] = { 1,2,3,4,5 };
	int* r = arr;
	cout << "����ĵ�һ������Ϊ��" << *r << endl;
	int* p2 = arr;
	for (int i = 0; i < 5; i++)
	{
		cout << "����ĵ�" << i+1<< "��Ԫ��Ϊ" << *p2 << endl;
		p2++;
	}
	//��ַ����
	swap01(&a, &b);
	cout << "a��ֵΪ" << a << endl;
	cout << "b��ֵΪ" << b << endl;
	return 0;
}