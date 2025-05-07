#include <stdio.h>
#include <stdlib.h>

// やってみよう (1)
int yattemiyou_one(void)
{
    int x, y;

    printf("2つの整数を入力してください。\n");
    printf("整数x: ");
    scanf("%d", &x);
    printf("整数y: ");
    scanf("%d", &y);
    printf("それらの和は%dで積は%dです。\n", x + y, x * y);

    printf("2つの整数を入力してください。\n");
    printf("整数x: ");
    scanf("%d", &x);
    printf("整数y: ");
    scanf("%d", &y);

    printf("xの値はyの%d%%です。\n", x * 100 / y);

    return 0;
}

// やってみよう (2)
int yattemiyou_two(void)
{
    double x, y;

    printf("実数を入力してください。\n");
    scanf("%lf", &x);

    printf("入力するされた実数は%fです。\n", x);

    int n, m;

    printf("2つの整数を入力してください。\n");
    printf("整数n: ");
    scanf("%d", &n);
    printf("整数m: ");
    scanf("%d", &m);
    printf("nの値はmの%f%%です。\n", (double)(n * 100 / m));

    return 0;
}

// やってみよう (3)
int yattemiyou_three(void)
{
    int t;

    printf("身長を入力してください。\n");
    printf("身長: ");
    scanf("%d", &t);
    printf("あなたの標準体重は%.1fkgです。\n", (double)(t - 100) * 0.9);

    double r;

    printf("円の半径");
    scanf("%lf", &r);
    printf("円の面積は%.4fです。\n", 3.141592 * r * r);
    return 0;
}