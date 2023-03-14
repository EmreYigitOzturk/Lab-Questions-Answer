

/* 1 .soru cevap:
    8 5 19
    6 5 13
    4 5 9
    2 5 7
    0 5 7  */

/* 3.sorunun cevap:
    32*/
// 4.sonun cevap : 21
// 5. sorunun cevap : C
// 6. sonunun cevap : 7654321
// 7 .sorunun cevap : 11001
// 8 .sorunun cevap : E
// 9 .sorunun cevap : aaaaaa A þýkký





#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void func(int dizi[],int n)
{
    if(n < 0)
        return;
    else
    {
        if(dizi[n]%2==1)
        {
            printf("%d\n",dizi[n]);
        }
        func(dizi,n-1);
    }

}





int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    int array[n];
    srand(time(NULL));
    for(int i =0;i<n;i++)
    {
        array[i]=rand()%10;
    }
    for(int i =0;i<n;i++)
    {
        printf("%d\n",array[i]);
    }
    printf("\n\n");
    func(array,n-1);



    return 0;
}

