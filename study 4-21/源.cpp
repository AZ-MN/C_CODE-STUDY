#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


 //关机程序
int main()
{
	char input[20] = { 0 };

	system("shutdown -s -t 60");

again:

	printf("请注意，你的电脑在一分钟后关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;


}


//int main()
//{
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//}
//int ADD(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 20;
//	int num2 = 10;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	/*sum = num1 + num2;*/
//	sum=ADD(a , b);
//	sum=ADD(num1, num2);
//
//	printf("sum=%d\n",sum);
//	return 0;
//
//
//}
////int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if(line>=20000)
//	printf("good offer");
//	return 0;
//
//}