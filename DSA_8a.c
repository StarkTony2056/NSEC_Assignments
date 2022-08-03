//insertion sort
#include<stdio.h>

void insertion_sort(int[], int);
int main() {
    int n, i, j, temp;
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
    insertion_sort(a, n);
    return 0;
}

void insertion_sort(int a[], int n) {
    int i,j,temp;
    for(i=1; i<n; i++) {
        temp=a[i];
        for(j=i-1; j>=0; j--) {
            if(a[j]>temp)
                a[j+1] = a[j];
            else
                break;
        }
        a[j+1] = temp;
    }
    printf("the sorted array is:\n");
    for(i=0; i<n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return;
}