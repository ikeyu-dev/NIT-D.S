#include <stdio.h>

// int main()
// {
//     int i, n;
//     int sum = 0;

//     printf("nの値：");
//     scanf("%d", &n);

//     for (i = 0; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             continue;
//         }
//         else
//         {
//             sum += i;
//         }
//     }
//     printf("0から%dまでの総和は%dです。\n", n, sum);
//     return 0;
// }

// int main(void)
// {
//     int i;
//     for (i = 1; i < 50; i++)
//     {
//         if (i % 3 == 0 || i % 5 == 0)
//         {
//             printf("%d\n", i);
//         }
//     }
//     return 0;
// }

// int main(void)
// {
//     int n, i, count = 0;

//     printf("正の整数を入力してください：");
//     scanf("%d", &n);

//     for (i = 0; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             printf("%d\n", i);
//             count++;
//         }
//     }
//     printf("個数は%d個です。\n", count);
//     return 0;
// }

// int main(void)
// {
//     int x, y;

//     for (x = 0; x <= 15; x++)
//     {
//         for (y = 0; y <= 10; y++)
//         {
//             if (2 * x + 3 * y == 30)
//             {
//                 printf("x = %d, y = %d\n", x, y);
//             }
//         }
//     }
//     return 0;
// }

// int main(void)
// {
//     int i, j, len;

//     printf("右下直角二等辺三角形を作ります。\n");
//     printf("短辺：");
//     scanf("%d", &len);

//     for (i = 1; i <= len; i++)
//     {
//         for (j = 1; j < i; j++)
//         {
//             printf(" ");
//         }
//         for (j = 1; j <= len - i + 1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main(void)
// {
//     int n, i;
//     printf("n: ");
//     scanf("%d", &n);

//     for (i = n; i >= 1; i--)
//     {
//         if (i % 7 == 0)
//         {
//             printf("%d\n", i);
//         }
//     }
// }

// int main(void)
// {
//     int i, n, ans;
//     printf("n: ");
//     scanf("%d", &n);

//     ans = 1;
//     for (i = n; i >= 1; i--)
//     {
//         ans *= i;
//     }
//     printf("%dの階乗は%dです。\n", n, ans);

//     return 0;
// }

// int main(void)
// {
//     int n;

//     for (n = 1; n <= 10; n++)
//     {
//         printf("第%d項:%d\n", n, 3 * n + 7);
//     }
//     return 0;
// }

// int main(void)
// {
//     int height; // for文の繰り返し使う変数
//     int lower, upper, step;

//     printf("何cmから：");
//     scanf("%d", &lower);
//     printf("何cmまで：");
//     scanf("%d", &upper);
//     printf("何cmごと：");
//     scanf("%d", &step);

//     for (height = lower; height <= upper; height += step)
//     {
//         double standard_weight = (double)height * height * 22 / 10000;
//         printf("%d cm の標準体重は %.2f kg です。\n", height, standard_weight);
//     }

//     return 0;
// }