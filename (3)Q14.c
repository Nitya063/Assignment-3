#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number.\n");
    scanf("%d",&x);
    if(x%7==0)
        printf("%d is divisible by 7.",x);
    else if( x%3==0)
         printf("%d is divisible by 3.",x);
    else
        printf("%d is neither divisible by 7 nor 3.",x);
    return 0;
}



