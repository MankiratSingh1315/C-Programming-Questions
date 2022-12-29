#include<stdio.h>
int factorial(int a){
	if(a>0){
	return a*factorial(a-1);
	}else{
		return 1;
	}
}

int main(){
	int x;
	printf("Enter a number whose factorial is to be found:");
	scanf("%d",&x);
	printf("The factorial of %d is %d",x,factorial(x));
}
