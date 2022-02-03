#include<stdio.h>
#include<math.h> 
float input() 
{ 
   float n; 
   printf(" Enter the number:\n"); 
   scanf("%f",&n); 
   return n; 
} 
float my_sqrt(float n) 
{ 
  float s=n/2; 
  float t=0; 
   while(fabs(s-t) > 0.000001)
    { 
     t=s; 
     s=(n/t + t)/2;
    } 
  return s; 
} 
void output(float n, float result)
{
  printf("Square root of %f is %f\n",n,result); 
} 
int main() 
{ 
  float n=input(); 
  float r=my_sqrt(n); 
  output(n,r); 
  return 0; 
}