/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    struct student{
        int number;
        char name[50];
        char surname[50];
        int midtermGrade;
    };
    struct student person[10];
    printf("kac kisinin bilgisini gireceksiniz");
    scanf("%d",&n);
    printf("enter info number name surname midtermGrade\n");
    for(i=0;i<n;i++)
    {
        scanf("%d%s%s%d",&person[i].number,
                            &person[i].name,
                            &person[i].surname,
                            &person[i].midtermGrade);
        printf("*******************\n");
    }
    for(i=0;i<n;i++)
    {
        printf("number = %d \n name = %s \n surname = %s \n midtermGrade = %d\n",person[i].number,person[i].name,person[i].surname,person[i].midtermGrade);
        printf("*******************\n");
    }
    return 0;
}*/


//1.soru

/*#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double real;
    double imag;
} complex;

complex add(complex c1, complex c2);

int main() {
    complex c1, c2, result;
    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%lf %lf", &c1.real, &c1.imag);
    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%lf %lf", &c2.real, &c2.imag);
    result = add(c1, c2);
    printf("Result: %lf + %lfi\n", result.real, result.imag);

    return 0;
}

complex add(complex c1, complex c2) {
    complex result;

    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;

    return result;
}*/

//2.soru

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    struct student{
        int number;
        char name[50];
        char surname[50];
        int midtermGrade;
    };
    struct student person[5];
    printf("enter info number name surname midtermGrade\n");
    for(i=0;i<5;i++)
    {
        scanf("%d%s%s%d",&person[i].number,
                            &person[i].name,
                            &person[i].surname,
                            &person[i].midtermGrade);
        printf("*******************\n");
    }
    for(i=0;i<5;i++)
    {
        printf("number = %d \n name = %s \n surname = %s \n midtermGrade = %d\n",person[i].number,person[i].name,person[i].surname,person[i].midtermGrade);
        printf("*******************\n");
    }
    return 0;
}*/

//3.soru

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    struct student{
        int number;
        char name[50];
        char surname[50];
        int midtermGrade;
    };
    struct student *ptr;
    printf("kac kisinin bilgisini gireceksiniz");
    scanf("%d",&n);
    ptr = (struct student*)malloc(n*sizeof(struct student));
    printf("enter info number name surname midtermGrade\n");
    for(i=0;i<n;i++)
    {
        scanf("%d%s%s%d",&(ptr+i)->number,
                            (ptr+i)->name,
                            (ptr+i)->surname,
                            &(ptr+i)->midtermGrade);
        printf("*******************\n");
    }
    for(i=0;i<n;i++)
    {
        printf("number = %d \n name = %s \n surname = %s \n midtermGrade = %d\n",(ptr+i)->number,(ptr+i)->name,(ptr+i)->surname,(ptr+i)->midtermGrade);
        printf("*******************\n");
    }
    return 0;
}

