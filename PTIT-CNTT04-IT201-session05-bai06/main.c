#include <stdio.h>
#include <stdlib.h>

int recursive(int arr[],int n) {
    if (n==0) return 0;
     return arr[n-1]+recursive(arr,n-1);
}
int main(void) {
    int n=0;
    while (n<=0) {
        printf("Enter a number: ");
        scanf("%d", &n);
    }
    int *arr=(int *)malloc(n*sizeof(int));
    if (arr==NULL) {
        printf("Memory allocation error");
        return 1;
    }
    for (int i=0; i<n; i++) {
        printf("arr[%d] = ", i+1);
        scanf("%d", &arr[i]);
    }
    int result=recursive(arr,n);
    printf("Result: %d\n", result);
    return 0;
}
