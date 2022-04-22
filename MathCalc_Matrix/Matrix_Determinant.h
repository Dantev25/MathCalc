#ifndef MATRIX_DETERMINANT_H_INCLUDED
#define MATRIX_DETERMINANT_H_INCLUDED
FILE *fptr;

void printDmatrix(int a[100][100], int r, int c){
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
	int a[100][100], x[100], ratio, det=1;
	int i,j,k,n;
	time_t t;   
    time(&t);

	fptr = (fopen("MathCalc_Matrix/Matrix_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }
	
	fprintf(fptr,"----------------------------------------------------------------------\n");
    fprintf(fptr,"\nExecuted on: %s",ctime(&t));
    fprintf(fptr,"\n\tMatrix Operation : Determinant\n");

	printf("\nEnter the Order of the Matrix : ");
	scanf("%d", &n);

	//verifying if n is valid
   while((n <= 0)||(n >= 100))
   {
        printf("\nYou cannot have 0 or negative order of matrix.\nPlease input a positive integer not exceeding 99 : ");
        scanf("%d",&n);
    } 
	 //Reading Matrix 
	 printf("\nEnter Coefficients of Matrix: \n\n");
	 for(i=0;i< n;i++)
	 {
		  for(j=0;j< n;j++)
		  {
			   printf("Enter Element a[%d][%d]= ",i+1,j+1);
			   scanf("%d", &a[i][j]);
		  }
	 }
	fprintf(fptr, "\nInput:\n\n"); 
	printf("\nThe Matrix is \n\n");
	printDmatrix(a,i,j);

	//Here we are using Gauss Elimination Technique for transforming 
	//matrix to upper triangular matrix. 
	//Applying Gauss Elimination 
	for(i=0;i< n;i++)
	{
		for(j=i+1;j< n;j++)
		{
			ratio = a[j][i]/a[i][i];

			for(k=0;k< n;k++)
			{
				a[j][k] = a[j][k] - ratio*a[i][k];
			}
		}
	}


	//Finding determinant by multiplying elements in principal diagonal elements 
	for(i=0;i< n;i++)
    {
        det = det * a[i][i];
    }
	fprintf(fptr, "\nOutput: ");
	printf("\n\nDeterminant of the Matrix is %d. \n", det);
	fprintf(fptr, "\n\nDeterminant of the Matrix is %d. \n\n", det);

	fclose(fptr);

	return 0;
}


#endif