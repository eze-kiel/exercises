#include <stdio.h>
#include <math.h>

signed short signe(float nbr);
float saisiePremierEntier(void);
float saisieSecondEntier(void);
float saisieTroisiemeEntier(void);


int main(){

	signed short type;
	float a, b, c, result, discriminant, signe;

	printf("what kind of result do you want to solve?\n1: first order\n2: second order\n");
	fflush(stdin);
	scanf("%hd", &type);

	switch(type){
		case 1:
			printf("you chose the first order solver : ax + b = 0\n");
			a = saisiePremierEntier();
			b = saisieSecondEntier();
			result = (0 - b)/a;
			printf("the result is: %f\n", result);
			break;
		case 2:
			printf("you chose the second order solver: ax² + bx + c = 0\n");
			a = saisiePremierEntier();
			b = saisieSecondEntier();
			c = saisieTroisiemeEntier();

			discriminant = (b*b) + (4*a*c);
			signe = signe(discriminant);
			printf("le signe du discriminant est: %f\n", signe);

			break;
		default:
			printf("unknown command\n");
			break;	
	}
	return 0;
}

// FUNC DEF 

float saisiePremierEntier(void){
	
	float a;
	printf("enter a\n");
	fflush(stdin);
	scanf("%f", &a);
	return a;
}
float saisieSecondEntier(void){
	
	float a;
	printf("enter b\n");
	fflush(stdin);
	scanf("%f", &a);
	return a;
}
float saisieTroisiemeEntier(void){
	
	float a;
	printf("enter c\n");
	fflush(stdin);
	scanf("%f", &a);
	return a;
}
signed short signe(float nbr){
	signed short signe;

	if (nbr<0){
		signe = -1;
	}
	else{
		if (nrb=0){
			signe = 0;
		}
		else{
			signe = 1;
		}
	}
	return signe;
}
