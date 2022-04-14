#ifndef MATRIX_DETERMINANT_H_INCLUDED
#define MATRIX_DETERMINANT_H_INCLUDED
FILE *fptr;

void printDmatrix(int a[10][10], int r, int c){
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
int determinant()
{
	 int a[10][10], x[10], ratio, det=1;
	 int i,j,k,n;
	 time_t t;   
     time(&t);

	 fptr = (fopen("MathCalc_Matrix/Matrix_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"Executed on: %s",ctime(&t));
    fprintf(fptr,"\nMatrix Operation : Determinant\n");

	 printf("\nEnter Order of Matrix: ");
	 scanf("%d", &n);

	 //Reading Matrix 
	 printf("\nEnter Coefficients of Matrix: \n\n");
	 for(i=0;i< n;i++)
	 {
		  for(j=0;j< n;j++)
		  {
			   printf("Enter element a[%d][%d]= ",i+1,j+1);
			   scanf("%d", &a[i][j]);
		  }
	 }
	fprintf(fptr, "\nInput:\n\n"); 
	printf("\nThe Matrix is \n\n");
	printDmatrix(a,i,j);

	 //Finding determinant by multiplying elements in principal diagonal elements 
	 for(i=0;i< n;i++)
     {
         det = det * a[i][i];
     }
	 fprintf(fptr, "\nOutput: ");
	 printf("\n\nDeterminant of the Matrix is %d. \n", det);
	 fprintf(fptr, "\n\nDeterminant of the Matrix is %d. \n", det);

	fclose(fptr);

	 return 0;
}


#endif