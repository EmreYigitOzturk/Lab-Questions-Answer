#include <stdio.h>
#include <stdlib.h>
int studentno;
char name[20];
char departman[20];

void kayitekle(FILE *myfile)
{

    myfile = fopen("ogrencibilgi.dot","a");
    printf("ogrenci no ,isim ve departman giriniz\n");
    printf("Cikis icin eof tusuna basiniz\n");
    scanf("%d%s%s",&studentno,name,departman);

    while(!feof(stdin))
    {
        fprintf(myfile,"%d %s %s\n",studentno,name,departman);
        printf("? ");
        scanf("%d%s%s",&studentno,name,departman);
    }
    fclose(myfile);
}

void listele(FILE *myfile)
{

    myfile = fopen("ogrencibilgi.dot","r");
    printf("%-10s%-13s%-13s\n","studentno","name","departman");
    fscanf(myfile,"%d%s%s",&studentno,name,departman);

    while(!feof(myfile))
    {
        printf("%-10d%-13s%-13s\n",studentno,name,departman);
        fscanf(myfile,"%d%s%s",&studentno,name,departman);
    }
    fclose(myfile);
}
void araVeYazdir(FILE *myfile)
{
    char searchName[20];
    printf("Aranacak ismi giriniz: ");
    scanf("%s", searchName);

    myfile = fopen("ogrencibilgi.dot", "r");
    fscanf(myfile, "%d%s%s", &studentno, name, departman);

    while (!feof(myfile))
    {
        if (strcmp(name, searchName) == 0)
        {
            printf("%-10d%-13s%-13s\n", studentno, name, departman);
        }
        fscanf(myfile, "%d%s%s", &studentno, name, departman);
    }
    fclose(myfile);
}


int main()
{

    int n;
    FILE *myfile = NULL;
    while(1)
    {
        printf("1-Dosya Olustur\n2-Kayit Ekle\n3-isime gore ara ve bilgileri yazdýr\n4-ogrencileri listele\n5-Cikis\n");
    scanf("%d",&n);
    if(n == 1)
    {

        if((myfile = fopen("ogrencibilgi.dot","a+")==NULL))
            printf("dosya olusturulamadi\n");
        else
            printf("dosya olusturuldu\n");
    }

    else if(n == 2)
        kayitekle(myfile);
    else if(n == 3)
        araVeYazdir(myfile);
    else if(n == 4)
    {
        listele(myfile);
    }

    else if(n == 5)
        break;
    }

    return 0;
}


