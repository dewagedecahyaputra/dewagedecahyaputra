#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[100], b[100];
    
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0'; 
    
    int lenA = strlen(a);
    int lenB = strlen(b);
    
    if (lenA != lenB) {
        printf("BERBEDA\n");
    } 
    else {
        if (strcmp(a, b) == 0) {
            printf("IDENTIK\n");
        } 
        else {
            printf("MIRIP\n");
        }
    }
    return 0;
}