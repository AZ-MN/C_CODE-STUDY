#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int a = 10;
	int b = 20;
	int max = 0;

	max = (a > b ? a : b);

	if (a > b)
		max = a;
	else
		max = b;
	printf("max=%d\n", max);

	return 0;


}
//int main()
//{
//	int a=10;
//	//int b = a++;后置++，想使用，再++
//	//int b = ++a;前置++，先++，再使用
//	//int b = a--;//同上
//	int b = --a;
//
//	printf("a=%d  b=%d\n", a, b);
//	
//
//	return 0;
//
// 
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	 //~--按（2进制）位取反
//		//负数在内存中存储的时候，存储的是二进制的补码
//	//原码: 0000
//	//反码：1111
//	//补码：1110
//	printf("%d\n", b);//b=-1，使用的，打印的是这个数的原码
//	 
//	return 0;
//
//}
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(arr));
//	printf("%d\n",sizeof(arr) / sizeof(arr[0]));
//
//	
//	return 0;
//
//}

//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = MAX(num1, num2);
//	printf("两个数中的最大数：%d\n", max);
//	return 0;
//
//
//
//}