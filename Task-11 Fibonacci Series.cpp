#include<stdio.h>
int main()
{
    int n,f0=0,f1=1,f2=f0+f1;
    scanf("%d",&n);
    printf("%d %d %d ",f0,f1,f2);
    for(int i=1;i<=n;i++)
    { 
        f0=f1;
        f1=f2;
        f2=f0+f1;
        printf("%d ",f2);
    }
  
    return 0;
}
