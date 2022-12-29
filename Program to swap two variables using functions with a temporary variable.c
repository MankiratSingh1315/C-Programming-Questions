#include<stdio.h>
void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int x,y;
	printf("Enter 2 numbers:");
	scanf("%d %d",&x,&y);
	swap(&x,&y);
	printf("After swapping the no.'s are %d,%d",x,y);
}
