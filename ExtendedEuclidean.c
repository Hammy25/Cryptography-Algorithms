/* Extended Euclidean Algorithm */
#include <stdio.h>
int gcd(int,int,int*,int*);
void main(char *argv[], int argc){
	 int num1,num2,num3,num4;
	 int *p1,*p2;
	 p1 = &num3;
	 p2 = &num4;
	 printf("Enter 2 digits.\n1st number: ");
     	 scanf("%d",&num1);
	 printf("2nd number: ");
	 scanf("%d",&num2);
	 int result = gcdExtended(num1,num2,p1,p2);
	 printf("GCD = %d",result);
	 printf("\nX = %d and Y = %d\n",*p1,*p2);
}
int gcdExtended(int a, int b, int *x, int *y){
	if(a==0){
		*x = 0;
		*y = 1;
		return b;
	}
	int x0,y0,gcd;
	gcd = gcdExtended(b%a,a,&x0,&y0);
	*x=y0-(b/a)*x0;
	*y=x0;
	return gcd;
}
