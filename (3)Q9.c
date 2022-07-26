#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the numbers.\n");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y)
    {
    if(x==z)
        printf("Both are same=%d.",x);
    else if(x>z)
        printf("%d is greatest.",x);
    else
        printf("%d is greatest.",z);
    }
    else if(y>z)
    {
    if(y==z)
        printf("Both are same=%d.",x);
    else if(y>z)
        printf("%d is greatest.",y);
    else
        printf("%d is greatest.",z);
    }
    else
    {
        printf("%d is greatest.",z);
    }
    return 0;

}



