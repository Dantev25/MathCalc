#ifndef FILE_VIEW_H_INCLUDED
#define FILE_VIEW_H_INCLUDED

int viewFile()
{
    int c,choice;
    FILE * ptr;
    FILE * ptr1;
    FILE * ptr2;

    printf("Which section's log file would you like to view:\n");
    printf("1. Matrix operations\n2. Polynomial operations\n3. 2d and 3d shapes operations\n");
    printf("4. Exit\n\n");
    printf("Input your choice: ");
    scanf("%d",&choice);

    while(choice =! 4){
        switch (choice)
        {
        case 1:
            ptr=fopen("MathCalc_Matrix/Matrix_Log.txt","r");
            if(ptr == NULL){
                printf("File not found\n");
            }
            else{
                printf("File opened in read mode\n\n");
            } 
            while((c=fgetc(ptr))!=EOF){
                printf("%c",c);
            }
            break;
        
        case 2:
            ptr=fopen("MathCalc_Polynomial/Polynomial_Log.txt","r");
            if(ptr == NULL){
                printf("File not found\n");
            }
            else{
                printf("File opened in read mode\n\n");
            } 
            while((c=fgetc(ptr))!=EOF){
                printf("%c",c);
            } 
            break;

        case 3:
            ptr=fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","r");
            if(ptr == NULL){
                printf("File not found\n");
            }
            else{
                printf("File opened in read mode\n\n");
            } 
            while((c=fgetc(ptr))!=EOF){
                printf("%c",c);
            }
            break;
        
        default:
            printf("Wrong choice entered!\nInput again: ");
            scanf("%d",&choice);
            break;
        }
    }
    return 0;
}
#endif