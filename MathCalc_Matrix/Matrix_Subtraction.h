#ifndef MATRIX_SUBTRACTION_H_INCLUDED
#define MATRIX_SUBTRACTION_H_INCLUDED
FILE *fptr;

void printmatrix(int a[100][100], int r, int c){
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


int subtraction() {
  int r, c, a[100][100], b[100][100], dif[100][100], i, j;
  time_t t;   // not a primitive datatype
  time(&t);
  
  printf("Enter the Number of Rows : ");
  scanf("%d", &r);

 //verifying if r is valid
   while((r <= 0)||(r >= 100))
   {
        printf("\nYou cannot have 0 or negative number of rows.\nPlease input a positive integer not exceeding 99 : ");
        scanf("%d",&r);
    }
   

    printf("\nEnter the Number of Columns : ");
    scanf("%d", &c);

  //verifying if c is valid
   while((c <= 0)||(c>=100))
   {
        printf("\nYou cannot have 0 or negative number of columns.\nPlease input a positive integer not exceeding 99 : ");
        scanf("%d",&c);
    }

    fptr = (fopen("MathCalc_Matrix/Matrix_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"\nExecuted on: %s",ctime(&t));
    fprintf(fptr,"\n\tMatrix Operation : Subtraction\n");

  printf("\nEnter Elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter Element a[%d][%d]: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }
  
  fprintf(fptr, "\nInput:\nFirst Matrix:\n\n");
  printf("\nThe First Matrix is \n\n");
  printmatrix(a,r,c);

  printf("Enter Elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter Element b[%d][%d]: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  fprintf(fptr, "\nSecond Matrix:\n\n");
  printf("\nThe Second Matrix is \n\n");
  printmatrix(b,r,c);

  // Subtracting two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      dif[i][j] = a[i][j] - b[i][j];
    }

  // printing the result
  fprintf(fptr, "\nOutput: \n\n");
  printf("\nDifference of the two matrices: \n\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      fprintf(fptr, "\t%d   ", dif[i][j]);
      printf("\t%d   ", dif[i][j]);
      if (j == c - 1) {
        fprintf(fptr, "\n\n");
        printf("\n\n");
      }
    }

  fclose(fptr);


  return 0;
}

#endif