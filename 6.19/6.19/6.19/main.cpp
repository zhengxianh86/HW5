#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int sumFoTwoDecks();
void throw36K(int *a);
void printTable(int *a);

int main()
{
	int a[11] = { 0 };
	int* aP = a;
	printf("耏36000Ω浑翴计瞷Ω计\n");
	throw36K(aP);
	printTable(aP);
}

int sumFoTwoDecks()
{
	int n1, n2;
	n1 = ((rand() % 6) + 1);
	n2 = ((rand() % 6) + 1);
	return n1+n2;
}

void throw36K(int *a)
{
	int i,j,num;
	for (i = 1; i <= 36000; i++)
	{
		num = sumFoTwoDecks();
		for (j = 2; j <= 12; j++)
		{
			if(num==j)
				a[j - 2]++;
		}
	}
}

void printTable(int *a)
{
	int i;
	printf("\n翴计");
	
	for (i = 2; i <= 12; i++) 
		printf("\t%d",i);

	printf("\nΩ计");

	for (i = 0; i < 11; i++)
		printf("\t%d",*(a+i));
	
	printf("\n诀瞯");

	for (i = 0; i < 11; i++)
		printf("\t%d%%",*(a + i)/360);
}
