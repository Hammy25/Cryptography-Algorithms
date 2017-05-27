#include<stdio.h>
int* convertDectoBin(int,int*);
int arraylength(int*);
void printarray(int*);
void main(){
	int num;
	int *bin;
	int numBin[];
	printf("Enter number in decimal format:");
	scanf("%d",&num);
	bin = convertDectoBin(num,numBin);
	//int array1[4] = {1,2,3,5};
	//printarray(bin);
	//printf("%d\n",*(bin+3));	
	int length = arraylength(bin);
	printf("Length is %d.\n",length);
}
int* convertDectoBin(int i,int* j){
	int rem,index=0;
	int binary[100];
	for(i;i>0;index++){
		rem=i%2;
		//printf("%d \n",rem);
		i=i/2;
		j[index]=rem;
		printf("%d\n",j[index]);
	}
	//printarray(binary);
	//j=binary;
	/*for(;*j!='\0';j++){
		printf("%d \n",*j);
	}
	*/
	//printarray(j);
	return j;
}

int arraylength(int *arr){
	int num = 0;
	for(num;*arr!='\0';arr++){
		num++;
	}
	return num;
}
void printarray(int *ar){
	int i = 0;
	for(i;*ar!='\0';ar++){
		printf("%d \n",*ar);
	}
}


