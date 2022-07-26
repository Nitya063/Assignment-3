#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the sides of triangle.\n");
    scanf("%d%d%d",&x,&y,&z);
    if((x+y)>z && (y+z)>x && (x+z)>y)
    {
        printf("Triangle construction is possible.");

    }
    else
    {
        printf("Triangle construction is not possible",z);
    }
    return 0;

}



