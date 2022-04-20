#ifndef COMPLEX_MULTIPLICATION_H_INCLUDED
#define COMPLEX_MULTIPLICATION_H_INCLUDED

float complexMul()
{
    struct complex a, b, c;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;

    printf("Enter a and b where a + ib is the first complex number:\n");
    printf("a = ");
    scanf("%f",&a.real);
    printf("b = ");
    scanf("%f",&a.img);

    printf("\nEnter c and d where c + id is the second complex number:\n");
    printf("c = ");
    scanf("%f", &b.real);
    printf("d = ");
    scanf("%f", &b.img);

    c.real = (a.real*b.real) - (a.img*b.img);
    c.img = (a.img*b.real) + (a.real*b.img);

    if (c.img >= 0){
        printf("\nMultiplication of the complex numbers = %.2f + %.2fi", c.real, c.img);
    }
    else{
        printf("\nMultiplication of the complex numbers = %.2f %.2fi", c.real, c.img);
    }

    fptr = (fopen("MathCalc_Complex/Complex_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"----------------------------------------------------------------------\n");
    fprintf(fptr,"Executed on: %s",ctime(&t));
    fprintf(fptr,"Operation : Complex numbers multiplication\n");
   
    if((a.img < 0)&&(b.img < 0)){
        fprintf(fptr,"INPUT:\n\tcomplex number 1 = %.2f %.2fi\n\tcomplex number 2 = %.2f %.2fi\n",a.real,a.img,b.real,b.img);
    }
    else if (a.img < 0){
        fprintf(fptr,"INPUT:\n\tcomplex number 1 = %.2f %.2fi\n\tcomplex number 2 = %.2f + %.2fi\n",a.real,a.img,b.real,b.img);
    }
    else if(b.img < 0){
        fprintf(fptr,"INPUT:\n\tcomplex number 1 = %.2f + %.2fi\n\tcomplex number 2 = %.2f %.2fi\n",a.real,a.img,b.real,b.img);
    }
    else{
         fprintf(fptr,"INPUT:\n\tcomplex number 1 = %.2f + %.2fi\n\tcomplex number 2 = %.2f + %.2fi\n",a.real,a.img,b.real,b.img);
    }

    if (c.img >= 0){
        fprintf(fptr,"OUTPUT:\n\tProduct = %.2f + %.2fi\n\n\n", c.real, c.img);
    }
    else{
        fprintf(fptr,"OUTPUT:\n\tProduct = %.2f %.2fi\n\n\n", c.real, c.img);
    }

    fclose(fptr);

    return 0;
}

#endif