#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void stringReverse(char* a);

int main()
{
	char a[100];
	char* aPtr = a;
	printf("Please type in a string:");
	scanf("%s", a);
	//printf("%d",sizeof(a));
	stringReverse(aPtr);
}

void stringReverse(char* a)
{
	int w;
	printf("¦r¦ê­ËµÛ¦L¬°:");

	for (w = 0; *(a + w) != '\0'; w++);
	for (w = w-1;w>=0;w--)
		printf("%c", *(a + w));
	printf("\n");
}