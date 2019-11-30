#include <stdio.h>

int main()
{
    int a, b, c, max_day = 0, week = 0;
    scanf("%d%d%d", &a, &b, &c);

    week = a / 3; //能吃几个星期
    if (week > b / 2) week = b / 2;
    if (week > c / 2) week = c / 2;

    a -= week * 3; //相应的食物还剩多少
    b -= week * 2;
    c -= week * 2;

    for (int i = 0; i < 7; i++) {   //从星期一到星期天,依次看一看剩下的食物能吃多少天
        int aa = a, bb = b, cc = c, day = 0;
        int j = i;

        while (1) {
            if (aa < 0 || bb < 0 || cc < 0) break;
            
            if (j == 1 || j == 4 || j == 0) {
                aa--;
                day++;
            } else if (j == 2 || j == 6) {
                bb--;
                day++;
            } else if (j == 3 || j == 5) {
                cc--;
                day++;
            }

            j++;
            if (j == 7) j = 0;
        }

        if (max_day < day - 1) max_day = day - 1;   //保存最多的天数
    }

    printf("%d\n", week * 7 + max_day);
    return 0;
}
