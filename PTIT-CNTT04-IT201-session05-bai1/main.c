#include <stdio.h>
#include <stdlib.h>


void printfTorecursion(int n) {
    if (n==1) {
        printf("%d",n);
        return;
    }

    printfTorecursion(n-1);
    printf("%d\t",n);
}
int main(void) {
    //int arr[1000];
    printf("Hello, World!\n");
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printfTorecursion(n);
    return 0;
}