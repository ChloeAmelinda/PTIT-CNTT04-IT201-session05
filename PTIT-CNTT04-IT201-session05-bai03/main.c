#include <stdio.h>

int giaithua(int n) {
    int giaithua =1;
    for (int i = 1; i <= n; i++) {
        giaithua *= i;
    }
    return giaithua;
}
int main(void) {
    int n=0;
    while (n<=0) {
        printf("enter a number");
        scanf("%d", &n);
    }
    int result = giaithua(n);
    printf("%d", result);
    return 0;
}