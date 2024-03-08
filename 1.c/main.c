#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p[] = {"Mohsen","Maged","Mariam"};
    int salary=5000, bonus=0, deductions=0, worked, hours=40;
    for(int i=0 ; i<3 ; i++)
    {
        printf("The number of hours that %s works it is: ",p[i]);
        scanf("%d",&worked);
        int d = deductions;
        int b = bonus;
        int s = salary;
        if(worked > hours)
    {
        d = 0;
        b = s * 0.1;
        s = s + b - d;
    }
    else if(worked == hours)
    {
        d = 0;
        b = 0;
        s = s + b - d;
    }
    else
    {
        d = s * 0.1;
        b = 0;
        s = s + b - d;
    };
        printf("%s salary is:%d\n ",p[i],s);
    }
    return 0;
}
