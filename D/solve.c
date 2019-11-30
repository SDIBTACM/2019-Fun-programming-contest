#include<stdio.h>

int main() {
    int T, a, b, c, sum=0;
    scanf("%d", &T);

    while(T--) {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c >= 2) sum++;
    }
    
    printf("%d\n", sum);
    return 0;
}
