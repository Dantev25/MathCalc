#ifndef MATRIX_SCALAR_MULTIPLICATION_H_INCLUDED
#define MATRIX_SCALAR_MULTIPLICATION_H_INCLUDED
FILE *fptr;

void printSmatrix(int a[10][10], int r, int c){
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
int scalarmultiplication()
{
 	int i, j, rows, columns, Multiplication[10][10], Number;
	time_t t;   // not a primitive datatype
    time(&t);

    printf("Enter the Number of Rows : ");
    scanf("%d", &i);
	//verifying if i is valid
   while((i <= 0)||(i >= 100))
   {
        printf("\nYou cannot have 0 or negative number of rows.\nPlease input a positive integer not exceeding 100 : ");
        scanf("%d",&i);
    }

 	printf("\nEnter the Number of columns\n");
 	scanf("%d", &j);
	 //verifying if j is valid
   while((j <= 0)||(j >= 100))
   {
        printf("\nYou cannot have 0 or negative number of columns.\nPlease input a positive integer not exceeding 100 : ");
        scanf("%d",&j);
    }


	fptr = (fopen("MathCalc_Matrix/Matrix_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"Executed on: %s",ctime(&t));
    fprintf(fptr,"\nMatrix Operation : Scalar Multiplication\n");

 	printf("\nPlease Enter the Matrix Elements :\n\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		printf("Enter element a%d%d: ", rows + 1, columns + 1);
			scanf("%d", &Multiplication[rows][columns]);
    	}
  	}
	fprintf(fptr, "\nInput:\n\n");  
	printf("\nThe Matrix is \n\n");  
	printSmatrix(Multiplication,rows,columns);

   
 	printf("\nPlease Enter the Multiplication Value  :  ");
 	scanf("%d", &Number);
	fprintf(fptr, "\nMultiplication Value: %d\n\n", Number);
 	  
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		Multiplication[rows][columns] = Number * Multiplication[rows][columns];    
   	 	}
  	}
 
	fprintf(fptr, "\nOutput: \n\n");
 	printf("\nThe Result of a Scalar Matrix Multiplication is : \n\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
			fprintf(fptr, "\t%d  ", Multiplication[rows][columns]);
      		printf("\t%d  ", Multiplication[rows][columns]);
    	}
		fprintf(fptr, "\n\n");
    	printf("\n\n");
  	}

fclose(fptr);
 	return 0;
}

#endif
