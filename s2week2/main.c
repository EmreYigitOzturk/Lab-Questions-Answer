/*#include <stdio.h>
#include <stdlib.h>

int sum(int n)
{
    if(n == 1)
        return 1;
    else
        return n+sum(n-1);
}

int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    printf("sum=%d",sum(n));
    return 0;
}*/


//2.SORUNUN CEVABI
#include <stdio.h>
#include <stdlib.h>
int dizi[100];
int sayac=1,max;
int big(int i)
{
    if(sayac==1)
        max=dizi[i];
    sayac++;
    if(dizi[i]>max)
        max=dizi[i];
    if(i>0)
        return big(i-1);
    else
    {
        return max;
    }
}

int main()
{

    int i,n;
    printf("enter of array size\n");
    scanf("%d",&i);
    dizi[i];
    for(int c=0;c<i;c++)
    {
        printf("enter number\n");
        scanf("%d",&n);
        dizi[c]=n;
    }
    i--;

    printf("the biggest number of array = %d",big(i));


    return 0;
}

//3.SORUNUN CEVABI
/*#include <stdio.h>
#include <stdlib.h>

int func(int n)
{
    static int sum=0;
    int c;
    c=n%10;
    n=n/10;
    sum+=c;
    if(n == 0)
        return sum;
    else
        return func(n);
}

int main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    printf("%d",func(n));

    return 0;
}*/
//4.SORUNUN CEVABI
/*#include <stdio.h>
#include <stdlib.h>

int n,m,x;
int bolen(int n,int m)
{
    if(x%n==0 && m%n==0)
        return n;
    else
    {
       return bolen(n-1,m);
    }
}
int main()
{

    printf("enter 2  number\n");
    scanf("%d%d",&n,&m);
    x=n;
    printf("obeb=%d",bolen(n,m));
    return 0;
}*/


