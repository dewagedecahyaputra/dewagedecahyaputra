#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int prima(int n) {
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {    
    int angka;
    scanf("%d", &angka);
    if (prima(angka)) {
        printf("PRIMA");
    } 
    else {
        printf("BUKAN");
    }
    return 0;
}