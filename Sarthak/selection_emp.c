#include <stdio.h>
typedef struct
{
    char name[30];
    int age;
    int salary;
} RECORD;
RECORD emp[100];
//------------------------------------------------------------
int readFile(RECORD *a)
{
    int i = 0;
    FILE *fp;
    char inputfile[20];
    printf("\n Enter Filename to Read Input Data : ");
    scanf("%s", inputfile);
    if ((fp = fopen(inputfile, "r")) != NULL)
    {
        while (!feof(fp))
        {
            fscanf(fp, "%s%d%d", a[i].name, &a[i].age, &a[i].salary);
            i++;
        }
    }
    return i; // number of records read
}
//-----------------------------------------------------
void writeFile(RECORD *a, int n)
{
    int i = 0;
    FILE *fp;
    char outputfile[20];
    printf("\n \n Enter Filename to write sorted data : ");
    scanf("%s", outputfile);
    if ((fp = fopen(outputfile, "w")) != NULL)
    {
        for (i = 0; i < n; i++)
        {
            fprintf(fp, "%s\t%d\t%d\n", a[i].name, a[i].age, a[i].salary);
        }
    }
}
//-----------------------------------------------------
int Selectionsort(RECORD *a, int n)
{
    int i, current, pos;
    RECORD smallest, temp;
    for (current = 0; current < n - 1; current++)
    {
        smallest = a[current];
        pos = current;
        for (i = current + 1; i <= n - 1; i++)
            if (a[i].age < smallest.age)
            {
                smallest = a[i];
                pos = i;
            }
        temp = a[current];
        a[current] = a[pos];
        a[pos] = temp;
    }
}
//-----------------------------------------------
int main()
{
    int n;
    n = readFile(emp);
    printf("\n\n ------- Data successfully Read From File------------");
    Selectionsort(emp, n);
    writeFile(emp, n);
    printf("\n\n ------- Sorted Data successfully Write into Specified File------------");
    return 0;
}