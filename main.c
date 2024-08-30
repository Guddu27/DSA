#include<stdio.h>

typedef struct 
{
    char name [30];
    int age;
    int salary;
}RECORD;

RECORD emp [100];

int readFile(RECORD *a)
{
    int i = 0;
    FILE *fp;

    char inputfile[20];
    printf("\n\nEnter FileName to read input data : ");
    scanf("%s",inputfile);
    if((fp=fopen(inputfile, "r")) != NULL)
    {
        while(! feof(fp))
        {
            fscanf(fp, "%s%d", a[i].name, &a[i].age, &a[i].salary);
            i++;
        }
    }

    return i;
}

void writeFile(RECORD *a, int n)
{
    int i = 0;
    FILE *fp;
    char outputfile[20];
    printf("\n\n Enter Filename to write Sorted data into file (Age) : ");
    scanf("%s", outputfile);
    if((fp=fopen(outputfile, "w")) != NULL)
    {
        for(i=0;i<n;i++)
        {
            fprintf(fp,"%s\t%d\t%d\n", a[i].name, a[i].age, a[i].salary);
        }
    }
}

int Bubblesort(RECORD *a, int n)
{
    int i, j;
    RECORD t;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j].age > a[j+1].age)
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    return 0;
}

int main()
{
    int n;
    n = readFile(emp);
    printf("\n ---------- Data Sucessfully Read from Given File------------\n");
    Bubblesort(emp,n);
    writeFile(emp,n);
    printf("\n--------Sorted Data Sucessfully Write into Specified File---------\n");
    return 0;
}