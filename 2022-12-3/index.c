#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);

    if (m >= 50) {
        if (m >= 60) {
            if (m <= 69) {
                printf("C");
            } else {
                if (m <= 79) {
                    printf("B");
                } else {
                    printf("A");
                }
            }
        } else {
            printf("D");
        }
    } else {
        printf("F");
    }

    return 0;
}
