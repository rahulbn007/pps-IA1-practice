#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("Enter %d numbers:\n",n);
  int i;
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
}
int sum_n_arrays(int n,int a[n])
{
int sum=0;
  for(int i=0;i<n;i++)
    sum+=a[i];
return sum;
}
void out_put(int n,int a[n],int sum)
{
  int i;
   for( i=0;i<n-1;i++)
     printf("%d+",a[i]);
   printf("%d is %d",a[i],sum);
}
int main()
{
  int x,z;
  x=input_array_size();
  int a[x];
  input_array(x,a);   
  z= sum_n_arrays(x,a);
  out_put(x,a,z);
return 0;
}