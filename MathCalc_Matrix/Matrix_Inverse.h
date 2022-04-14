#ifndef MATRIX_INVERSE_H_INCLUDED
#define MATRIX_INVERSE_H_INCLUDED

//function prototype that are being created
void icofactor(float [][25], float);
float ideterminant(float [][25], float);
void itranspose(float [][25], float [][25], float);

int inverse()
{
  float a[25][25], n, d;
  int i, j;

  printf("Enter the order of the Matrix: ");
  scanf("%f", &n);
  printf("\nEnter the elements of a matrix: \n");
  for (i = 0;i < n; i++)
    {
     for (j = 0;j < n; j++)
       {
        printf("a[%d][%d]= ",i+1,j+1);
        scanf("%f", &a[i][j]);
        }
    }

  d = ideterminant(a, n);
  if (d == 0)
   printf("\nSince the determinant is zero (0), therefore inverse is not possible.\n");
  else
   icofactor(a, n);
}

// function for the calculation of determinant
float ideterminant(float a[25][25], float k)
{
  float s = 1, det = 0, b[25][25];
  int i, j, m, n, c;
  if (k == 1)
    {
     return (a[0][0]);
    }
  else
    {
     det = 0;
     for (c = 0; c < k; c++)
       {
        m = 0;
        n = 0;
        for (i = 0;i < k; i++)
          {
            for (j = 0 ;j < k; j++)
              {
                b[i][j] = 0;
                if (i != 0 && j != c)
                 {
                   b[m][n] = a[i][j];
                   if (n < (k - 2))
                    n++;
                   else
                    {
                     n = 0;
                     m++;
                     }
                   }
               }
             }
          det = det + s * (a[0][c] * ideterminant(b, k - 1));
          s = -1 * s;
          }
    }

    return (det);
}


// function for cofactor calculation
void icofactor(float num[25][25], float f)
{
 float b[25][25], fac[25][25];
 int p, q, m, n, i, j;
 for (q = 0;q < f; q++)
 {
   for (p = 0;p < f; p++)
    {
     m = 0;
     n = 0;
     for (i = 0;i < f; i++)
     {
       for (j = 0;j < f; j++)
        {
          if (i != q && j != p)
          {
            b[m][n] = num[i][j];
            if (n < (f - 2))
             n++;
            else
             {
               n = 0;
               m++;
               }
            }
        }
      }
      fac[q][p] = pow(-1, q + p) * ideterminant(b, f - 1);
    }
  }
  itranspose(num, fac, f);
}


///function to find the transpose of a matrix
void itranspose(float num[25][25], float fac[25][25], float r)
{
  int i, j;
  float b[25][25], inverse[25][25], d;

  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         b[i][j] = fac[j][i];
        }
    }

  d = ideterminant(num, r);
  for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
        inverse[i][j] = b[i][j] / d;
        }
    }

   printf("\nThe inverse of matrix: \n\n");
   for (i = 0;i < r; i++)
    {
     for (j = 0;j < r; j++)
       {
         printf("\t%.2f  ", inverse[i][j]);
        }
    printf("\n\n");
     }
}


#endif