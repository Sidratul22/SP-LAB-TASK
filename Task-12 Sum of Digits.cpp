#include<stdio.h>
int main() {
    int n,k,sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0) {
        k= n % 10; 
        sum += k;   
        n /= 10;  
    }
    printf("Sum= %d\n", sum);

    return 0;
}
