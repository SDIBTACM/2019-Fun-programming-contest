#include<stdio.h>

int main()
{
    int n, a1;
    scanf("%d", &n);
    
    a1 = 9 - n;
    if(a1) printf("%d", a1);

    printf("9%d\n", n);
    return 0;
}
