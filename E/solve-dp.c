#include <stdio.h>

int min(int a, int b) {
    if (a < b) return a;
    return b;
}

int main() {
    int dp[105], n, size[4] = { 1, 8, 27, 64 };

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        dp[i] = 999;
    }

    dp[0] = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = size[i]; j <= n; j++) {
            dp[j] = min(dp[j], dp[j - size[i]] + 1);
        }
    }

    printf("%d\n", dp[n]);
    return 0;
}
