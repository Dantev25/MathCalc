#ifndef POLYNOMIAL_MULTIPLICATION_H_INCLUDED
#define POLYNOMIAL_MULTIPLICATION_H_INCLUDED

#define MAX 99

int PolyMult()
{
    float a[MAX], b[MAX],prod[1000];
    int n1,n2,i,j;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;
    for (i=0; i<MAX; i++){
        a[i] = 0;
    }
    for (i=0; i<MAX; i++){
        b[i] = 0;
    }
    printf("\nPlease input the degree (highest power) of the first expression:");
    scanf("%d",&n1);
    
    while (n1<=0){
        printf("\nPlease input the degree (highest power) again, it cannot be negative:");
        scanf("%d",&n1);
    }
    n1++;
    printf("\nPlease input the first expression (starting from constant and ascending in power):\n");
    for (i=0;i<n1;i++){
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
    printf("Please input the degree (highest power) of the second expression:");
    scanf("%d",&n2);
    while (n2<=0){
        printf("Please input the degree (highest power) again, it cannot be negative:");
        scanf("%d",&n2);
    }
    n2++;
    printf("Please input the second expression (starting from constant and ascending in power):\n");
    for (i=0;i<n2;i++){
        if (i==0){
            printf("Constant = ");
            scanf("%f",&b[i]);
        }
        else if (i==1){
            printf("X = ");
            scanf("%f",&b[i]);
        }
        else{
            printf("X^%d = ",i);
            scanf("%f",&b[i]);      
        }
    }
    
    for (i=0; i<n1; i++){
        for ( j=0; j<n2; j++){
            prod[i+j] += a[i]*b[j];
        }
    }
    printf("\nFirst expression : ");
    PolyPrint(n1,a);
    printf("Second expression : ");
    PolyPrint(n2,b);
    
    printf("\nProduct of these two expressions is: ");
    PolyPrint((i+j-1),prod);
    printf("\n\n");
    fptr = (fopen("MathCalc_Polynomial/Polynomial_Log.txt","a"));
    
    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }
    fprintf(fptr,"----------------------------------------------------------------------\n");
    fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
    fprintf(fptr,"Operation Done: Polynomial Multiplication\n");
    fprintf(fptr,"Inputs: \n");
    fprintf(fptr,"\tFirst expression : ");
    PolySave(n1,a,fptr);
    fprintf(fptr,"\tSecond expression : ");
    PolySave(n2,b,fptr);
    fprintf(fptr,"Output: ");
    PolySave(n1+n2,prod,fptr);
    fclose(fptr);
}

#endif