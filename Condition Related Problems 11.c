#include<stdio.h>
int main()
{
 int score;
 printf("enter the score  :");
 scanf("%d",&score);

 if(score>=90)
 {
     printf("grade :A\n");

 }
  else if(score>=86)
  {
      printf("grade :A-\n");
  }

    else if(score>=82)
    {
        printf("grade :B+\n");
    }

    else if(score>=78)
    {
        printf("grade :B\n");
    }
    else if(score>=74)
    {
        printf("grade  :B-");
    }

    else if(score>=70)
    {
        printf("grade  :C+\n");
    }
    else if(score>=66)
    {
        printf("grade:C\n");
    }

    else if(score>=55){
        printf("grade:D\n");
    }


    else{
        printf("grade: F");
    }

    return 0;
}
