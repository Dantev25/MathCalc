#ifndef MATRIX_MULTIPLICATION_H_INCLUDED
#define MATRIX_MULTIPLICATION_H_INCLUDED

void printMmatrix(int a[10][10], int r, int c){
    int i, j;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++){
            printf("\t%d", a[i][j]);
        }
        printf("\n\n");
    }
} 
 
int multiplication()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (c = 0; c < m; c++)
  {
    for (d = 0; d < n; d++)
    {
      printf("Enter element a%d%d: ", c + 1, d + 1);
      scanf("%d", &first[c][d]);
    }
  }  
  printf("\nThe First Matrix is \n\n");
  printMmatrix(first, c, d);
  printf("\n\nEnter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("\nThe multiplication isn't possible.\n");
  else
  {
    printf("\nEnter elements of second matrix\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
      {
        scanf("%d", &second[c][d]);
      }
  printf("\nThe Second Matrix is \n\n");
  printMmatrix(second, c, d);
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
  
    printf("Product of the matrices :\n\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("\t%d ", multiply[c][d]);
 
      printf("\n\n");
    }
  }
 
  return 0;
}

#endif