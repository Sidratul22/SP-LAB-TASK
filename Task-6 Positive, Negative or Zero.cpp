#include<stdio.h>
int main()
{
          int n;
          printf("Enter a number ");
          scanf("%d",&n);
          if(n>0)
          {
                    printf("It is a positive number\n");
          }
          else if(n<0)
          {
                    printf("It is a negative number\n");
          }
          else{printf("It is zero\n");}
          return 0;
}
