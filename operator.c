#include <stdio.h>

signed short saisieEntier(void);
char saisieOperateur(void);

int main(void){
	signed short var1, var2, result;
	char op;

	op = saisieOperateur();
	var1 = saisieEntier();
	var2 = saisieEntier();

	switch (op){
		case '+':
			result = var1 + var2;
			printf("the result of %hd %c %hd is %hd\n", var1, op, var2, result);
			break;
		case '-':
			result = var1 - var2;
			printf("the result of %hd %c %hd is %hd\n", var1, op, var2, result);
			break;
		case '*':
			result = var1 * var2;
			printf("the result of %hd %c %hd is %hd\n", var1, op, var2, result);
			break;
		case '/':
			result = var1 / var2;
			printf("the result of %hd %c %hd is %hd\n", var1, op, var2, result);
			break;
		default:
			printf("this operator is not assigned, or doesn't exist\n");

	}
	return 0;
}

signed short saisieEntier(void){
	signed short var;
	fflush(stdin);
	printf("enter a signed short:\n");
	scanf("%hd", &var);
	return var;
}
char saisieOperateur(void){
	char ope;
	fflush(stdin);
	printf("enter an operator:\n");
	scanf("%c", &ope);
	return ope;
}