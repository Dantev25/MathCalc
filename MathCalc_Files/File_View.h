#ifndef FILE_VIEW_H_INCLUDED
#define FILE_VIEW_H_INCLUDED

int viewFile()
{
    FILE * ptr;
    int c;

    ptr=fopen("MathCalc_Ar_Vol/Ar_Vol_Log.txt","r");

    if(ptr == NULL)
    {
        printf("File not found\n");
    }
    else
    {
        printf("File opened in read mode\n\n");
    } 
    while((c=fgetc(ptr))!=EOF)
    {
        printf("%c",c);
    }
}

#endif