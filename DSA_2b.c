//element deletion
#include<stdio.h>

int main() {
  int n, i, pos, p;
  //taking input
  printf("enter number of elements: ");
  scanf("%d", &n);
  int a[n];
  printf("enter elements of array:\n");
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  printf("enter position of deletion: ");
  scanf("%d", &pos);
  //left shift elements and delete
  for(i=pos; i<(n-1); i++) {
    a[i] = a[i+1];
  }
  //print final array
  for(i=0; i<(n-1); i++) {
    printf("%d\t", a[i]);
  }
}
