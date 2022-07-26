#include<stdio.h>
int main()
{
    char x;
    printf("Enter the character.\n");
    scanf("%c",&x);
    if(x>=65 && x<=90)
        printf("%c is an Uppercase letter.",x);
    else if(x>=97 && x<=122)
        printf("%c is a Lowercase letter.",x);
    else if(x>=48 && x<=57)
        printf("%c is a Digit.",x);
    else
        printf("%c is a special character.",x);
    return 0;
}


