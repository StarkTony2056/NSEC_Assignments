//sparse matrix reduction
#include<stdio.h>

int main() {
  int r, c, i, j, count, r_tmp;
  count = 0;
  //taking input
  printf("Enter number of rows: ");
  scanf("%d", &r);
  printf("Enter number of columns: ");
  scanf("%d", &c);
  int a[10][10];
  printf("Enter elements of array row-wise:\n");
  for(i=0; i<r; i++) 
    for(j=0; j<c; j++) {
      scanf("%d", &a[i][j]);
      if(a[i][j]>0)
        count++;
    }
  //printing input array
  printf("The given sparse matrix is:\n");
  for(i=0; i<r; i++) {
    for(j=0; j<c; j++) {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  //initializing the final array
  int b[10][10];
  //operating on content of b[][]
  r_tmp=1;
  for(i=0; i<r; i++)
    for(j=0; j<c; j++)
      if(a[i][j]>0) {
        b[r_tmp][0]=i;
        b[r_tmp][1]=j;
        b[r_tmp][2]=a[i][j];
        r_tmp++;
      }
  
  //putting values in zeroth row of b[][]
  b[0][0]=r;
  b[0][1]=c;
  b[0][2]=count;
  //printing final array
  printf("The reduced sparse matrix is:\n");
  for(i=0; i<count+1; i++) {
    for(j=0; j<3; j++)
      printf("%d\t", b[i][j]);
    printf("\n");
  }
}
