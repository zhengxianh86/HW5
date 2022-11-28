#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
void arrangement(int *a);
int binarySearch(int *a, int n);

int main()
{
	int a[SIZE] = { 0 };
	int i, num, g;
	printf("請輸入%d個整數:",SIZE);
	for(i=0;i<SIZE;i++)
		scanf("%d", &a[i]);
	arrangement(a);
	printf("重新排列...\n新陣列為:");
	for (i = 0; i < SIZE; i++)
		printf("%3d",a[i]);
	printf("\n\n請輸入欲搜尋的數:");
	scanf("%d", &num);
	g = binarySearch(a, num);
	printf("%d在第%d元素", num, g);
}

void arrangement(int*a)
{
	int i, j, temp;
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE-1; j++)
		{
			if (*(a + j) > *(a + j + 1))
			{
				temp = *(a + j);
				*(a + j) = *(a + j+1);
				*(a + j + 1) = temp;
			}
		}
	}
}

int binarySearch(int*a , int n)
{
	int le = 0, ri = SIZE, mid = (SIZE + 1)/2;
	while (le<=ri)
	{
		if (*(a + mid) < n)//n在右邊
		{
			le = mid;
			mid = (ri + le) / 2;
		}
		else if (*(a + mid) > n)//n在左邊
		{
			ri = mid;
			mid = (ri + le) / 2;
		}
		else
			return mid;
	}
}