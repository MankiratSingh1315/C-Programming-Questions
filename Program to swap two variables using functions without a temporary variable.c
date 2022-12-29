#include<stdio.h>
void swap(int *a, int *b){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
int main(){
	int x,y;
	printf("Enter 2 numbers:");
	scanf("%d %d",&x,&y);
	swap(&x,&y);
	printf("After swapping the no.'s are %d,%d",x,y);
}
