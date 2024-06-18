#include <stdio.h>
#include <string.h>
#include <math.h>
// Ex 2
int main() {
    char binary[17];  
    int decimal = 0;
    int soam = 0;
    int length;
    scanf("%16s", binary);  
    length = strlen(binary);
    if (binary[0] == '1') {
        soam = 1;
    }
    for (int i = 1; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }
    if (soam) {
        decimal = decimal - pow(2, length - 1);
    }
    printf("%d\n", decimal);
    return 0;
}

