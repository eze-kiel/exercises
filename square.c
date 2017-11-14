#include <stdio.h>

void drawBox(signed short, signed short);

int main(void){
	
	drawBox(10,20);

	return 0;
}

// FUNC DEF	

void drawBox(signed short row, signed short column){

	signed short col;

	for( ; row > 0; row--){
		for(col = column; col > 0; col--){
			printf("X");
		}
		printf("\n");
	}
}