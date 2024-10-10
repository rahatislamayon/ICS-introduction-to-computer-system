#include<stdio.h>
int main(){

int length;
printf("enter the length  :");
scanf("%d",&length);
int width;

printf("enter the width  :");
scanf("%d",&width);

printf("\n");

int area=length*width;
printf("the area is  :%d",area);


printf("\n");

int perimeter=2*(length+width);
printf("the perimeter is  :%d",perimeter);



printf("\n");

if(perimeter>area)
{
    printf("perimeter is greater than area");
}





else{

    printf("area is greater than perimeter");
}






return 0;
}
