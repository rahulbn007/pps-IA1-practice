#include<stdio.h>
int input_n()
{ 
  int n;
  printf("Enter a no:\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int sum=0;
  for(int i=1;i<=n;i++)
     sum+=i;
   return sum;
}
void output(int n,int sum)
{
  int i;
 for(i=1;i<n;i++)
   printf("%d+",i);
  printf("%d is %d",i,sum);
}
int main()
{
  int x,y;
  x=input_n();
  y=sum_n(x);
  output(x,y);
  return 0;
}