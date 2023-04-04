/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pnt;
    int i=0,sum,k,big;
    pnt = (int*)calloc(1,sizeof(int));
    printf("enter number\n");
    scanf("%d",&big);
    *(pnt+i)=big;
    i++;
    while(1)
    {
        printf("enter number quit-0\n");
        scanf("%d",&k);
        if(k==0)
            break;

        *(pnt+i)=k;
        i++;
        if(k>big)
        {
            big = k;
        }

    }
    printf("elements\n");
    for(int c =0;c<i;c++)
    {
        printf("%d\n",*(pnt+c));
    }
    printf("the big number is %d",big);




    return 0;
}*/

//2.soru

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *pnt;
    pnt = (char*)malloc(18*sizeof(char));
    strcpy(pnt, "emre yigit ozturk");
    printf("%s",pnt);



    return 0;
}*/

//3.soru

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *pnt;
    pnt = (char*)malloc(5*sizeof(char));
    strcpy(pnt, "emre");
    pnt = (char*)realloc(pnt,11*sizeof(char));
    strcat(pnt, " yigit");
    printf("%s",pnt);
    free(pnt);


    return 0;
}*/

//4.soru

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *pnt;
    int n;

    printf("what is the array size?\n");
    scanf("%d", &n);
    getchar();

    pnt = (char*) malloc(n * sizeof(char));

    printf("enter string\n");
    fgets(pnt, n, stdin);

    printf("what is the new array size?\n");
    scanf("%d", &n);
    getchar();

    pnt = (char*) realloc(pnt, n * sizeof(char));

    printf("enter new string\n");
    fgets(pnt, n, stdin);

    printf("%s", pnt);
    free(pnt);

    return 0;
}*/

//5.soru

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *pnt, *pnt1;
    int n, c = 0, k = 0;
    printf("enter size of array\n");
    scanf("%d", &n);
    pnt = (char*)malloc(n * sizeof(char));
    printf("enter string\n");
    fflush(stdin);
    fgets(pnt, n, stdin);

    //reverse part
    for (pnt1 = pnt; *pnt1 != '\0'; pnt1++, c++)
        ;
    pnt1--; // son karakteri atlýyoruz

    for (k = 0; k < c; pnt1--, k++)
    {
        printf("%c", *pnt1);
    }

    free(pnt);
    return 0;
}

//6.soru cevabý = 150;




