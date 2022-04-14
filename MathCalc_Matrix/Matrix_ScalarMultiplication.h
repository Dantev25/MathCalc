#ifndef MATRIX_SCALAR_MULTIPLICATION_H_INCLUDED
#define MATRIX_SCALAR_MULTIPLICATION_H_INCLUDED

void printSmatrix(int a[10][10], int r, int c){
    int i, j;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++){
            printf("\t%d", a[i][j]);
        }
        printf("\n\n");
    }
} 
int scalarmultiplication()
{
 	int i, j, rows, columns, Multiplication[10][10], Number;
  
 	printf("\nPlease Enter Number of rows and columns\n");
 	scanf("%d %d", &i, &j);
 
 	printf("\nPlease Enter the Matrix Elements :\n\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		printf("Enter element a%d%d: ", rows + 1, columns + 1);
			scanf("%d", &Multiplication[rows][columns]);
    	}
  	}
	printf("\nThe Matrix is \n\n");  
	printSmatrix(Multiplication,rows,columns);

   
 	printf("\nPlease Enter the Multiplication Value  :  ");
 	scanf("%d", &Number);
 	  
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		Multiplication[rows][columns] = Number * Multiplication[rows][columns];    
   	 	}
  	}
 
 	printf("\nThe Result of a Scalar Matrix Multiplication is : \n\n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		printf("\t%d  ", Multiplication[rows][columns]);
    	}
    	printf("\n\n");
  	}
 	return 0;
}

#endif
