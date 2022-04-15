#ifndef POLYNOMIAL_ADDITION_H_INCLUDED
#define POLYNOMIAL_ADDITION_H_INCLUDED

#define MAX 99
int PolyPrint(int deg, float a[])
{
    int i;
    for(i=(deg-1);i>=0;i--){
        if(a[i]>0.001){
            if (i==0){
                printf("%.2f\n",a[i]);
            }
            else if (i==1){
                printf("%.2fX + ",a[i]);
            }
            else{
                printf("%.2fX^%d + ",a[i],i);
            }
        }
    }
}

int PolySave(int deg, float a[], FILE *fptr)
{
    int i;
    for(i=(deg-1);i>=0;i--){
        if(a[i]>0.001){
            if (i==0){
                fprintf(fptr,"%.2f\n",a[i]);
            }
            else if (i==1){
                fprintf(fptr,"%.2fX + ",a[i]);
            }
            else{
                fprintf(fptr,"%.2fX^%d + ",a[i],i);
            }
        }
    }
}
int PolyAdd()
{
    float a[MAX], b[MAX],sum[MAX];
    int n1,n2,deg,i,k;
    time_t t;   // not a primitive datatype
    time(&t);

    FILE *fptr;
    for (i=0; i<MAX; i++){
        a[i] = 0;
    }
    for (i=0; i<MAX; i++){
        b[i] = 0;
    }
    for (i=0; i<MAX; i++){
        sum[i] = 0;
    }
    printf("\nPlease input the degree (highest power) of the first expression:");
    scanf("%d",&n1);
    deg = n1;
    while (n1<0){
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
    printf("\nPlease input the degree (highest power) of the second expression:");
    scanf("%d",&n2);
    while (n2<0){
        printf("\nPlease input the degree (highest power) again, it cannot be negative:");
        scanf("%d",&n2);
    }
    n2++;
    if(n2>deg){
        deg = n2;
    }
    printf("\nPlease input the second expression (starting from constant and ascending in power):\n");
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
    for(k=0;k<deg;k++){
        sum[k] = a[k] + b[k]; 
    }

    printf("\nFirst expression : ");
    PolyPrint(n1,a);
    printf("Second expression : ");
    PolyPrint(n2,b);
    printf("\nSum of these two expressions is: ");
    PolyPrint(deg,sum);
    printf("\n\n");
    fptr = (fopen("MathCalc_Polynomial/Polynomial_Log.txt","a"));
    
    if(fptr==NULL){
        printf("Error!");
        exit(1);
    }
    fprintf(fptr,"\n\nExecuted on: %s",ctime(&t));
    fprintf(fptr,"Operation Done: Polynomial Addition\n");
    fprintf(fptr,"Inputs: \n");
    fprintf(fptr,"\tFirst expression : ");
    PolySave(n1,a,fptr);
    fprintf(fptr,"\tSecond expression : ");
    PolySave(n2,b,fptr);
    fprintf(fptr,"Output: ");
    PolySave(deg,sum,fptr);
    fclose(fptr);
}


#endif