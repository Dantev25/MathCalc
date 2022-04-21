#ifndef COMPLEX_DIVISION_H_INCLUDED
#define COMPLEX_DIVISION_H_INCLUDED

/*function to carry division of complex numbers*/
float complexDiv()
{
    struct complex a, b, c;
    float x, y, z;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;

    //Input of complex numbers
    printf("Enter a and b where a + ib is the first complex number:\n");
    printf("a = ");
    scanf("%f",&a.real);
    printf("b = ");
    scanf("%f",&a.img);

    while(a.real == 0 && a.img == 0){
        printf("\nOutput will be 0 + 0i itself!\nInput again!\n");
        printf("a = ");
        scanf("%f",&a.real);
        printf("b = ");
        scanf("%f",&a.img);
    }

    printf("\nEnter c and d where c + id is the second complex number:\n");
    printf("c = ");
    scanf("%f", &b.real);
    printf("d = ");
    scanf("%f", &b.img);

    while(b.real == 0 && b.img == 0){
        printf("\nDivision by 0 + 0i isn't allowed!\nInput again!\n");
        printf("c = ");
        scanf("%f", &b.real);
        printf("d = ");
        scanf("%f", &b.img);
    }
      
    //calculation of parameters x, y, z
    x = a.real*b.real + a.img*b.img;
    y = a.img*b.real - a.real*b.img;
    z = b.real*b.real + b.img*b.img;

    if (fmod(x,z) == 0 && fmod(y,z) == 0){
        if (y/z >= 0){
            printf("\nDivision of the complex numbers = %.3f + %.3fi", x/z, y/z);
        }
        else{
            printf("\nDivision of the complex numbers = %.3f %.3fi", x/z, y/z);
        }
    }
        
    else if (fmod(x,z) == 0 && fmod(y,z) != 0){
        if (y/z >= 0){
            printf("\nDivision of the complex numbers = %.3f + %.3fi", x/z, y/z);
        }
        else{
            printf("\nDivision of the complex numbers = %.3f %.3fi", x/z, y/z);
        }
    }
        
    else if (fmod(x,z) != 0 && fmod(y,z) == 0){
        if (y/z >= 0){
            printf("\nDivision of the complex numbers = %.3f + %.3fi", x/z, y/z);
        }
        else{
            printf("\nDivision of the complex numbers = %.3f %.3f/%.3fi", x, y/(pow(z,2)));
        }
    }
        
    else{
        if (y/z >= 0){
            printf("\nDivision of the complex numbers = %.3f + %.3fi",x/z, y/z);
        }
        else{
            printf("\nDivision of the complex numbers = %.3f %.3fi", x/z, y/z);
        }
    }

    fptr = (fopen("MathCalc_Complex/Complex_Log.txt","a"));

    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    /*entry in log file*/
    fprintf(fptr,"------------------------------------------------\n");
    fprintf(fptr,"Executed on: %s",ctime(&t));
    fprintf(fptr,"Operation : Complex numbers division\n");
   
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

    if (fmod(x,z) == 0 && fmod(y,z) == 0){
        if (y/z >= 0){
            fprintf(fptr,"Output:\n\tQuotient = %.3f + %.3fi\n\n", x/z, y/z);
        }
        else{
            fprintf(fptr,"Output:\n\tQuotient = %.3f %.3fi\n\n", x/z, y/z);
        }
    }
        
    else if (fmod(x,z) == 0 && fmod(y,z) != 0){
        if (y/z >= 0){
            fprintf(fptr,"Output:\n\tQuotient = %.3f + %.3fi\n\n", x/z, y/z);
        }
        else{
            fprintf(fptr,"Output:\n\tQuotient = %.3f %.3fi\n\n", x/z, y/z);
        }
    }
        
    else if (fmod(x,z) != 0 && fmod(y,z) == 0){
        if (y/z >= 0){
            fprintf(fptr,"Output:\n\tQuotient = %.3f + %.3fi\n\n", x/z, y/z);
        }
        else{
            fprintf(fptr,"Output:\n\tQuotient = %.3f %.3f/%.3fi\n\n", x, y/(pow(z,2)));
        }
    }
        
    else{
        if (y/z >= 0){
            fprintf(fptr,"Output:\n\tQuotient = %.3f + %.3fi\n\n",x/z, y/z);
        }
        else{
            fprintf(fptr,"Output:\n\tQuotient = %.3f %.3fi\n\n", x/z, y/z);
        }
    }

    fclose(fptr);

    return 0;

}

#endif