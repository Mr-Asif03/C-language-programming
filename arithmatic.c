#include<stdio.h>
int main()
{
    int a,b,sum,sub;
    float div,multi,modulus;
    printf("\n Enter 1st no.=");
    scanf("%d",&a);
    printf("\n Enter 2nd no.=");
    scanf("%d",&b);
    sum=a+b;
    sub=a-b;
    multi=a*b;
    div=a/b;
    modulus=a%b;
    printf("\nsum=%d",sum);
    printf("\nsub=%d",sub);
    printf("\n division=%f",div);
    printf("\n multiply=%f",multi);
    printf("\n modulus of a and b = %f",modulus);
    return 0;

}