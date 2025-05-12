#include <stdio.h>
#include <string.h>

int main() {
    char subject[5][16] = {0};

    for (int i = 0; i < 5; i++) {
        scanf("%s", subject[i]);
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 5; j++) {
            if (subject[j][i] != '\0') {
                printf("%c", subject[j][i]);
            }
        }
    }
    return 0;
}