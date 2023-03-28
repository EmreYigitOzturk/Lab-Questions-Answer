/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pnt1,*pnt2,p1,p2;
    scanf("%d%d",&p1,&p2);
    pnt1=&p1;
    pnt2=&p2;
    printf("%d",*pnt1+*pnt2);


    return 0;
}*/

//3. soru
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Input the number of elements to store in the arrray : ");
    scanf("%d",&i);
    int dizi[i],*pnt,k;
    for(int c=0;c<i;c++)
    {
        printf("element - %d : \n",c);
        scanf("%d",&k);
        dizi[c]=k;
    }
    pnt = dizi;
    for(int c =0;c<i;pnt++,c++)
    {
        printf("element - %d : %d\n",c,*pnt);
    }

    return 0;
}*/
// 4.soru
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[100],*pnt,c;
    printf("Input a string : ");
    gets(dizi);
    pnt = dizi;
    for(c = 0;*pnt != '\0';pnt++)
    {
        c++;
    }
    printf("The length of the given string is : %d",c);


    return 0;
}*/
//5. soru
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pnt,p1,p2,k;
    printf("Input value of 1st : ");
    scanf("%d",&p1);
    printf("Input value of 2nd : ");
    scanf("%d",&p2);
    k=p1;
    p1=p2;
    p2=k;

    printf("Value of the 1st : %d\n",p1);
    printf("Value of the 1st : %d",p2);
    return 0;
}*/
//6. soru
/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Input the number of elements to store in the arrray : ");
    scanf("%d",&i);
    int dizi[i],*pnt,k,sum=0;
    for(int c=0;c<i;c++)
    {
        printf("element - %d : \n",c);
        scanf("%d",&k);
        dizi[c]=k;
    }
    pnt = dizi;
    for(int c = 0;c<i;pnt++,c++)
    {
        sum+=*pnt;
    }
    printf("The Sum of the array : %d",sum);
}*/
// 7. soru
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k=0;
    char *pnt,dizi[100];
    printf("Input a string : ");
    gets(dizi);
    pnt = dizi;
    for (int c = 0; dizi[c] != '\0'; c++, pnt++)
    {
        *pnt = dizi[c];
        k++;
    }
    pnt--;
    printf("Reverse of the string : ");
    for(k;k>0;pnt--,k--)
    {
        printf("%c",*pnt);
    }


    return 0;
}


