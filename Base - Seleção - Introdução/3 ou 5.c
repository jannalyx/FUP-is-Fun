#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 3 || num == 5) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
    return 0;
}