#include<stdio.h>
int main()
{
    int u,v,x,y,z;
    printf("Enter the marks.\n");
    scanf("%d%d%d%d%d",&u,&v,&x,&y,&z);
    if(x>33 && y>33 && z>33 && u>33 && v>3)
    {
        printf("Student has passed.",z);
    }
    else
    {
        printf("Student has failed.",z);
    }
    return 0;

}




