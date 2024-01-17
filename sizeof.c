#include<stdio.h>
int main()
{ int x;
    printf("\nsize of x=",sizeof(x));
    printf("\n size of float=%d",sizeof(float));
    printf("\n size of constant=%d",sizeof(5));
    printf("\nsize of char= %d",sizeof(char));
    printf("\n size of short int=%d ",sizeof(short int));
    printf("\nize of signed int=%d",sizeof(signed int));
    printf("\nsize of unsigned int=%d",sizeof(unsigned int) );
    printf("\nsize of long int =%d",sizeof(long int)),
    printf("\nsize of double=%d",__SIZEOF_DOUBLE__);
    printf("\nsize of long double=%d",__SIZEOF_LONG_DOUBLE__);

    return 0;
    
}