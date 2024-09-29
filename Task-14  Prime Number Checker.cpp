#include<stdio.h>
int main()
{
    int n,prime=1;
    printf("Enter a number ");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("Not Prime\n");
        return 0;
    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
          prime=0;
          break;
        }
    }

    if(prime==0){printf("Not Prime\n");}
    else{printf("Prime\n");}
    return 0;
}
