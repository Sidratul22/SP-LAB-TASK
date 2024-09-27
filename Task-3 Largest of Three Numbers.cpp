#include<stdio.h>
int main()
{
          int a,b,c,max;
          printf("Enter ant three numbers ");
          scanf("%d %d %d",&a,&b,&c);
          if(a>=b)
          {    if(a>=c)
               {max=a;}
               else{max=c;}
          }
          else if(b>=a)
          {
               if(b>=c)
               {max=b;}
               else{max=c;}
          }
          else {printf("Invalid");}

          printf("The largest number is %d\n",max);
          return 0;
}
