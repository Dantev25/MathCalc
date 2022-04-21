#ifndef COMPLEX_ADDITION_H_INCLUDED
#define COMPLEX_ADDITION_H_INCLUDED

struct complex
{
  float real, img;
};

/*function to carry addition of complex numbers*/
float complexAdd()
{
    struct complex a, b, c;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;

    //Input of complex numbers
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

    c.real = a.real + b.real;
    c.img = a.img + b.img;

    if (c.img >= 0){
        printf("\nSum of the complex numbers = %.2f + %.2fi", c.real, c.img);
    }
    else{
        printf("\nSum of the complex numbers = %.2f %.2fi", c.real, c.img);
    }

    fptr = (fopen("MathCalc_Complex/Complex_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    /*entry in log file*/
    fprintf(fptr,"------------------------------------------------\n");
    fprintf(fptr,"Executed on: %s",ctime(&t));
    fprintf(fptr,"Operation : Complex numbers addition\n");
   
    if((a.img < 0)&&(b.img < 0)){
        fprintf(fptr,"Input:\n\tcomplex number 1 = %.2f %.2fi\n\tcomplex number 2 = %.2f %.2fi\n",a.real,a.img,b.real,b.img);
    }
    else if (a.img < 0){
        fprintf(fptr,"Input:\n\tcomplex number 1 = %.2f %.2fi\n\tcomplex number 2 = %.2f + %.2fi\n",a.real,a.img,b.real,b.img);
    }
    else if(b.img < 0){
        fprintf(fptr,"Input:\n\tcomplex number 1 = %.2f + %.2fi\n\tcomplex number 2 = %.2f %.2fi\n",a.real,a.img,b.real,b.img);
    }
    else{
         fprintf(fptr,"Input:\n\tcomplex number 1 = %.2f + %.2fi\n\tcomplex number 2 = %.2f + %.2fi\n",a.real,a.img,b.real,b.img);
    }

    if (c.img >= 0){
        fprintf(fptr,"Output:\n\tSum = %.2f + %.2fi\n\n", c.real, c.img);
    }
    else{
        fprintf(fptr,"Output:\n\tSum = %.2f %.2fi\n\n", c.real, c.img);
    }

    fclose(fptr);

    return 0;
}

#endif
