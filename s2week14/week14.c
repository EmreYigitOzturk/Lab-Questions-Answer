/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int decimal;
    printf("10'luk sistemde bir sayý girin: ");
    scanf("%d", &decimal);

    printf("2'lik sistemde karþýlýðý: ");
    if (decimal == 0) {
        printf("0");
    } else {
        int binary[32];
        int i = 0;
        while (decimal > 0) {
            binary[i] = decimal % 2;
            decimal = decimal / 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }

    return 0;
}*/

//2.soru

/*#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    unsigned int mask = 1;

    while (mask != 0) {
        if ((num & mask) != 0) {
            count++;
        }
        mask <<= 1;
    }

    return count;
}

int main() {
    int number;
    printf("Bir sayi girin: ");
    scanf("%d", &number);

    int setBits = countSetBits(number);
    printf("Sayidaki 1 olan bit sayisi: %d\n", setBits);

    return 0;
}*/

//3.soru

/*#include <stdio.h>

int main() {
    unsigned int a = 60;
    unsigned int b = 13;


    unsigned int c=0;

    c = a & b;
    printf("a & b = %u\n", c);

    c = a | b;
    printf("a | b = %u\n", c);

    c = a ^ b;
    printf("a ^ b = %u\n", c);

    c = ~a;
    printf("~a = %u\n", c);

    c = a << 2;
    printf("a << 2 = %u\n", c);

    c = a >> 2;
    printf("a >> 2 = %u\n", c);

    return 0;
}*/

//4.soru

/*#include <stdio.h>

void printBinary(unsigned int num) {
    if (num > 1) {
        printBinary(num >> 1);
    }
    printf("%d", num & 1);
}

int main() {
    // 125 >> 2
    unsigned int result1 = 125 >> 2;
    printf("125 >> 2 = %u (Binary: ", result1);
    printBinary(result1);
    printf(")\n");

    // 5 | 12
    unsigned int result2 = 5 | 12;
    printf("5 | 12 = %u\n", result2);

    // 5 & 12
    unsigned int result3 = 5 & 12;
    printf("5 & 12 = %u\n", result3);

    // 5 ^ 12
    unsigned int result4 = 5 ^ 12;
    printf("5 ^ 12 = %u\n", result4);

    return 0;
}*/

//5.soru

#include <stdio.h>

int main(void)
{
    unsigned int x=5,y=1,sum,carry;
    sum = x^y;
    printf("%d\n",sum);
    carry = x & y;
    printf("%d\n",carry);
    while(carry!=0)
    {
        carry = carry << 1;
        x = sum;
        y = carry;
        sum = x ^y;
        carry = x & y;
    }
    printf("%d",sum);
    return 0;
}*/



