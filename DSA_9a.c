//selection sort
#include<stdio.h>

void selection(int[], int);
int main() {
    int n,i;
    int a[20];
    printf("enter size of array: ");
    scanf("%d", &n);
    printf("enter array elements one by one:\n");
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("the original array is:\n");
    for(i=0; i<n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
    selection(a,n);
    return 0;
}

void selection(int a[], int n) {
    int i, j, temp, min;
    for(i=0; i<n-1; i++) {
        min=i;
        for(j=i+1; j<n; j++) {
            if(a[min]>a[j])
                min=j;
        }
        if(min!=i) {
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    printf("the sorted array is:\n");
    for(i=0; i<n; i++)
        printf("%d\t", a[i]);
    return;
}