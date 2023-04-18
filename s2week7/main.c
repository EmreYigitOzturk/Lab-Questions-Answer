/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char dizi1[100];
    char dizi2[100];
    printf("enter sentence 1 \n");
    gets(dizi1);
    printf("enter sentence 2 \n");
    gets(dizi2);
    n=strcmp(dizi1,dizi2);
    int snt1=strlen(dizi1);
    int snt2=strlen(dizi2);
    if(n==0)
        printf("sentences are same");
    else if(snt1>snt2)
        printf("sentence 1 is longer then sentence 2");
    else
        printf("sentence 2 is longer then sentence 1");
    return 0;
}*/

//2.soru

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n=0,i=0;
    char dizi[100];
    char *ptr;
    ptr=dizi;
    printf("enter sentence \n");
    gets(dizi);
    printf("enter word ");
    char w;
    scanf("%c",&w);
    while(*ptr)
    {
        if(*(ptr)==w)
        {
            printf("index = %d",n);
            i++;
        }

        n++;
        ptr++;
    }
    if(i==0)
        printf("aranan kelime cumlede yok");
    return 0;
}*/

//3.soru

/*#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    char harfler[26] = {0};
    int len, i, j;

    printf("enter text\n");
    gets(text);

    len = strlen(text);


    for (i = 0; i < len; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            harfler[text[i] - 'a']++;
        }
    }


    for (i = 0; i < 26; i++) {
        if (harfler[i] > 0) {
            printf("%c den %d tane var\n", i + 'a', harfler[i]);
        }
    }

    return 0;
}*/
//4.soru

#include <stdio.h>
#include <string.h>

int main()
{
    char *ptr;
    int n;
    printf("enter size\n");
    scanf("%d",&n);
    getchar();
    ptr=(char *)malloc(n*sizeof(char));
    char harfler[26] = {0};
    int len, i, j;

    printf("enter text\n");
    gets(ptr);

    len = strlen(ptr);


    for (i = 0; i < len; i++) {
        if (*(ptr+i) >= 'a' && *(ptr+i) <= 'z') {
            harfler[*(ptr+i) - 'a']++;
        }
    }


    for (i = 0; i < 26; i++) {
        if (harfler[i] > 0) {
            printf("%c den %d tane var\n", i + 'a', harfler[i]);
        }
    }

    return 0;
}
