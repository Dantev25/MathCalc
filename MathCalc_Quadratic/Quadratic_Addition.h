#ifndef QUADRATIC_ADDITION_H_INCLUDED
#define QUADRATIC_ADDITION_H_INCLUDED

#define MAX 99

int QuadAdd()
{
    int a[MAX] = {0}, b[MAX] = {0},sum[MAX] = {0}, n1,n2,m,i,k;
    printf("Please input the degree (highest power) of the first expression:");
    scanf("%d",&n1);
    m = n1;
    while (n1<0){
        printf("Please input the degree (highest power) again, it cannot be negative:");
        scanf("%d",&n1);
    }
    printf("Please input the the first expression (starting from constant and ascending in power):\n");
    for (int i=0;i<n1;i++){
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
    if(n2>m){
        m = n2;
    }
    printf("Please input the the second expression (starting from constant and ascending in power):\n");
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
    for(k=0;k<m;k++){
        sum[k] = a[k] + b[k]; 
    }

    printf("%d",m);
    printf("Sum of these two expressions is: \n");
    for(i=(m-1);i>=0;i--){
        if(sum[i]!=0){
            if (i==0){
                printf("%d",sum[i]);
            }
            else if (i==1){
                printf("%dX + ",sum[i]);
            }
            else{
                printf("%dX^%d + ",sum[i],i);
            }
        }
    }
}

#endif