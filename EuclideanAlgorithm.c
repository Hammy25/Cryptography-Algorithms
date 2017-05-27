#include<stdio.h>
int gcd(int,int);
void main(){
	int a,b; 
	printf("Enter two numbers.\nFirst number:");
	scanf("%d",&a);
	printf("Second number:");
	scanf("%d",&b);
//	printf("\n");
	int answer = gcd(a,b);
	printf("GCD of %d and %d is %d.\n",a,b,answer); 
}
int gcd(int i,int j){
	int x,y,rem;
	x=i;
	y=j;
	while(y>0){
		rem = x%y;
		x = y;
		y = rem;
	}
	return x;
}
