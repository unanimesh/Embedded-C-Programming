#include<stdio.h>
int main()
{
	char data = 100;

	printf("Tha data: %d\n",data);

	printf("The address: %p\n",&data);

	char* pdata = (char*)&data;

	char variable = *pdata;

	printf("The data: %d\n", variable);

	*pdata = 65;

	printf("The data: %d\n",data);
}
