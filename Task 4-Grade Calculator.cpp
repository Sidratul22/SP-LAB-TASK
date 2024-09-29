#include<stdio.h>
int main()
{
    int n;
    printf("Enter your marks: ");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Your grade: F");
        return 0;
    }
    switch(n/10){
        case 1:
        printf("Your grade: F");
        break;
        case 2:
        printf("Your grade: F");
        break;
        case 3:
        printf("Your grade: F");
        break;
        case 4:
        printf("Your grade: D");
        break;
        case 5:
        printf("Your grade: C");
        break;
        case 6:
        printf("Your grade: B");
        break;
        default:
        printf("Your grade: A");
        return 0;
        
    }
}
