#include<stdio.h>
typedef struct complex
{
    float real;
    float imag;
}complex;
complex input_chellox()
{
    complex k;
    printf("Enter the complex number a+bi in the form 'a b'\n");
    scanf("%f%f",&k.real,&k.imag);
    return k;
}
complex add_cmplx(complex a,complex b)
{
    complex r;
    r.real=a.real+b.real;
    r.imag=a.imag+b.imag;
    return r;
}
void output(complex a,complex b,complex c)
{
    printf("(%.1f+%.1fi) + (%.1f+%.1fi) is (%.1f+%.1fi)\n",a.real,a.imag,b.real,b.imag,c.real,c.imag);
}
int main()
{
    complex a,b,c;
    a=input_chellox();
    b=input_chellox();
    c=add_cmplx(a,b);
    output(a,b,c);
    return 0;
}