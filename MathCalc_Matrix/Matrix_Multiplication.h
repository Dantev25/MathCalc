#ifndef MATRIX_MULTIPLICATION_H_INCLUDED
#define MATRIX_MULTIPLICATION_H_INCLUDED
FILE *fptr;

void printMmatrix(int a[100][100], int r, int c){
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
  int first[100][100], second[100][100], multiply[100][100];
  time_t t;   
  time(&t); 

  fptr = (fopen("MathCalc_Matrix/Matrix_Log.txt","a"));

  if(fptr==NULL){
    printf("Error!");
    exit(1);
  }
  fprintf(fptr,"----------------------------------------------------------------------\n");
  fprintf(fptr,"\nExecuted on: %s",ctime(&t));
  fprintf(fptr,"\n\tMatrix Operation : Multiplication\n");

  printf("For the First Matrix\n");
  printf("Enter the Number of Rows : ");
  scanf("%d", &m);
	//verifying if m is valid
  while((m <= 0)||(m >= 100))
  {
    printf("\nYou cannot have 0 or negative number of rows.\nPlease input a positive integer not exceeding 99 : ");
    scanf("%d",&m);
  }

 	printf("\nEnter the Number of Columns :");
 	scanf("%d", &n);
	//verifying if n is valid
  while((n <= 0)||(n >= 100))
  {
   printf("\nYou cannot have 0 or negative number of columns.\nPlease input a positive integer not exceeding 99 : ");
   scanf("%d",&n);
  }
  printf("\nEnter Elements of first matrix\n");
 
  for (c = 0; c < m; c++)
  {
    for (d = 0; d < n; d++)
    {
      printf("Enter Element a[%d][%d]: ", c + 1, d + 1);
      scanf("%d", &first[c][d]);
    }
  } 
  fprintf(fptr, "\nInput:\nFirst Matrix:\n\n"); 
  printf("\nThe First Matrix is \n\n");
  printMmatrix(first, c, d);

  printf("For the Second Matrix\n");
  printf("Enter the Number of Rows : ");
  scanf("%d", &p);
	//verifying if p is valid
  while((p <= 0)||(p >= 100))
  {
    printf("\nYou cannot have 0 or negative number of rows.\nPlease input a positive integer not exceeding 99 : ");
    scanf("%d",&p);
  }

 	printf("\nEnter the Number of Columns :");
 	scanf("%d", &q);
	//verifying if q is valid
  while((q <= 0)||(q >= 100))
  {
    printf("\nYou cannot have 0 or negative number of columns.\nPlease input a positive integer not exceeding 99 : ");
    scanf("%d",&q);
  }
 
  if (n != p){
    printf("\nThe multiplication isn't possible.\n");
    fprintf(fptr, "\nThe multiplication isn't possible.\n");
  }
  else
  {
    printf("\nEnter Elements of second matrix\n");
 
    for (c = 0; c < p; c++){
      for (d = 0; d < q; d++)
      {
        printf("Enter Element a[%d][%d]: ", c + 1, d + 1);
        scanf("%d", &second[c][d]);
      }
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