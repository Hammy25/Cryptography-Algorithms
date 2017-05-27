#include <stdio.h>
int main(){
  int number,c,k;
  printf("Enter an decimal number: ");
  scanf("%d", &number);
  printf("%d in binary is: ", number);
  for (c = 31; c >= 0; c--){
    k = number >> c;
    if (k & 1)
      printf("1");
    else
      printf("0");
  }
  printf("\n");
  return 0;
}