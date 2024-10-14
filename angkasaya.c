#include <stdio.h>

int main() {
    // Deklarasi variable
    int num;
    // Input
    scanf("%d", &num);
    // Hitung panjang angka
    int length = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        length++;
    }
    int sum = 0;
    
    // Yang posisi genap dijumlahkan kalau length genap
    if (length % 2==0){
        int i = 1;
        while (num!=0){
            if (i%2!=0){
                sum += num%10;
            }
            i++;
            num /= 10;
        }
    }
    else{
        int i = 1;
        while (num!=0){
            if (i%2==0){
                sum += num%10;
            }
            i++;
            num /= 10;
        }
    }
    // output
    printf("%d\n", sum);
    }




