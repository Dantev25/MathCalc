#ifndef MATRIX_MULTIPLICATION_H_INCLUDED
#define MATRIX_MULTIPLICATION_H_INCLUDED
FILE *fptr;

void printMmatrix(int a[10][10], int r, int c){
    int i, j;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++){
          fprintf(fptr,"\t%d", a[i][j]);
          printf("\t%d", a[i][j]);
        }
        fprintf(fptr, "\n\n");
        printf("\n\n");
    }
} 
 
int multiplication()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
  time_t t;   
  time(&t); 

  fptr = (fopen("MathCalc_Matrix/Matrix_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"Executed on: %s",ctime(&t));
    fprintf(fptr,"\nMatrix Operation : Multiplication\n");

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
  fprintf(fptr, "\nInput:\nFirst Matrix:\n\n"); 
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
        printf("Enter element a%d%d: ", c + 1, d + 1);
        scanf("%d", &second[c][d]);
      }
  fprintf(fptr, "\nSecond Matrix:\n\n");
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

    fprintf(fptr, "\nOutput: \n\n");
    printf("Product of the matrices :\n\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++){
      fprintf(fptr, "\t%d ", multiply[c][d]);
      printf("\t%d ", multiply[c][d]);
      }
    fprintf(fptr, "\n\n");
    printf("\n\n");
    }
  }
fclose(fptr);

  return 0;
}

#endif