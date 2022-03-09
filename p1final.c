#include <stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("enter the numerator and denominator\n");
    scanf("%d%d %d%d" ,num1,den1,num2,den2);
}
void add(int num1,int den1, int num2, int den2, int *num3, int *den3)
{
  int i,gcd;
  *den3=den1*den2;
  *num3=(num1*den2)+(num2*den1);
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("the sum %d/%d + %d/%d is %d/%d ",num1,den1,num2,den2,num3,den3);

}
int main()
{
  int n1,n2,n3,d1,d2,d3;
  input (&n1,&d1,&n2,&d2);
  add(n1,d1,n2,d2,&n3,&d3);
  output(n1,d1,n2,d2,n3,d3);
  return 0;
}