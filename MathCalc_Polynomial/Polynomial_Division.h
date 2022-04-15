#ifndef POLYNOMIAL_DIVISION_H_INCLUDED
#define POLYNOMIAL_DIVISION_H_INCLUDED

#define MAX 99

struct Node {
    float coeff;
    int pow;
    struct Node* next;
};
 
// Function to create new node
void create_node(float x, int y,
                 struct Node** temp)
{
    struct Node *r, *z;
    z = *temp;
 
    // If temp is NULL
    if (z == NULL) {
 
        r = (struct Node*)malloc(
            sizeof(struct Node));
 
        // Update coefficient and
        // power in the LL z
        r->coeff = x;
        r->pow = y;
        *temp = r;
        r->next = (struct Node*)malloc(
            sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    }
 
    // Otherwise
    else {
        r->coeff = x;
        r->pow = y;
        r->next = (struct Node*)malloc(
            sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    }
}
 
// Function to create a LL that stores
// the value of the quotient while
// performing polynomial division
void store_quotient(float mul_c, int diff,
                    struct Node* quo)
{
    // Till quo is non-empty
    while (quo->next != NULL) {
        quo = quo->next;
    }
 
    // Update powers and coefficient
    quo->pow = diff;
    quo->coeff = mul_c;
    quo->next = (struct Node*)malloc(
        sizeof(struct Node));
    quo = quo->next;
    quo->next = NULL;
}
 
// Function to create a new polynomial
// whenever subtraction is performed
// in polynomial division
void formNewPoly(int diff, float mul_c,
                 struct Node* poly)
{
    // Till poly is not empty
    while (poly->next != NULL) {
        poly->pow += diff;
        poly->coeff *= mul_c;
        poly = poly->next;
    }
}
 
// Function to copy one polynomial
// into another linkedlist
void copyList(struct Node* r,
              struct Node** copy)
{
    // Copy the values of r in the
    // polynomial copy
    while (r != NULL) {
 
        struct Node* z
            = (struct Node*)malloc(
                sizeof(struct Node));
 
        // Store coefficient and power
        z->coeff = r->coeff;
        z->pow = r->pow;
        z->next = NULL;
 
        struct Node* dis = *copy;
        if (dis == NULL) {
            *copy = z;
        }
        else {
            while (dis->next != NULL) {
                dis = dis->next;
            }
            dis->next = z;
        }
        r = r->next;
    }
}
 
// Function to subtract two polynomial
void sub(struct Node* poly1,
             struct Node* poly2,
             struct Node* poly)
{
 
    // Compute until poly1 and poly2 is empty
    while (poly1->next && poly2->next) {
 
        // If power of 1st polynomial
        // > 2nd, then store 1st as
        // it is and move its pointer
        if (poly1->pow > poly2->pow) {
 
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
            poly->next
                = (struct Node*)malloc(
                    sizeof(struct Node));
            poly = poly->next;
            poly->next = NULL;
        }
 
        // If power of 2nd polynomial >
        // 1st then store 2nd as it is
        // and move its pointer
        else if (poly1->pow < poly2->pow) {
 
            poly->pow = poly2->pow;
            poly->coeff = -1 * poly2->coeff;
            poly2 = poly2->next;
            poly->next
                = (struct Node*)malloc(
                    sizeof(struct Node));
            poly = poly->next;
            poly->next = NULL;
        }
 
        // If power of both polynomial
        // is same then subtract their
        // coefficients
        else {
 
            if ((poly1->coeff
                 - poly2->coeff)
                != 0) {
 
                poly->pow = poly1->pow;
                poly->coeff = (poly1->coeff
                               - poly2->coeff);
 
                poly->next = (struct Node*)malloc(
                    sizeof(struct Node));
                poly = poly->next;
                poly->next = NULL;
            }
 
            // Update the pointers
            // poly1 and poly2
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
 
    // Add the remaining value of polynomials
    while (poly1->next || poly2->next) {
 
        // If poly1 exists
        if (poly1->next) {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
 
        // If poly2 exists
        if (poly2->next) {
            poly->pow = poly2->pow;
            poly->coeff = -1 * poly2->coeff;
            poly2 = poly2->next;
        }
 
        // Add the new node to poly
        poly->next
            = (struct Node*)malloc(
                sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
}
 
// Function to display linked list
void show(struct Node* node)
{
    int count = 0;
    while (node->next != NULL
           && node->coeff != 0) {
 
        // If count is non-zero, then
        // print the positive value
        if (count == 0)
            printf("%.2f",node->coeff);
 
        // Otherwise
        else
            printf("%.2f",fabs(node->coeff));
        count++;
 
        // Print polynomial power
        if (node->pow != 0)
            printf("x^%d", node->pow);
        node = node->next;
 
        if (node->next != NULL)
 
            // If coeff of next term
            // > 0 then next sign will
            // be positive else negative
            if (node->coeff > 0)
                printf(" + ");
            else
                printf(" - ");
    }
 
    printf("\n");
}
 
// Function to divide two polynomials
void divide_poly(struct Node* poly1,
                 struct Node* poly2)
{
    // Initialize Remainder and Quotient
    struct Node *rem = NULL, *quo = NULL;
 
    quo = (struct Node*)malloc(
        sizeof(struct Node));
    quo->next = NULL;
 
    struct Node *q = NULL, *r = NULL;
 
    // Copy poly1, i.e., dividend to q
    copyList(poly1, &q);
 
    // Copy poly, i.e., divisor to r
    copyList(poly2, &r);
 
    // Perform polynomial subtraction till
    // highest power of q > highest power of divisor
    while (q != NULL
           && (q->pow >= poly2->pow)) {
 
        // difference of power
        int diff = q->pow - poly2->pow;
 
        float mul_c = (q->coeff
                       / poly2->coeff);
 
        // Stores the quotient node
        store_quotient(mul_c, diff,
                       quo);
 
        struct Node* q2 = NULL;
 
        // Copy one LL in another LL
        copyList(r, &q2);
 
        // formNewPoly forms next value
        // of q after performing the
        // polynomial subtraction
        formNewPoly(diff, mul_c, q2);
 
        struct Node* store = NULL;
        store = (struct Node*)malloc(
            sizeof(struct Node));
 
        // Perform polynomial subtraction
        sub(q, q2, store);
 
        // Now change value of q to the
        // subtracted value i.e., store
        q = store;
        free(q2);
    }
 
    // Print the quotient
    printf("Quotient: ");
    show(quo);
 
    // Print the remainder
    printf("Remainder: ");
    rem = q;
    show(rem);
}

int PolyDiv()
{
    struct Node* poly1 = NULL;
    struct Node *poly2 = NULL, *poly = NULL;
 
    // Create 1st Polynomial (Dividend):
    // 5x^2 + 4x^1 + 2
    float a,b,c,d,e,f;
    int i=2;
    for (i=2;i>=0;i--){
        if (i==0){
            printf("Constant = ");
            scanf("%f",&c);
        }
        else if (i==1){
            printf("X = ");
            scanf("%f",&b);
        }
        else{
            printf("X^%d = ",i);
            scanf("%f",&a);      
        }
    }
    for (i=2;i>=0;i--){
        if (i==0){
            printf("Constant = ");
            scanf("%f",&f);
        }
        else if (i==1){
            printf("X = ");
            scanf("%f",&e);
        }
        else{
            printf("X^%d = ",i);
            scanf("%f",&d);      
        }
    }

    if(a!=0){
        i=2;
        create_node(a, i, &poly1);
    }
    if(b!=0){
        i=1;
        create_node(b, i, &poly1);
    }
    if(c!=0){
        i=0;
        create_node(c, i, &poly1);
    }
    
    // Create 2nd Polynomial (Divisor):
    // 5x^1 + 5
    if(d!=0){
        i=2;
        create_node(d, i, &poly2);
    }
    if(e!=0){
        i=1;
        create_node(e, i, &poly2);
    }
    if(f!=0){
        i=0;
        create_node(f, i, &poly2);
    }
    show(poly1);
    show(poly2);
    // Function Call
    divide_poly(poly1, poly2);
 
    return 0;

}

#endif
