#include <stdio.h>

int main() {
	char nom[20];

	printf("entre ton nom:\n");
	fflush(stdin);
	scanf("%s",&nom);
	printf("%s\n",nom);
	return 0;
}