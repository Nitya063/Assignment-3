#include<stdio.h>
int main()
{
    char x;
    printf("Enter the character.\n");
    scanf("%c",&x);
    if(x>=65 && x<=90)
        printf("%c is Uppercase.",x);
    else
        printf("%c is Lowercase.",x);
    return 0;
}

