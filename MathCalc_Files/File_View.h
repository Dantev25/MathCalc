#ifndef FILE_VIEW_H_INCLUDED
#define FILE_VIEW_H_INCLUDED

int FileView()
{
    FILE * fptr;
    int c, choice;
    char again = 'Y';

    printf("\n\t\tWelcome to Log Selection Menu\n");
    while(again == 'Y'){
        printf("\n\nPlease type in the number associated to the log file you wish to view.\n\n");
        printf("\t1- Matrix Operations\n\t2- Polynomial Operations\n\t3- 2D AND 3D Shapes Operations\n\t4- Complex Numbers Operations");
        printf("\n\nInput your choice: ");
        scanf("%d",&choice);

        if(choice == 1){
            fptr = fopen("MathCalc_Matrix/Matrix_Log.txt","r");
            if(fptr == NULL){
                printf("\nFile not found\n");
            }
            else{
                printf("\nFile opened in read mode\n\n");
            } 
            while((c = fgetc(fptr)) != EOF){
                printf("%c",c);
            }
            printf("\n\n");
            fclose(fptr);
        }

        else if(choice == 2){
            fptr = fopen("MathCalc_Polynomial/Polynomial_Log.txt","r");
            if(fptr == NULL){
                printf("\nFile not found\n");
            }
            else{
                printf("\nFile opened in read mode\n\n");
            } 
            while((c = fgetc(fptr)) != EOF){
                printf("%c",c);
            }
            printf("\n\n");
            fclose(fptr);
        }

        else if(choice == 3){
            fptr = fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","r");
            if(fptr == NULL){
                printf("\nFile not found\n");
            }
            else{
                printf("\nFile opened in read mode\n\n");
            } 
            while((c = fgetc(fptr)) != EOF){
                printf("%c",c);
            }
            printf("\n\n");
            fclose(fptr);
        }

        else if(choice == 4){
            fptr = fopen("MathCalc_Complex/Complex_Log.txt","r");
            if(fptr == NULL){
                printf("\nFile not found\n");
            }
            else{
                printf("\nFile opened in read mode\n\n");
            } 
            while((c = fgetc(fptr)) != EOF){
                printf("%c",c);
            }
            printf("\n\n");
            fclose(fptr);
        }

        else{
            printf("\nIncorrect Input!\nPlease choose a number between 1-4!");
        }

        printf("\nDo you want to view a Log File again? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }

    return 0;
}

#endif