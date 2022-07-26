#include<stdio.h>
int main()
{
    int x,cnt=0;
    printf("Enter the no.\n");
    scanf("%d",&x);
    int dup=x;
    while(x!=0)
    {
        cnt++;
        x=x/10;
    }
    if(cnt==3)
        printf("%d is a 3-digit no..",dup);
    else
        printf("%d is not a 3-digit no..",dup);
    return 0;
}


