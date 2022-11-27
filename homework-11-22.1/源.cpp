#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>/*⽤到了srand函数，所以要有这个头⽂件*/
#include<stdio.h>
#include<math.h>
#define MAX 100
#define aim 15

int main()
 {
	int n = MAX;
	int number[MAX] = { 0 };
	int i;
	unsigned int seed;
	     printf("输入随机数的种子:\n");
	     scanf("%d", &seed);/*⼿动输⼊种⼦*/
	     srand(seed);
	     printf("产生的随机数:\n");
	for (i = 0; i < MAX; i++) 
	{
		         number[i] = rand() % 100;/*产⽣100以内的随机整数*/
		         printf("%d ", number[i]);
		
	}
	    printf("\n");
		printf("\n");
		for(int j=99;j>0;j--)
			for (int m = 0; m <= j; m++)
			{
				int tmp;
				if (number[m] > number[j])
				{
					tmp = number[m]; number[m] = number[j]; number[j] = tmp;//让随机数按从小到大的顺序排列
				}
			}
		printf("排好顺序的随机数：");
		for (i = 0; i < MAX; i++)
		{
			printf("%d ", number[i]);//查看随机数是否按顺序排列
		}
		
		printf("\n");
		printf("\n");
		int x = 0;
		for (int j = 1; j < 30 && number[i] != aim; j++)
			
		{
			i = MAX / pow(2, j);
			if(number[i]<aim)
			{
				i =i+ MAX / 4; 
				if (number[i] == aim)
				{
					x = 1; continue;
				}

			}
			if(number[i]>aim)
			{
				i =i- MAX / pow(2, j + 1);
				if (number[i] == aim)
				{
					x = 1; continue;
				}
				n=n / 2;
			}
			if(number[i]=aim)
			{
				x = 1; continue;
			}
			
		}
		if (x == 1)
			printf("能找到这个数\n");
		else
			printf("不能找到这个数\n");
	return 0;
	 }