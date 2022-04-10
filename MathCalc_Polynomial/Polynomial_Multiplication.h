#ifndef POLYNOMIAL_ADDITION_H_INCLUDED
#define POLYNOMIAL_ADDITION_H_INCLUDED

#define MAX 99

int PolyAdd()
{
    int a[MAX] = {0}, b[MAX],prod[300], n1,n2,i,j;
    for (i=0; i<MAX; i++){
        a[i] = 0;
    }
    for (i=0; i<MAX; i++){
        b[i] = 0;
    }
    printf("Please input the degree (highest power) of the first expression:");
    scanf("%d",&n1);
    
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
    
    for (int i=0; i<n1; i++){
        for (int j=0; j<n2; j++){
            prod[i+j] += a[i]*b[j];
        }
    }
 
    
    printf("Product of these two expressions is: \n");
    for(i=(n1+n2-1);i>=0;i--){
        if(prod[i]!=0){
            if (i==0){
                printf("%d",prod[i]);
            }
            else if (i==1){
                printf("%dX + ",prod[i]);
            }
            else{
                printf("%dX^%d + ",prod[i],i);
            }
        }
    }
}

#endif