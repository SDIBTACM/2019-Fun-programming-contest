# 马老板的股票

## Description
马老板是这个星球最富有的人，马老板拥有常人无法想象的财产。

马老板表示他对钱不感兴趣，他只对花钱感兴趣，但是他想看一看他到底能赚多少钱。马老板便买了很多股票，价值 n 万元。马老板的股票有一个奇怪的规律：每 t1 天，股票价值就会翻倍，每 t2 天便会亏损 k 万元（如果当天同时出现翻倍和亏损，则先翻倍后亏损）。懒惰的马老板高薪聘请了您，请帮他计算 m 天后，他的股票价值多少万元。如果您不能准确的计算出结果，马老板便会辞退您！

## Input
五个整数 n, t1, t2, k, m  (0 < n, k < 100; 2 < t1, t2, m < 30)

## Output
一个整数，代表 m 天后股票的价值。

## Sample Input
    10 2 4 2 4

## Sample Output
    38

## Hint
注意股票价值不应为负。