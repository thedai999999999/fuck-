#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num = 1,i;
	
	while (num<6){
		i=0;
		while(i<num){
			printf("*");	
			i++;
		}
		printf("\n");
		num = num + 1;
	}
		while (num>5){
		i=0;
		while(i<num){
			printf("*");	
			i++;
		}
		printf("\n");
		num = num + 1;
	return 0;
}
} 

