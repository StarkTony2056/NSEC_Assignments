//bubble sort
#include<stdio.h>

void bubble_sort(int[], int);
int main() {
    int n, i;
    printf("enter number of array elements: ");
    scanf("%d", &n);
    int a[n];
    printf("enter array elements one by one:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("the original array:\n");
    for(i=0; i<n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    bubble_sort(a,n);
    return 0;
}

void bubble_sort(int a[], int n) {
    int i, j, temp;
    for(i=0; i<(n-1); i++) { //step
        for(j=0; j<(n-1-i); j++) { //comparison
            if(a[j]>a[j+1]) {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the sorted array:\n");
    for(i=0; i<n; i++) {
        printf("%d\t", a[i]);
    }
}