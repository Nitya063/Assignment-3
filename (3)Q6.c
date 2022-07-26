#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the numbers.\n");
    scanf("%d%d",&x,&y);
    if(x==y)
        printf("Both are same=%d.",x);
    else if(x>y)
        printf("%d is greater.",x);
    else
        printf("%d is greater.",y);
    return 0;
}


