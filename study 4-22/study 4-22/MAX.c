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
//	//int b = a++;����++����ʹ�ã���++
//	//int b = ++a;ǰ��++����++����ʹ��
//	//int b = a--;//ͬ��
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
//	 //~--����2���ƣ�λȡ��
//		//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//ԭ��: 0000
//	//���룺1111
//	//���룺1110
//	printf("%d\n", b);//b=-1��ʹ�õģ���ӡ�����������ԭ��
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
//	printf("�������е��������%d\n", max);
//	return 0;
//
//
//
//}