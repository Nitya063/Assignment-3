#include<stdio.h>
int main()
{
    int CP,SP;
    float Pp,Lp;
    printf("Enter the cost price and selling price.\n");
    scanf("%d%d",&CP,&SP);
    if(CP==SP)
        printf("Cost and selling prices are same so there is neither profit nor loss.");
    else if(CP>SP)
    {
        Lp=(((CP-SP)*100)/CP);
        printf("Loss percentage=%f.",Lp);
    }
    else
    {
        Pp=(((SP-CP)*100)/CP);
        printf("Profit percentage=%f.",Pp);
    }
    return 0;
}



