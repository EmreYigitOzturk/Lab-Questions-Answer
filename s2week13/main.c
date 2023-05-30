#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int ogrenciNo;
    char bolum[50];
    char isim[50];
} Ogrenci;

void dosyaOlustur(const char* dosyaAdi) {
    FILE* dosya = fopen(dosyaAdi, "w+");
    if (dosya == NULL) {
        printf("Dosya olusturma hatasi!\n");
        return;
    }
    fclose(dosya);
    printf("Dosya olusturuldu: %s\n", dosyaAdi);
}

void kayitEkle(const char* dosyaAdi) {
    Ogrenci ogrenci;

    printf("Ogrenci No: ");
    scanf("%d", &ogrenci.ogrenciNo);
    printf("Bolum: ");
    scanf("%s", ogrenci.bolum);
    printf("Isim: ");
    scanf("%s", ogrenci.isim);

    FILE* dosya = fopen(dosyaAdi, "a+");
    if (dosya == NULL) {
        printf("Dosya acma hatasi!\n");
        return;
    }
    fwrite(&ogrenci, sizeof(Ogrenci), 1, dosya);
    fclose(dosya);

    printf("Kayit eklendi.\n");
}

void ogrenciAra(const char* dosyaAdi) {
    int hedefNo;

    printf("Aranacak Ogrenci No: ");
    scanf("%d", &hedefNo);

    FILE* dosya = fopen(dosyaAdi, "r+");
    if (dosya == NULL) {
        printf("Dosya acma hatasi!\n");
        return;
    }

    Ogrenci ogrenci;
    int bulundu = 0;
    while (fread(&ogrenci, sizeof(Ogrenci), 1, dosya)) {
        if (ogrenci.ogrenciNo == hedefNo) {
            printf("Ogrenci Bulundu:\n");
            printf("Ogrenci No: %d\n", ogrenci.ogrenciNo);
            printf("Bolum: %s\n", ogrenci.bolum);
            printf("Isim: %s\n", ogrenci.isim);
            bulundu = 1;
            break;
        }
    }

    if (!bulundu) {
        printf("Ogrenci bulunamadi.\n");
    }

    fclose(dosya);
}
void tumOgrencileriListele(const char* dosyaAdi) {
    FILE* dosya = fopen(dosyaAdi, "r+");
    if (dosya == NULL) {
        printf("Dosya acma hatasi!\n");
        return;
    }

    Ogrenci ogrenci;
    printf("Tum Ogrenciler:\n");
    while (fread(&ogrenci, sizeof(Ogrenci), 1, dosya)) {
        printf("Ogrenci No: %d\n", ogrenci.ogrenciNo);
        printf("Bolum: %s\n", ogrenci.bolum);
        printf("Isim: %s\n", ogrenci.isim);
        printf("-------------------------\n");
    }

    fclose(dosya);
}


int main() {
    char dosyaAdi[] = "ogrenciler.dat";
    int secim;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Dosya Olustur\n");
        printf("2. Kayit Ekle\n");
        printf("3. Ogrenci Ara\n");
        printf("4. Tum Ogrencileri Listele\n");
        printf("5. Cikis\n");
        printf("Seciminizi yapin: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                dosyaOlustur(dosyaAdi);
                break;
            case 2:
                kayitEkle(dosyaAdi);
                break;
            case 3:
                ogrenciAra(dosyaAdi);
                break;
            case 4:
                tumOgrencileriListele(dosyaAdi);
                break;
            case 5:
                printf("Programdan cikiliyor...\n");
                exit(0);
            default:
                printf("Gecersiz secim!\n");
                break;
        }
    }

    return 0;
}


