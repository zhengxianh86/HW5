#include<stdio.h>
#include<stdlib.h>

int findMax(int* a,int i);

int main()
{
	int i,max;
	int a[100] = { 0 };
	printf("請輸入一堆正整數(輸入-1已結束):");
	for (i = 0;i < 100; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] == -1)
		{
			a[i] = 0;
			break;
		}
	}
	max = findMax(&a[0], i);
	printf("%d為最大數", max);
}

int findMax(int* a, int i)
{
	int j, max = 0;
	for (j = 0; j < i; j++)
	{
		if (max < *(a + j))
			max = *(a + j);
	}
	return max;
}