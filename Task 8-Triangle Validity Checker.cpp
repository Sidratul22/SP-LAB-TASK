#include<stdio.h>
int main()
{
          float a,b,c;
          printf("Enter three lengths ");
          scanf("%f %f %f",&a,&b,&c);
          if(b+c>a && a+c>b && a+b>c)
          {
           printf("It is a triangle");
          }
          else{printf("It is not a triangle");}
          return 0;
}

