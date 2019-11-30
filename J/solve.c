#include <stdio.h>

int main() {
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);

    for (int i = 0; i < 2; i++) {
        int k = i;
        
        for (int j = i + 1; j < 3; j++) {
            if (a[k] > a[j]) k = j;
        }
        int t = a[k];
        a[k] = a[i];
        a[i] = t;
    }

    if (a[2] <= a[0] + a[1] + 1) {
        printf("%d\n", a[0] + a[1] + a[2]);
    } else {
        printf("%d\n", (a[0] + a[1]) * 2 + 1);
    }

    return 0;
}
