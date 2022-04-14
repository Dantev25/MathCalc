#ifndef MATRIX_ADDITION_H_INCLUDED
#define MATRIX_ADDITION_H_INCLUDED
FILE *fptr;

void printMatrix(int a[10][10], int r, int c){
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

int addition() {
  int r, c, a[10][10], b[10][10], sum[10][10], i, j;
  time_t t;   // not a primitive datatype
  time(&t);

  

  printf("Enter the number of rows : ");
  scanf("%d", &r);
  //verifying if r is valid
   while(r <= 0)
   {
        printf("\nYou cannot have 0 or negative number of rows.\n Please input a positive integer not exceeding 10 : ");
        scanf("%d",&r);
    }


  printf("Enter the number of columns : ");

  scanf("%d", &c);
  //verifying if c is valid
   while(c <= 0)
   {
        printf("\nYou cannot have 0 or negative number of columns.\nPlease input a positive integer not exceeding 10 : ");
        scanf("%d",&c);
    }
      fptr = (fopen("MathCalc_Matrix/Matrix_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"Executed on: %s",ctime(&t));
    fprintf(fptr,"Matrix Operation : Addition\n");

  printf("\nEnter elements of 1st matrix:\n\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  fprintf(fptr, "\nInput:\nFirst Matrix:\n\n");
  printf("\nThe First Matrix is \n\n");
  printMatrix(a,r,c);

  printf("Enter elements of 2nd matrix:\n\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  fprintf(fptr, "\nInput:\nSecond Matrix:\n\n");
  printf("\nThe Second Matrix is \n\n");
  printMatrix(b,r,c);

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // printing the result
  fprintf(fptr, "\nOutput: \n\n");
  printf("\nThe Sum of two matrices is: \n\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      fprintf(fptr, "\t%d   ", sum[i][j]);
      printf("\t%d   ", sum[i][j]);
      if (j == c - 1) {
        fprintf(fptr, "\n\n");
        printf("\n\n");
      }
    }
fclose(fptr);

  return 0;
}

#endif