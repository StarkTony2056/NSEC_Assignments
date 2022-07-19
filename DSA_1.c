//sparse matrix reduction
#include<stdio.h>

int main() {
  int r, c, i, j, count, r_tmp, c_tmp;
  //taking input
  printf("Enter number of rows: ");
  scanf("%d", &r);
  printf("Enter number of columns: ");
  scanf("%d", &c);
  int a[r][c];
  printf("Enter elements of array row-wise:\n");
  for(i=0; i<r; i++) {
    for(j=0; j<c; j++) {
      scanf("%d", &a[i][j]);
      if(a[i][j]>0)
        count++;
    }
  }
  //printing input array
  for(i=0; i<r; i++) {
    for(j=0; j<c; j++) {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  //initializing the final array
  int b[count+1][3];
  //operating on content of b[][]
  r_tmp=1;
  for(i=0; i<r; i++) {
    for(j=0; j<c; j++) {
      if(a[i][j]>0) {
        c_tmp=0;
        b[r_tmp][c_tmp++]=i;
        b[r_tmp][c_tmp++]=j;
        b[r_tmp][c_tmp++]=a[i][j];
        r_tmp++;
      }
    }
  }
  //putting values in zeroth row of b[][]
  b[0][0]=r;
  b[0][1]=c;
  b[0][2]=count;
  //printing final array
  for(i=0; i<count+1; i++) {
    for(j=0; j<3; j++)
      printf("%d\t", b[i][j]);
    printf("\n");
  }
}
