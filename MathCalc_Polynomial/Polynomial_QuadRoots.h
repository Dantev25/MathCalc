#ifndef POLYNOMIAL_QUADROOTS_H_INCLUDED
#define POLYNOMIAL_QUADROOTS_H_INCLUDED
#include <math.h>
int QuadRoots()
{
    int i;
    float a[4],beqn,root1, root2;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;
    printf("\nPlease input the quadratic expression (starting from constant and ascending in power):\n");
    for (i=0;i<3;i++){
        if (i==0){
            printf("Constant = ");
            scanf("%f",&a[i]);
        }
        else if (i==1){
            printf("X = ");
            scanf("%f",&a[i]);
        }
        else{
            printf("X^%d = ",i);
            scanf("%f",&a[i]);      
        }
    }
    printf("\nThe expressions input is: ");
    for(i=2;i>=0;i--){
        if(a[i]!=0){
            if (i==0){
                printf("%.2f",a[i]);
            }
            else if (i==1){
                printf("%.2fX + ",a[i]);
            }
            else{
                printf("%.2fX^%d + ",a[i],i);
            }
        }
    }
    beqn = pow(a[1],2)-(4*a[2]*a[0]);
    printf("\n\nb^2 - 4ac = %.2f\n",beqn);
    if (beqn == 0){
        printf("\nEquation has only one root as b^2 - 4ac = 0\nRoot is at: ");
        root1 = -a[1] + sqrt(beqn);
        printf("x = %.2f",root1);
    }
    else if(beqn>0){
        printf("\nEquation has two roots as b^2 - 4ac > 0\nRoots are at: \n");
        root1 = -a[1] + sqrt(beqn);
        root2 = -a[1] - sqrt(beqn);
        printf("Root1: x = %.2f",root1);
        printf("\nRoot2: x = %.2f",root2);
    }
    else{
        printf("\nRoots are imaginary as b^2 - 4ac <0.");
    }

    fptr = (fopen("MathCalc_Polynomial/Polynomial_Log.txt","a"));
    
    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }

    fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
    fprintf(fptr,"Operation Done: Quadratic Roots\n");
    fprintf(fptr,"Expression input: ");
    PolySave(3,a,fptr);
    fprintf("Output:\n");
    fprintf(fptr,"\tb^2 - 4ac = %d",beqn);
    if (beqn == 0){
        fprintf(fptr,"\n\tEquation has only one root as b^2 - 4ac = 0\n\tRoot is at: X= %.2f",root1);
    }
    else if(beqn>0){
        fprintf(fptr,"\n\tEquation has two roots as b^2 - 4ac > 0\nRoots are at: \n\t\tRoot 1: X = %.2f\n\t\tRoot 2: X = %.2f",root1,root2);
    }
    else{
        fprintf(fptr,"\n\tRoots are imaginary as b^2 - 4ac <0.");
    }
}

#endif