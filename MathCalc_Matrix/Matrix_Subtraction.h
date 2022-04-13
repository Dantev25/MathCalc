#ifndef MATRIX_SUBTRACTION_H_INCLUDED
#define MATRIX_SUBTRACTION_H_INCLUDED

void printmatrix(int a[10][10], int r, int c){
    int i, j;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++){
            printf("\t%d", a[i][j]);
        }
        printf("\n\n");
    }
}


int subtraction() {
  int r, c, a[10][10], b[10][10], dif[10][10], i, j;
  
  printf("Enter the number of rows : ");
  scanf("%d", &r);

  //verifying if r is valid
   while(r <= 0)
   {
        printf("\nYou cannot have 0 or negative number of rows.\n Please input a positive integer not exceeding 10 : ");
        scanf("%f",&r);
    }


  printf("Enter the number of columns : ");

  scanf("%d", &c);

  //verifying if c is valid
   while(c <= 0)
   {
        printf("\nYou cannot have 0 or negative number of columns.\nPlease input a positive integer not exceeding 10 : ");
        scanf("%f",&c);
    }


  

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("\nThe First Matrix is \n\n");
  printmatrix(a,r,c);

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  printf("\nThe Second Matrix is \n\n");
  printmatrix(b,r,c);

  // Subtracting two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      dif[i][j] = a[i][j] - b[i][j];
    }

  // printing the result
  printf("\nDifference of the two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("\t%d   ", dif[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
}

#endif