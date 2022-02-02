#include<stdio.h>
void input_two_string(char *a, char *b)
{
  printf("Enter two strings:\n");
  scanf("%s%s",a,b);
}
int strcmp(char *a,char *b)
{
 for(int i=0;a[i]!='\0'||b[i]!='\0';i++)
 {
   if(b[i]>a[i])
     return 1;
   else if(a[i]>b[i])
     return -1;
 }
 return 0;
}
void output(char *a, char *b, int result)
{
  if(result==1)
   printf("%s is greater than %s\n",b,a);
  else if(result==-1)
   printf("%s is greater than %s\n",a,b);
  else
   printf("%s is egual to %s\n",a,b);  
}
int main()
{
  char a[50],b[50];int x;
  input_two_string(a,b);
  x=strcmp(a,b);
  output(a,b,x);
  return 0;
}