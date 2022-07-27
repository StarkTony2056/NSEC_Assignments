//element insertion
#include<stdio.h>

int main() {
  int n, i, pos, p;
  //taking input
  printf("enter number of elements: ");
  scanf("%d", &n);
  int a[n+1];
  printf("enter elements of array:\n");
  for(i=0; i<n; i++)
    scanf("%d", &a[i]);
  printf("enter position of insertion: ");
  scanf("%d", &pos);
  printf("enter element to be inserted: ");
  scanf("%d", &p);
  //right shift elements
  for(i=n-1; i>=pos; i--)
    a[i+1] = a[i];
  //insertion
  a[pos] = p;
  //printing final array
  for(i=0; i<=n; i++)
    printf("%d\t", a[i]);
}
