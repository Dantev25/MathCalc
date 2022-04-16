#ifndef AR_VOL_AREAUNDERCURVE_H_INCLUDED
#define AR_VOL_AREAUNDERCURVE_H_INCLUDED

double z[6];
int n1;
double f(double x){
    if (n1==2){
        return ((z[2]*pow(x,2))+(z[1]*x)+(z[0]));
    }
    else if (n1==3){
        return ((z[3]*pow(x,3))+(z[2]*pow(x,2))+(z[1]*x)+(z[0]));
    }
    else if (n1==4){
        return ((z[4]*pow(x,4))+(z[3]*pow(x,3))+(z[2]*pow(x,2))+(z[1]*x)+(z[0]));
    }
    else if (n1==5){
        return ((z[5]*pow(x,5))+(z[4]*pow(x,4))+(z[3]*pow(x,3))+(z[2]*pow(x,2))+(z[1]*x)+(z[0]));
    }
    
}
/*Function definition to perform integration by Trapezoidal Rule */
double trapezoidal(double f(double x), double a, double b, int n){
  double x,h,sum=0,integral;
  int i;
  h=fabs(b-a)/n;
  for(i=1;i<n;i++){
    x=a+i*h;
    sum=sum+f(x);
  }
  integral=(h/2)*(f(a)+f(b)+2*sum);
  return integral;
}
/*Function definition to perform integration by Simpson's 1/3rd Rule */
double simpsons(double f(double x), double a,double b,double n){
  double h,integral,x,sum=0;
  int i;
  h=fabs(b-a)/n;
  for(i=1;i<n;i++){
    x=a+i*h;
    if(i%2==0){
      sum=sum+2*f(x);
    }
    else{
      sum=sum+4*f(x);
    }
  }
  integral=(h/3)*(f(a)+f(b)+sum);
  return integral;
}
int AUC(){
    int n,i=2;
    double a,b,h,x,integral,eps,integral_new;
    for (i=0; i<6; i++){
        z[i] = 0;
    }

    printf("\nPlease input the degree (highest power) of the expression:");
    scanf("%d",&n1);
    while (n1<2||n1>5){
        printf("\nPlease input the degree (highest power) again, it should be between 2 and 5 inclusive:");
        scanf("%d",&n1);
    }
    printf("\nPlease input the quadratic expression (starting from constant and ascending in power):\n");
    for (i=0;i<n1;i++){
        if (i==0){
            printf("Constant = ");
            scanf("%lf",&z[i]);
        }
        else if (i==1){
            printf("X = ");
            scanf("%lf",&z[i]);
        }
        else{
            printf("X^%d = ",i);
            scanf("%lf",&z[i]);      
        }
    }
    /*Ask the user for necessary input */
    i=2;
    printf("\nEnter the initial limit: ");
    scanf("%lf",&a);
    printf("\nEnter the final limit: ");
    scanf("%lf",&b);
    printf("\nEnter the desired accuracy: ");
    scanf("%lf",&eps);
    integral_new=simpsons(f,a,b,i);
 
    /* Perform integration by simpson's 1/3rd for different number of sub-intervals until they converge to the given accuracy:*/
    do{
        integral=integral_new;
        i=i+2;
        integral_new=simpsons(f,a,b,i);
    }while(fabs(integral_new-integral)>=eps);
   
    /*Print the answer */
    printf("\nThe integral using Simpson's Rule is: %lf for %d sub-intervals.\n",integral_new,i);
     
    i=2;
    /* Perform integration by trapezoidal rule for different number of sub-intervals until they converge to the given accuracy:*/
    do{
        integral=integral_new;
        i++;
        integral_new=trapezoidal(f,a,b,i);
    }while(fabs(integral_new-integral)>=eps);
 
    /*Print the answer */
    printf("The integral using Trapezoidal Rule is: %lf\n with %d intervals",integral_new,i);
}

#endif