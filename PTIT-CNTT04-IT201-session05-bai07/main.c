#include <stdio.h>

int fibonacci(int n) {
  if (n==0)return 0;
    if (n==1)return 1;

     return fibonacci(n-1) + fibonacci(n-2);
}
int main(void) {
    int n=0;
    while (n<=0) {
        printf("Please input a number:");
        scanf("%d",&n);
    }

    for (int i=0;i<n;i++) {
        printf("%d\t",fibonacci(i));
    }
    //printf("The result is %d",result);
    return 0;
}