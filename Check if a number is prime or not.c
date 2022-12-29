#include<stdio.h>
int prime(int a){
	int i;
	for(i=2;i<a;i++){
		if(a%i==0){
			break;
		}
	}
	if(i==a){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int x;
	printf("Enter a number to check prime or not:");
	scanf("%d",&x);
	if(prime(x)){
		printf("Number is prime");
	}else{
		printf("Number is not prime");
	}
}
