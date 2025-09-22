#include <stdio.h>

// int main(void)
// {
//     int a[5];
//     a[0] = 1;
//     a[1] = 2;
//     a[2] = 3;
//     a[3] = 4;
//     a[4] = 5;

//     printf("a[0]の値は%dです．\n", a[0]);
//     printf("a[1]の値は%dです．\n", a[1]);
//     printf("a[2]の値は%dです．\n", a[2]);
//     printf("a[3]の値は%dです．\n", a[3]);
//     printf("a[4]の値は%dです．\n", a[4]);
// }

// int main(void)
// {
//     int i;    // for文に使う変数
//     int data[5]; // 要素数が５の配列を宣言しましょう

//     //  配列Aの先頭から順に 5, 4, 3, 2, 1 を代入するプログラムを作成
//     for (i = 0; i < 5; i++)
//     {
//         data[i] = 5 - i;
//         printf("%d\n", data[i]);
//     }

//     return 0;
// }

// int main(void)
// {
//     int i;
//     int a[5] = {15, 20, 30, 0, 0};
//     int b[5]; // 要素数5の配列bを宣言

//     // 繰り返し文を使って、配列aの要素の並びを逆順にしたものを
//     // 配列bにコピーするプログラムを作成
//     for (i = 0; i < 5; i++)
//     {
//         b[i] = a[4 - i];
//         printf("%d\n", b[i]);
//     }

//     return 0;
// }

// int main(void)
// {
//     int i;       // 繰り返し処理に使う変数
//     int data[5]; // 要素数5の整数型の配列dataを宣言
//     int sum = 0; // 総和を求めるのに使用する変数
//     double ave;  // 平均値を代入する変数

//     // for文とscanf文を用いて配列dataに値を代入するプログラムを作成
//     for (i = 0; i < 5; i++)
//     {
//         printf("data[%d]の値を入力：", i);
//         scanf("%d", &data[i]);
//     }

//     // for文を用いて総和を求めるプログラムを作成
//     for (i = 0; i < 5; i++)
//     {
//         sum += data[i];
//     }

//     // 平均値を計算するプログラムを作成
//     for (i = 0; i < 5; i++)
//     {
//         ave = (double)sum / 5; // 平均値を計算
//     }

//     printf("平均値：%f\n", ave);

//     return 0;
// }

// int main(void)
// {
//     int i;                             // 繰り返し処理に使う変数
//     int data[] = {32, 14, 33, 48, 21}; // 初期化子を用いて初期化
//     int tmp;                           // 値の交換に使う変数

//     for (i = 0; i < 4; i++) // 比較を行うための繰り返し文
//     {
//         if (data[i] > data[i + 1]) // 隣り合う2つの値を交換するか判定数するif文
//         {
//             tmp = data[i];
//             data[i] = data[i + 1];
//             data[i + 1] = tmp;
//         }
//     }

//     printf("最大値：%d\n", data[4]);

//     return 0;
// }

// #define NUMBER 5
// int main(void)
// {
//     int i;                 // 繰り返し文に使う変数
//     int num[NUMBER] = {0}; // 正数のみを代入する配列
//     int cnt = 0;           // 配列numに入力された正数の数を表す変数
//     int tmp;               // 変数tmpにキーボードから値を代入し0より大きかったら
//                            // 配列numに変数tmpの値を代入する
//     double ave;

//     // 繰り返し文を使って、配列numに正数を代入するプログラム
//     for (i = 0; i < NUMBER; i++)
//     {
//         printf("%d番目の値：", i + 1);
//         scanf("%d", &tmp);
//         if (tmp > 0) // 正数であれば配列numに代入
//         {
//             num[cnt] = tmp;
//             cnt++;
//         }
//     }

//     // 平均値を求めるプログラム
//     for (i = 0; i < cnt; i++)
//     {
//         ave += num[i]; // 配列numの要素を加算
//     }
//     ave /= cnt; // 平均値を計算

//     printf("最大値：%f\n", ave);

//     return 0;
// }

// int main(void)
// {
//     int i;
//     int money[] = {10000, 5000, 1000,
//                    500, 100, 50, 10, 5, 1};
//     int num;    // 紙幣・硬貨の枚数を代入する変数
//     int salary; // 給料を代入するプログラム

//     printf("給料:");
//     scanf("%d", &salary);

//     for (i = 0; i < 9; i++)
//     {
//         if (salary >= money[i])
//         {
//             num = salary / money[i];
//             salary -= money[i] * num;
//             printf("%d円%d枚\n", money[i], num);
//         }
//     }

//     return 0;
// }

// int main(void)
// {
//     int i, j;
//     int data[] = {5, 4, 3, 2, 1};
//     int tmp;

//     for (i = 0; i < 4; i++)
//     {
//         for (j = 0; j < 4 - i; j++)
//         {
//             if (data[j] > data[j + 1])
//             {
//                 tmp = data[j];
//                 data[j] = data[j + 1];
//                 data[j + 1] = tmp;
//             }
//         }
//     }
//     printf("%d\n%d\n%d\n%d\n%d\n", data[0], data[1], data[2], data[3], data[4]);

//     return 0;
// }