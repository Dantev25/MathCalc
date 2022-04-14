#ifndef MATRIX_TRANSPOSE_H_INCLUDED
#define MATRIX_TRANSPOSE_H_INCLUDED
FILE *fptr;

int transpose() {
  int a[10][10], transpose[10][10], r, c;
  time_t t;   
  time(&t);

  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  fptr = (fopen("MathCalc_Matrix/Matrix_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"Executed on: %s",ctime(&t));
    fprintf(fptr,"\nMatrix Operation : Transpose\n");

  // asssigning elements to the matrix
  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%d", &a[i][j]);
  }
  fprintf(fptr, "\nInput:\n\n");

  // printing the matrix a[][]
  printf("\nThe Matrix is \n\n");
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    fprintf(fptr, "\t%d  ", a[i][j]);
    printf("\t%d  ", a[i][j]);
    if (j == c - 1){
    fprintf(fptr, "\n\n");
    printf("\n\n");
    }
  }

  // computing the transpose
  for (int i = 0; i < r; ++i)
  for (int j = 0; j < c; ++j) {
    transpose[j][i] = a[i][j];
  }

  // printing the transpose
  fprintf(fptr, "\nOutput: \n\n");
  printf("\nTranspose of the matrix is \n\n");
  for (int i = 0; i < c; ++i)
  for (int j = 0; j < r; ++j) {
    fprintf(fptr, "\t%d  ", transpose[i][j]);
    printf("\t%d  ", transpose[i][j]);
    if (j == r - 1){
    fprintf(fptr, "\n\n");
    printf("\n\n");
    }
  }
fclose(fptr);

  return 0;
}

#endif