#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p[] = {"Ahmed" ,"Maged" ,"Osama" ,"Mariam","Mohsen", "Menna", "Sameh", "Salma", "Magdy", "Khaled"};
    char *x[] = {"Programming" , "Data Structures" , "Discrete Math" , "Algorithms"};
    int result[10][4] =
    {
        {100,95,68,98},{96,88,100,67},{66,85,76,93},{54,66,98,100},{78,99,89,53},{69,56,64,76},{98,100,88,67},{64,87,85,100},{99,87,65,84},{63,89,74,100}
    };
    int ID;
    printf("Please enter your id: ");
    scanf("%d",&ID);
    if(ID>=0&&ID<10)
    {
        printf("Welcome %s ",p[ID]);
        printf("Your grades are :\n");
            for(int i=0 ; i<4 ; i++)
            {
                printf("%s: %d\n",x[i],result[ID][i]);
            }
    }
    else
    {
        printf("Invalid ID");
    };
    return 0;
}
