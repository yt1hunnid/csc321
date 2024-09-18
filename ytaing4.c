//Yyong Taing
//csc-321
//9/17

#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int x = 0;
	double y = 0.0;
	char c = 'b';
	float z = 0.0;

	printf("Enter an integer: ");
	scanf("%d",&x);

	printf("Enter a double: ");
	scanf("%lf",&y);

	printf("Enter a char: ");
	scanf(" %c",&c);

	printf("Enter a float: ");
	scanf("%f", &z);



	if(x > 4 ){
		printf("Number inputted is larger than 4 \n");
	}
	else if(x==4) {
		printf("Number inputted is 4 \n");
	}
	else{
		printf("Number inuputted is less than 4 \n");
	}
	
	if(y > 4.0 ){
                printf("Double inputted is larger than 4.0 \n");
        }
        else if(y==4.0) {
                printf("Double inputted is 4.0 \n");
        }
        else{
                printf("Double inuputted is less than 4.0 \n");
        }

	if(c != 'a'){
		printf("Character is not a \n");
	}
	else {
		printf("Character is a \n");
	}

	if(z > 6.00 ){
                printf("Float inputted is larger than 6.00 \n");
        }
        else if(z==6.00) {
                printf("Float inputted is 6.00 \n");
        }
        else{
                printf("Float inuputted is less than 6.00 \n");
        }

	return EXIT_SUCCESS;
}

