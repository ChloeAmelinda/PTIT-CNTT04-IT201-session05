#include <stdio.h>

int sum(int n) {
if (n<=0) return 0;
        return n + sum(n-1);
}
int main(void) {

    int n=0;
    while (n<=0) {
        printf("Enter a number: ");
        scanf("%d", &n);
    }
    int result =sum(n);
    printf("%d", result);

    return 0;
}