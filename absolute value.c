#include<stdio.h>
int main()
{
    int x;
    printf("enter any int number :");
    scanf("%d",&x);
    if (x<0)
    {
        x=x*(-1);
    }

    printf("the absolute value  : %d",x);



    return 0;
}
