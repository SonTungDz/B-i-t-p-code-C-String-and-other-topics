#include <stdio.h>

int main() {
    int N, tangdan = 1;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", tangdan);
            tangdan++;
        }
        printf("\n");  
}
    return 0;
}

