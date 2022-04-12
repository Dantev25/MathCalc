#ifndef MATRIX_DETERMINANT_H_INCLUDED
#define MATRIX_DETERMINANT_H_INCLUDED

int determinant()
{
	 int a[10][10], x[10], ratio, det=1;
	 int i,j,k,n;

	 printf("\nEnter Order of Matrix: ");
	 scanf("%d", &n);

	 //Reading Matrix 
	 printf("\nEnter Coefficients of Matrix: \n");
	 for(i=0;i< n;i++)
	 {
		  for(j=0;j< n;j++)
		  {
			   printf("a[%d][%d]= ",i+1,j+1);
			   scanf("%d", &a[i][j]);
		  }
	 }


	 //Finding determinant by multiplying elements in principal diagonal elements 
	 for(i=0;i< n;i++)
     {
         det = det * a[i][i];
     }

	 printf("\n\nDeterminant of given matrix is: %d \n", det);


	 return 0;
}


#endif