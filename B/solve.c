#include <stdio.h>

int main() {
    int n, i;
    int x[2], y[2], a, b;
    int isStright = 0;
    scanf("%d", &n);
    
    for (i = 0; i < 2; i++) {
        scanf("%d %d", x + i, y + i);
    }
    
    if (x[0] == x[1]) {
        isStright = 1;
    }

    for (int i = 2; i < n; i++) {
        scanf("%d %d", &a, &b);

        if (isStright) {
            if (a != x[0]) {
                puts("SuanLeBa");
                return 0;
            }
        } else {
            if ( (y[1] - y[0]) * (a - x[0]) != (x[1] - x[0]) * (b - y[0]) ) {
                puts("SuanLeBa");
                return 0;
            }
        }
    }

    puts("Mai!MaiDaKuaiDe");
    return 0; 
}
