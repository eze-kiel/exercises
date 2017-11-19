#include <stdio.h>

int main(){

	signed short count;

	printf("enter the value of 'count':\n");
	fflush(stdin);
	scanf("%hd", &count);

	for (signed short i = 1; i < count+1; ++i)
	{
		printf("%hd\n", i);
	}
	return 0;
}