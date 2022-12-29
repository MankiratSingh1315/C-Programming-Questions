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
	int x,j;
	printf("Enter a number till where you want to print prime numbers:");
	scanf("%d",&x);
	for(j=0;j<x;j++){
		if(prime(j)){
			printf("%d, ",j);
		}
	}
	return 0;
}
