/*#include <stdio.h>
#include <stdlib.h>

int hesapla(int sayi)
{
    int dizi[100];
    int i,x,sum=0,kalan=0;
    for(i=1;i<=sayi;i++)
    {
        printf("%d.ogrenci notunu giriniz\n",i);
        scanf("%d",&x);
        dizi[i-1]=x;
        sum+=x;
    }
    printf("sinif ortalamasi = %d\n",(sum/sayi));
    for(i=0;i!=sayi;i++)
    {
        if(dizi[i]<50)
        {
            kalan+=1;
        }
    }
    return kalan;
}
int main()
{
    int osayi,a;
    printf("ogrenci sayisini giriniz\n");
    scanf("%d",&osayi);
    a=hesapla(osayi);
    printf("kalan ogrenci sayisi = %d",a);

    return 0;
} */
//2. soru aþþagýdan devam edecek.

#include <stdio.h>
#include <stdlib.h>

int kitleindex(float boy,int kilo)
{
    int index,r;
    index =(kilo/(boy*boy));
    if(index<=18)
    {
        r=1;
    }
    else if(index>=19 && index<=25)
    {
        r=2;
    }
    else if(index>=26 && index<=30)
    {
        r=3;
    }
    else if(index>30)
    {
        r=4;
    }
    return r;
}
int main()
{
    float boy;
    int kilo,a;
    printf("lutfen boyunuzun uzunlugunu giriniz\n");
    scanf("%f",&boy);
    printf("lutfen kilonuzu giriniz\n");
    scanf("%d",&kilo);
    a = kitleindex(boy,kilo);
    switch(a)
    {
        case 1 : printf("zayif");
        break;

        case 2 : printf("Normal");
        break;

        case 3 : printf("Kilolu");
        break;

        case 4 : printf("Obez");
        break;
    }


    return 0;
}
