#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int main(void)
// {
//     int i, j, num, notFound;
//     int data[100];
//     srand((unsigned int)time(NULL));
//     for (i = 0; i < 100; i++)
//     {
//         data[i] = rand() % 100 - 50;
//         printf("%3d:  %3d\t", i, data[i]);
//     }
//     printf("\n");
//     scanf("%d", &num);
//     printf("入力された整数: %d\n", num);
//     notFound = 1;
//     for (i = 0; i < 100; i++)
//     {
//         if (data[i] == num)
//         {
//             printf("%d番目の要素に%dが見つかりました。\n", i, num);
//             notFound = 1;
//             break;
//         }
//         else
//         {
//             notFound = 0;
//         }
//     }
//     if (notFound == 0)
//     {
//         printf("見つからない\n");
//     }

//     return 0;
// }

// int main(void)
// {
//     int i, j, num, min, max, mid, count;
//     int data[100];
//     data[0] = rand() % 10;
//     printf("%3d: %3d\t", 0, data[0]);
//     for (i = 1; i < 100; i++)
//     {
//         data[i] = data[i - 1] + rand() % 10;
//         if (data[i] == data[i - 1])
//         {
//             data[i]++;
//         }
//         printf("%3d: %3d\t", i, data[i]);
//     }
//     printf("\n");

//     scanf("%d", &num);

//     // 二分探索する
//     min = 0;
//     max = 100;
//     while (min <= max)
//     {
//         count++;
//         mid = (min + max) / 2;
//         if (data[mid] == num)
//         {
//             printf("%d回目に%dが見つかりました。\n", count, num);
//             return 0;
//         }
//         else if (data[mid] < num)
//         {
//             min = mid + 1;
//         }
//         else
//         {
//             max = mid - 1;
//         }
//         // 見つからなかったとき
//         if (min > max)
//         {
//             printf("見つからない\n");
//             return 0;
//         }
//     }
// }
