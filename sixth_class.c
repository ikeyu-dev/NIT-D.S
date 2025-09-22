#include <stdio.h>
#include <string.h>
#include <unistd.h>
// やってみよう 1つめ
// int main()
// {
//     int num;
//     int i = 1;
//     printf("整数を入力してください：\n");
//     scanf("%d", &num);

//     while (i < num)
//     {
//         if (i % 3 == 0)
//         {
//             printf("%d\n", i);
//         }
//         i++;
//     }
//     return 0;
// }

// やってみよう 2つめ
// int main(void)
// {
//     int i; // 2のべき乗を格納する変数
//     int num;
//     printf("正の整数を入力してください：");
//     scanf("%d", &num);

//     i = 1; // 初期値は1
//     while (i <= num)
//     {
//         printf("%d\n", i);
//         i *= 2;
//     }
//     printf("\n");

//     return 0;
// }

// やってみよう 3つめ
// int main(void)
// {
//     int n, len, temp;
//     int i = 0;
//     printf("正の整数を入力してください：");
//     scanf("%d", &n);
//     temp = n;
//     len = temp;
//     while (len > 0)
//     {
//         len /= 10;
//         i++;
//     }
//     printf("%dの桁数は%dです。\n", n, i);
//     return 0;
// }

// 課題1
// int main(void)
// {
//     int n;
//     int i;

//     printf("n: ");
//     scanf("%d", &n);

//     i = n;
//     while (i >= 1)
//     {
//         if (i % 3 == 0)
//         {
//             printf("%d\n", i);
//         }
//         i--;
//     }
//     printf("\n");

//     return 0;
// }

// 課題2
// int main(void)
// {
//     int i;   // while文の繰り返し使う変数
//     int n;   // nの値を代入する変数
//     int ans; // nの階乗の計算結果（計算途中の結果）を格納する変数

//     printf("n: ");
//     scanf("%d", &n);

//     i = 1; // 変数iを初期化しましょう
//     ans = 1;
//     while (i <= n)
//     {

//         ans *= i;
//         i++;
//     }
//     printf("%dの階乗は%dです。\n", n, ans);

//     return 0;
// }

// 課題3
// int main(void)
// {
//     int n, ans;

//     n = 1;
//     ans = 0;
//     while (n <= 10)
//     {
//         ans = 3 * n + 7;
//         printf("第%d項：%d\n", n, ans);
//         n++;
//     }

//     return 0;
// }

// 課題4
// int main(void)
// {
//     int i = 1;
//     while (i <= 50)
//     {
//         if (i % 3 == 0 || i % 5 == 0)
//         {

//             printf("%d\n", i);
//         }
//         i++;
//     }
//     return 0;
// }

// 挑戦課題1
/*
【挑戦課題1】

(1)～(5)を埋め，2つのボールAとBが衝突するとストップするアニメーションが表示される
以下のプログラムを完成させましょう．
以下のプログラムでは，ボールAを記号‘o’，Bを記号 ‘x’ で表しています．

以下のURLから動作例を見ることができます。

https://web.microsoftstream.com/video/607d36df-53d0-4aaf-9f21-9e73bc51772c

*/

// int main(void)
// {
//     int i;
//     int ball_a, ball_b;  // ボール A,B の位置
//     int step_a = 1;      // ボール A の移動速度 (右方向)
//     int step_b = -1;     // ボール B の移動速度 (左方向)
//     int plate_size = 50; // 台の長さ

//     // 初期位置
//     ball_a = 1;              // 左端から１つ右に
//     ball_b = plate_size - 2; // 右端から１つ左に

//     while (ball_a < ball_b) // ボール A と B が衝突するまで繰り返す
//     {
//         for (i = 0; i < plate_size; i++)
//         {
//             if (i == ball_a)
//             {
//                 printf("o");
//             }
//             else if (i == ball_b)
//             {
//                 printf("x");
//             }
//             else
//             {
//                 printf("_");
//             }
//         }
//         // ball_a　と ball_b の位置を更新
//         ball_a += step_a; // ボール A を右に移動
//         ball_b += step_b; // ボール B を左に移動

//         printf("\n");
//         usleep(0.2 * 1000000);    // 0.2 (200ミリ) 秒間隔で更新
//         printf("\033[1A\033[2K"); // 1 行クリア (Windowsのみ使用可能)
//                                   // Macの人は printf("\033[1A\033[2K");
//     }

//     usleep(1000); // 1 (1000ミリ) 秒スリープ　Macの人はsleep(1);
//     printf("END\n");
//     usleep(1000); // 1 (1000ミリ) 秒スリープ　Macの人はsleep(1);

//     return 0;
// }

// 挑戦課題2
/*
【挑戦課題2】

挑戦課題1で作成したプログラムを，ボールAとBが衝突した後，
2つのボールが跳ね返ってAが左端に，Bが右端に到達したら終了するように
プログラムを書き換えましょう．新しく変数を追加してはいけません．
ボールAとボールBの移動速度を上手く変更しましょう.

動作例は以下のURLにて確認できます．
https://web.microsoftstream.com/video/905dbece-5a83-4c5e-8d2b-f1a18f40f492
*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    int ball_a, ball_b;  // ボール A,B の位置
    int step_a = 1;      // ボール A の移動速度 (右方向)
    int step_b = -1;     // ボール B の移動速度 (左方向)
    int plate_size = 50; // 台の長さ

    // 初期位置
    ball_a = 1;              // 左端から１つ右に
    ball_b = plate_size - 2; // 右端から１つ左に

    while (step_a != step_b)
    {
        for (i = 0; i < plate_size; i++)
        {
            if (i == ball_a)
            {
                printf("o");
            }
            else if (i == ball_b)
            {
                printf("x");
            }
            else
            {
                printf("_");
            }
        }
        // ball_a　と ball_b の位置を更新
        if (ball_a == ball_b - 1)
        {
            step_a = -1;
            step_b = 1;
        }
        ball_a += step_a;
        ball_b += step_b;

        printf("\n");
        usleep(0.2 * 1000000);    // 0.2 (200ミリ) 秒間隔で更新
        printf("\033[1A\033[2K"); // 1 行クリア

        if (ball_a < 0)
        {
            break;
        }
    }

    sleep(1); // 1 (1000ミリ) 秒スリープ　Macの人はsleep(1);
    printf("END\n");
    sleep(1); // 1 (1000ミリ) 秒スリープ　Macの人はsleep(1);

    return 0;
}