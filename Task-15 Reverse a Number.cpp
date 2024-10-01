#include <stdio.h>
int main() {
    int n,reverse=0,remain;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n!= 0) {
    remain=n%10;        
    reverse =reverse*10+remain;
    n/= 10;              
    }
    printf("Reversed number: %d\n", reverse);
    return 0;
}
