#include <stdio.h>

char A[200050];
int n, sum;
int power10[9];

int log10int(int n) {
    int k = -1;
    while (n) {
        n /= 10;
        k++;
    }
    return k;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int printAndCalc(int n) { //输出每一位相加
    int ans = 0;
    for (int i = 8; i > 0; i--) {
        if ((n / power10[i])) {
            printf("%d+", (n / power10[i]) % 10);
            ans += (n / power10[i]) % 10;
        }
    }

    printf("%d\n", n % 10), ans += n % 10;
    return ans;
}

int main() {
    power10[0] = 1;

    for (int i = 1; i < 9; i++) {
        power10[i] = power10[i - 1] * 10;
    }

    scanf("%d %s", &n, A + 1);
    for (int i = 1; i <= n; i++) {
        A[i] -= '0';
        sum += A[i];
    }

    if (sum <= 288) {
        for (int i = 1; i < n; i++) {
            printf("%d+", A[i]);
        }
        printf("%d\n", A[n]);

        if (sum == 199) {
            puts("1+99");
            puts("1+0+0");
        } else {
            printAndCalc(printAndCalc(sum));
        }

    } else {
        int X = 0, Y = 0, Z = 0, k = log10int(sum) + 1;
        
        for (int i = 1; i <= n; i += 3) {
            if (i + 2 <= n) {
                X += A[i] * 100 + A[i + 1] * 10 + A[i + 2];
            } else {
                for (int t = n; t >= i; --t) {
                    X += A[t];
                }
                i = n;
            }
        }

        for (int i = 2; i <= n; i += 3) {
            if (i + 2 <= n) {
                Y += A[i] * 100 + A[i + 1] * 10 + A[i + 2];
            } else {
                for (int t = n; t >= i; --t) {
                    Y += A[t];
                }
                i = n;
            }
        }

        for (int i = 3; i <= n; i += 3) {
            if (i + 2 <= n) {
                Z += A[i] * 100 + A[i + 1] * 10 + A[i + 2];
            } else {
                for (int t = n; t >= i; --t) {
                    Z += A[t];
                }
                i = n;
            }
        }
        
        int mx = max(X, max(Y, Z));
        
        if (mx == X) {
            int tmp = sum, i;
            for (i = 1; i <= n; i += 3) {
                if ((tmp + A[i] * 99 + A[i + 1] * 9) / power10[k]) {
                    break;
                } else {
                    printf("%d%d%d+", A[i], A[i + 1], A[i + 2]);
                    tmp += A[i] * 99 + A[i + 1] * 9;
                }
            }

            for (; i <= n; i += 3) {
                if ((tmp + A[i] * 9) / power10[k]) {
                    break;
                } else {
                    printf("%d%d+%d+", A[i], A[i + 1], A[i + 2]);
                    tmp += A[i] * 9;
                }
            }

            tmp += A[i] * 9;
            printf("%d%d+", A[i], A[i + 1]);

            for (int j = i + 2; j < n; j++) {
                printf("%d+", A[j]);
            }
            printf("%d\n", A[n]);

            printAndCalc(printAndCalc(tmp));

        } else if (Y == mx) {
            int tmp = sum, i;
            printf("%d+", A[1]);

            for (i = 2; i <= n; i += 3) {
                if ((tmp + A[i] * 99 + A[i + 1] * 9) / power10[k]) {
                    break;
                } else {
                    printf("%d%d%d+", A[i], A[i + 1], A[i + 2]);
                    tmp += A[i] * 99 + A[i + 1] * 9;
                }
            }

            for (; i <= n; i += 3) {
                if ((tmp + A[i] * 9) / power10[k]) {
                    break;
                } else {
                    printf("%d%d+%d+", A[i], A[i + 1], A[i + 2]);
                    tmp += A[i] * 9;
                }
            }

            tmp += A[i] * 9;
            printf("%d%d+", A[i], A[i + 1]);

            for (int j = i + 2; j < n; j++) {
                printf("%d+", A[j]);
            }
            printf("%d\n", A[n]);

            printAndCalc(printAndCalc(tmp));

        } else if (Z == mx) {
            int tmp = sum, i;
            printf("%d+%d+", A[1], A[2]);

            for (i = 3; i <= n; i += 3) {
                if ((tmp + A[i] * 99 + A[i + 1] * 9) / power10[k]) {
                    break;
                } else {
                    printf("%d%d%d+", A[i], A[i + 1], A[i + 2]);
                    tmp += A[i] * 99 + A[i + 1] * 9;
                }
            }

            for (; i <= n; i += 3) {
                if ((tmp + A[i] * 9) / power10[k]) {
                    break;
                } else {
                    printf("%d%d+%d+", A[i], A[i + 1], A[i + 2]);
                    tmp += A[i] * 9;
                }
            }

            tmp += A[i] * 9;
            printf("%d%d+", A[i], A[i + 1]);

            for (int j = i + 2; j < n; j++) {
                printf("%d+", A[j]);
            }
            printf("%d\n", A[n]);
            
            printAndCalc(printAndCalc(tmp));
        }
    }
    return 0;
}
