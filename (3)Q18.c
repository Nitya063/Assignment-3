#include<stdio.h>
int main()
{
    int x;
    printf("Enter the month number.\n");
    scanf("%d",&x);
    if(x==1)
        printf("January = 31 days.");
    else  if(x==2)
        printf("February = 28 days.");
    else  if(x==3)
        printf("March = 31 days.");
    else  if(x==4)
        printf("April = 30 days.");
    else  if(x==5)
        printf("May = 31 days.");
    else  if(x==6)
        printf("June = 30 days.");
    else  if(x==7)
        printf("July = 31 days.");
    else  if(x==8)
        printf("August = 31 days.");
    else  if(x==9)
        printf("September = 30 days.");
    else  if(x==10)
        printf("October = 31 days.");
    else  if(x==11)
        printf("JNovember = 30 days.");
    else if(x==12)
        printf("December = 31 days.");
    else
        printf("Invalid month number.");
    return 0;
}



