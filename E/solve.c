#include <stdio.h>

int main()
{
    int n, Min = 101;
    scanf("%d", &n);

    for (int i4 = 0; i4 * 64 <= 100; i4++) {
        for (int i3 = 0; i3 * 27 <= 100; i3++) {
            for (int i2 = 0; i2 * 8 <= 100; i2++) {
                for (int i1 = 0; i1 <= 100; i1++) {
                    if (i1 + i2 * 8 + i3 * 27 + i4 * 64 == n) {
                        if (Min > i1 + i2 + i3 + i4) {
                            Min = i1 + i2 + i3 + i4;
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", Min);
    return 0;
}
