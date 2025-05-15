#include <stdio.h>
#include <stdlib.h>

// やってみよう 1つめ
// int main(void)
// {
//     int age;
//     printf("年齢を入力してください:");
//     scanf("%d", &age);
//     if (age < 18)
//     {
//         printf("まだ未成年です。\n");
//     }
//     return 0;
// }

// やってみよう 2つめ
// int main(void)
// {
//     int no;
//     printf("整数を入力してください: ");
//     scanf("%d", &no);
//     if (num % 4 == 0)
//     {
//         printf("4の倍数\n");
//     }
//     {
//         printf("4の倍数ではない\n");
//     }
//     return 0;
// }

// やってみよう 3つめ
// int main(void)
// {
//     int point;
//     printf("点数を入力してください: ");
//     scanf("%d", &point);
//     if (point < 60)
//     {
//         printf("不合格です.\n");
//     }
//     else if (point <= 60)
//     {
//         printf("合格です。\n");
//     }
//     return 0;
// }

// やってみよう 4つめ
// int main(void)
// {
//     double h, w;
//     printf("身長[cm]:");
//     scanf("%lf", &h);
//     printf("体重[kg]:");
//     scanf("%lf", &w);
//     if (w < (h - 105.0) * 0.82)
//     {
//         printf("SLIM\n");
//     }
//     else if (w > (h - 105.0) * 0.82)
//     {
//         printf("FAT\n");
//     }
//     else
//     {
//         printf("NORMAL\n");
//     }
//     return 0;
// }

// 課題1
// int main()
// {
//     int x, y; // 整数値を入力する変数の宣言

//     printf("整数を2つ入力してください.\n");
//     printf("x:");
//     scanf("%d", &x);
//     printf("y:");
//     scanf("%d", &y);

//     if (x % y == 0)
//     {
//         printf("%dは%dの約数です.\n", y, x);
//     }
//     else
//     {
//         printf("%dは%dの約数ではありません.\n", y, x);
//     }
//     return 0;
// }

// 課題2
// int main()
// {
//     double a, b, c; // 二次方程式の係数を格納
//     double D;       // 判別式の値

//     printf("y = ax ^ 2 + bx + cの解の個数を求めます.\n");
//     printf("a：");
//     scanf("%lf", &a);
//     printf("b：");
//     scanf("%lf", &b);
//     printf("c：");
//     scanf("%lf", &c);

//     D = b * b - 4 * a * c; // 判別式の計算

//     if (D > 0)
//     {
//         printf("2個です.\n");
//     }
//     else if (D == 0)
//     {
//         printf("1個です.\n");
//     }
//     else
//     {
//         printf("0個です.\n");
//     }

//     return 0;
// }

// 課題3
int main(void)
{
    int x;
    int sa; // |x − 8| の計算結果を代入
    int wa; // |x + 5| の計算結果を代入

    printf("|x-8|+|x+5|を計算します．\n");
    printf("x: ");
    scanf("%d", &x);

    if (x - 8 < 0)
    {
        sa = -(x - 8);
    }
    else
    {
        sa = x - 8;
    }
    if (x + 5 < 0)
    {
        wa = -(x + 5);
    }
    else
    {
        wa = x + 5;
    }

    printf("|x-8|+|x+5|=%d\n", sa + wa);

    return 0;
}

// 課題4
// int main(void)
// {
//     int year; // 西暦を格納

//     printf("西暦は?：");
//     scanf("%d", &year);

//     if (year % 400 == 0)
//     {
//         printf("閏年です。\n");
//     }
//     else if (year % 4 == 0 && year % 100 != 0)
//     {
//         printf("閏年です。\n");
//     }
//     else
//     {
//         printf("閏年ではありません。\n");
//     }

//     return 0;
// }