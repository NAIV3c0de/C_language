#include<iostream>
using namespace std;
int main()
{
	//数组练习，数组元素逆置
	/*int arr[5] = { 0,1,2,3,4 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int temp = 0;
		while(start < end) {
			temp = arr[start];
			arr[start] = arr[end];
			arr[end] = temp;
			start++;
			end--;
	}
		for (int i = 0; i < 5; i++)
		{
			cout << arr[i] << endl;
		}
	*/
	//冒泡排序
	int arr2[] = { 9,8,7,6,5,4,3,2,1 };
	//排序前的数组
	for (int i = 0; i < 9; i++)
	{
		cout << arr2[i] << " "; 
	}
	//冒泡排序
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8 - i; j++)
		{
			if (arr2[j] > arr2[j + 1])
			{
				int temp = 0;
				temp = arr2[j + 1];
				arr2[j+1] = arr2[j];
				arr2[j] = temp;
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		cout << arr2[i] << " ";
	}
	return 0;
}