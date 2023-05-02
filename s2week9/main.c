#include <stdio.h>
#include <stdlib.h>

struct n {
    double num;
    char name[20];
    int vize;
    int fin;
    struct n *next;
};
typedef struct n node;

void ekle(node *r)
{
    while(r->next!= NULL)
    {
        r = r->next;
    }
    r->next = (node*)malloc(sizeof(node));
    r = r->next;
    printf("enter student number \n");
    scanf("%lf",&r->num);
    printf("enter student name \n");
    scanf("%s",r->name);
    printf("enter midterm result \n");
    scanf("%d",&r->vize);
    printf("enter final result \n");
    scanf("%d",&r->fin);
    r->next=NULL;

}

void goster(node *r)
{
    int i=1;
    while(r!=NULL)
    {
        printf("***%d. ci kayit***\n",i);
        printf("num=%lf\n",r->num);
        printf("name=%s\n",r->name);
        printf("midterm result=%d\n",r->vize);
        printf("final result=%d\n",r->fin);
        i++;
        r=r->next;
    }
}
void ortalama(node *r, int n)
{
    node *itr = r;
    int sum1 = 0, sum2 = 0, counter = 0;
    float ort = 0.4 * r->vize + 0.6 * r->fin;
    float big = ort;

    while (itr != NULL) {
        counter++;
        itr = itr->next;
    }

    itr = r;
    while (itr != NULL) {
        float ort = 0.4 * itr->vize + 0.6 * itr->fin;
        if (big < ort)
            big = ort;
        sum1 += itr->vize;
        sum2 += itr->fin;
        itr = itr->next;
    }

    float ortvize = (float) sum1 / counter;
    float ortfinal = (float) sum2 / counter;
    printf("vize ort = %.2f ve final ort = %.2f\n", ortvize, ortfinal);

    itr = r;
    while (itr != NULL) {
        float ort = 0.4 * itr->vize + 0.6 * itr->fin;
        if (big == ort)
            printf("en basarili ogrenci = %s\n", itr->name);
        itr = itr->next;
    }
}


void guncelle(node *r)
{
    int n;
    printf("hangi kaydi guncellemek istiyorsunuz\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
        r=r->next;
    printf("enter student number \n");
    scanf("%lf",&r->num);
    printf("enter student name \n");
    scanf("%s",r->name);
    printf("enter midterm result \n");
    scanf("%d",&r->vize);
    printf("enter final result \n");
    scanf("%d",&r->fin);

}
int main()
{
    int n,x,i=0;
    node *root;
    root = (node*)malloc(sizeof(node));

    while(1)
    {
        printf("ANA MENU\n");
        printf("1-Yeni Kayit Ekleme\n");
        printf("2-Kayit listeleme\n");
        printf("3-Kayit guncelleme\n");
        printf("4-Sinif ortalamasi hesapla\n");
        printf("5-Ortalamaya gore en basarili\n");
        printf("6-Cikis\n");
        scanf("%d",&x);
        if(x==1)
        {
            if(i==0)
            {
                printf("enter student number \n");
                scanf("%lf",&root->num);
                printf("enter student name \n");
                scanf("%s",root->name);
                printf("enter midterm result \n");
                scanf("%d",&root->vize);
                printf("enter final result \n");
                scanf("%d",&root->fin);
                root->next=NULL;
                i++;
            }
            else
                ekle(root);

        }
        else if(x==2)
        {
            goster(root);
        }
        else if(x==3)
        {
            guncelle(root);
        }
        else if(x==4)
        {
           ortalama(root,n);
        }
        else if(x==5)
        {
            ortalama(root,n);
        }
        else if(x==6)
            break;

    }




    return 0;
}
