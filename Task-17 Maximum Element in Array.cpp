#include <stdio.h>
int main() {
int n, i, max;
scanf("%d", &n);
int arr[n];
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
max = arr[0];
for (i = 1; i < n; i++) {
if (arr[i] > max) {
max = arr[i];
}
}
printf("The maximum: %d\n", max);
return 0;
}
