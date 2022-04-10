#ifndef POLYNOMIAL_QUADROOTS_H_INCLUDED
#define POLYNOMIAL_QUADROOTS_H_INCLUDED
#include <math.h>
int QuadRoots()
{
    int a[4], root1, root2,i,beqn;
    printf("Please input the quadratic expression (starting from constant and ascending in power):\n");
    for (i=0;i<3;i++){
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
    printf("The expressions input is: ");
    for(i=2;i>=0;i--){
        if(a[i]!=0){
            if (i==0){
                printf("%d",a[i]);
            }
            else if (i==1){
                printf("%dX + ",a[i]);
            }
            else{
                printf("%dX^%d + ",a[i],i);
            }
        }
    }
    beqn = (a[1]^2)-(4*a[2]*a[0]);
    printf("\nb^2 - 4ac = %d\n",beqn);
    if (beqn == 0){
        printf("Equation has only one root as b^2 - 4ac = 0\nRoot is at: ");
        root1 = -a[2]+ sqrt((a[1]^2)-(4*a[2]*a[0]));
        printf("x = %d",root1);
    }
    else if(beqn>0){
        printf("Equation has two roots as b^2 - 4ac > 0\nRoots are at\n: ");
        root1 = -a[2]+ sqrt((a[1]^2)-(4*a[2]*a[0]));
        root2 = -a[2]- sqrt((a[1]^2)-(4*a[2]*a[0]));
        printf("Root1: x = %d",root1);
        printf("\nRoot2: x = %d",root2);
    }
    else{
        printf("Roots are imaginary as b^2 - 4ac <0.");
    }
}

#endif