#ifndef MATRIX_SCALAR_MULTIPLICATION_H_INCLUDED
#define MATRIX_SCALAR_MULTIPLICATION_H_INCLUDED

 
int scalarmultiplication()
{
 	int i, j, rows, columns, Multiplication[10][10], Number;
  
 	printf("\n Please Enter Number of rows and columns\n");
 	scanf("%d %d", &i, &j);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &Multiplication[rows][columns]);
    	}
  	}
   
 	printf("\n Please Enter the Multiplication Value  :  ");
 	scanf("%d", &Number);
 	  
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		Multiplication[rows][columns] = Number * Multiplication[rows][columns];    
   	 	}
  	}
 
 	printf("\n The Result of a Scalar Matrix Multiplication is : \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		printf("%d \t ", Multiplication[rows][columns]);
    	}
    	printf("\n");
  	}
 	return 0;
}