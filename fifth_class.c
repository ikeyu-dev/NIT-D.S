#include <stdbool.h>
#include <stdio.h>
// やってみよう1
int main(void)
{
    int n1, n2, n3;
    int min;

    puts("3つの整数を入力してください。\n ");
    printf("整数n1: ");
    scanf("%d", &n1);
    printf("整数n2: ");
    scanf("%d", &n2);
    printf("整数n3: ");
    scanf("%d", &n3);

    min = n1 < n2 ? n1 : n2;
    min = min < n3 ? min : n3;
    printf("最小値は%dです。\n", min);
}

// やってみよう2
int main(void)
{
    int year;
    char era;
    puts("西暦年を入力してください。");
    printf("西暦年: ");
    scanf("%d", &year);
    if (1868 <= year && year <= 1912)
        era = "明治";
    else if (1913 <= year && year <= 1926)
        era = "大正";
    else if (1927 <= year && year <= 1989)
        era = "昭和";
    else if (1990 <= year && year <= 2018)
        era = "平成";
    else if (2019 <= year && year <= 2021)
        era = "令和";
    printf(era);
}

// やってみよう3
int main(void)
{
    int month;
    printf("何月ですか：");
    scanf("%d", &month);

    switch (month)
    {
    case 3:
    case 4:
    case 5:
        printf("春です。\n");
        break;
    case 6:
    case 7:
    case 8:
        printf("夏です。\n");
        break;
    case 9:
    case 10:
    case 11:
        printf("秋です。\n");
        break;
    case 12:
    case 1:
    case 2:
        printf("冬です。\n");
        break;
    }
    return 0;
}

// 課題1
int main(void)
{
    int num;

    printf("整数値を入力：");
    scanf("%d", &num);

    switch (num % 4)
    {
    case 1:
        printf("大吉です。\n");
        break;
    case 2:
        printf("中吉です。\n");
        break;
    case 3:
        printf("小吉です。\n");
        break;
    case 0:
        printf("凶です。\n");
        break;
    }
    return 0;
}

// 課題2
int main(void)
{
    int taro, hanako;
    bool isTaroWin, isHanakoWin;

    printf("太郎くんの手");
    scanf("%d", &taro);
    printf("花子さんの手");
    scanf("%d", &hanako);

    isTaroWin = (taro == 1 && hanako == 2) || (taro == 2 && hanako == 3) || (taro == 3 && hanako == 1);
    if (isTaroWin)
    {
        printf("太郎くんの勝ちです。\n");
    }
    else if (taro == hanako)
    {
        printf("あいこです。\n");
    }
    else
    {
        printf("花子さんの勝ちです。\n");
    }
}

// 課題3
int main(void)
{
    int year;
    bool isLeapYear;

    printf("西暦は?：");
    scanf("%d", &year);

    isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    if (isLeapYear)
    {
        printf("うるう年です。\n");
    }
    else
    {
        printf("うるう年ではありません。\n");
    }

    return 0;
}