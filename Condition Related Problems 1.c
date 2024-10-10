#include<stdio.h>
int main()
{

  float num;
  scanf("%f",&num);
  if(num>=0)
  {
      printf("%f is a positive number\n",num);

  }
  else if (num<=0)
  {
      printf("%f is a negative number \n",num);
  }
else{


    printf("%f is neither positive nor negative (zero)\n",num);
}

    return 0;
}
