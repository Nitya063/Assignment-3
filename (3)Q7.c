#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("Enter the numbers.\n");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b)-(4*a*c);
    if(D==0)
        printf("Roots are real and equal.",x);
    else if(D>0)
        printf("Roots are real and unequal.",x);
    else
        printf("Roots are imaginary.",y);
    return 0;
}



