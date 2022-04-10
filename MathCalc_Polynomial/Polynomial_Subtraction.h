#ifndef POLYNOMIAL_SUBTRACTION_H_INCLUDED
#define POLYNOMIAL_SUBTRACTION_H_INCLUDED

#define MAX 99

int PolySub()
{
    int a[MAX], b[MAX],Result[MAX], n1,n2,deg,i,k;
    for (i=0; i<MAX; i++){
        a[i] = 0;
    }
    for (i=0; i<MAX; i++){
        b[i] = 0;
    }
    for (i=0; i<MAX; i++){
        Result[i] = 0;
    }
    printf("Please input the degree (highest power) of the first expression:");
    scanf("%d",&n1);
    deg = n1;
    while (n1<0){
        printf("Please input the degree (highest power) again, it cannot be negative:");
        scanf("%d",&n1);
    }
    n1++;
    printf("Please input the first expression (starting from constant and ascending in power):\n");
    for (i=0;i<n1;i++){
        if (i==0){
            printf("Constant = ");
            scanf("%d",&a[i]);
        }
        else if (i==1){
            printf("X = ");
            scanf("%d",&a[i]);
        }
        else{
            printf("X^%d = ",i);
            scanf("%d",&a[i]);      
        }
    }
    printf("Please input the degree (highest power) of the second expression:");
    scanf("%d",&n2);
    while (n2<0){
        printf("Please input the degree (highest power) again, it cannot be negative:");
        scanf("%d",&n2);
    }
    n2++;
    if(n2>deg){
        deg = n2;
    }
    
    printf("Please input the second expression (starting from constant and ascending in power):\n");
    for (i=0;i<n2;i++){
        if (i==0){
            printf("Constant = ");
            scanf("%d",&b[i]);
        }
        else if (i==1){
            printf("X = ");
            scanf("%d",&b[i]);
        }
        else{
            printf("X^%d = ",i);
            scanf("%d",&b[i]);      
        }
    }
    for(k=0;k<deg;k++){
        Result[k] = a[k] - b[k]; 
    }

    printf("Result of these two expressions is: \n");
    for(i=(deg-1);i>=0;i--){
        if(Result[i]!=0){
            if (i==0){
                printf("%d",Result[i]);
            }
            else if (i==1){
                printf("%dX + ",Result[i]);
            }
            else{
                printf("%dX^%d + ",Result[i],i);
            }
        }
    }
}

#endif