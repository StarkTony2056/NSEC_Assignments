//matrix multiplication
#include<stdio.h>
#include<stdlib.h>

int main() {
  int r1, c1, r2, c2, i, j, x;
  //taking input
  printf("enter number of rows and columns of matrix 1: ");
  scanf("%d%d", &r1, &c1);
  printf("enter number of rows and columns of matrix 2: ");
  scanf("%d%d", &r2, &c2);
  //condition to check whether matrix multiplication is possible
  if(c1!=r2) {
    printf("Row number of matrix 2 and column number of matrix 1 are not same, hence matrix multiplication is not possible!");
    exit(10);
  }
  int a[r1][c1];
  int b[r2][c2];
  //taking array input
  printf("enter elements of matrix 1 one by one:\n");
  for(i=0; i<r1; i++)
    for(j=0; j<c1; j++)
      scanf("%d", &a[i][j]);
  printf("enter elements of matrix 2 one by one:\n");
  for(i=0; i<r2; i++)
    for(j=0; j<c2; j++)
      scanf("%d", &b[i][j]);
  //declaring the multiplication array
  int m[r1][c2];
  //calculating and printing the multiplication matrix
  printf("The Multiplication matrix:\n");
  for(i=0; i<r1; i++) {
    x=0;
    for(j=0; j<c2; j++) {
      m[i][j]=0;
      for(x=0; x<c1; x++) {
        m[i][j] = m[i][j] + a[i][x]*b[x][j];
      }
      printf("%d\t", m[i][j]);
    }
    printf("\n");
  }
}