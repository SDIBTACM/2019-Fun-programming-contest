#include<stdio.h>

int main() {
    int n, T1, T2, k, m;
    int i;

    scanf("%d %d %d %d %d", &n, &T1, &T2, &k, &m);

    for (i = 1; i <= m && n > 0; i++) {
        if (i % T1 == 0) {
            n += n;
        }
        if (i % T2 == 0) {
            n -= k;
        }
    }
    
    printf("%d\n", n > 0 ? n : 0);
    return 0;
}
