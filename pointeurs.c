#include <stdio.h>

signed short saisie_nombre();
void inverser_nombres(signed short *nb1, signed short *nb2);

int main(){

	signed short var1, var2;

	var1 = saisie_nombre();
	var2 = saisie_nombre();

	printf("the first number is %hd, and the second is %hd\n", var1, var2);
	inverser_nombres(&var1, &var2);
	printf("the first number is %hd, and the second is %hd\n", var1, var2);

	return 0;
}

signed short saisie_nombre(void){
	signed short var;
	printf("enter a signed short: \n");
	fflush(stdin);
	scanf("%hd", &var);
	return var;
}

void inverser_nombres(signed short *nb1, signed short *nb2){
	signed short tmp;
	tmp = *nb2;
	*nb2 = *nb1;
	*nb1 = tmp;

}