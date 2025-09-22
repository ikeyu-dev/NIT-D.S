#include <stdio.h>
#define N 10

// int main(void)
// {
//     int i;
//     int C = 165;
//     int w[N] = {63, 38, 29, 82, 23, 53, 44, 85, 89, 31};
//     int p[N] = {67, 43, 49, 72, 92, 60, 68, 84, 87, 57};
//     int x[N] = {0, 1, 0, 0, 0, 1, 0, 0, 0, 1};
//     int weight = 0, profit = 0;
//     for (i = 0; i < N; i++)
//     {
//         if (x[i] == 1)
//         {
//             weight += w[i];
//             profit += p[i];
//         }
//     }

//     printf("重さ:%d 価値:%d\n", weight, profit);

//     return 0;
// }

// int main(void)
// {
//     int i;
//     int C = 165;
//     int w[N] = {63, 38, 29, 82, 23, 53, 44, 85, 89, 31};
//     int p[N] = {67, 43, 49, 72, 92, 60, 68, 84, 87, 57};
//     int x[N] = {0};
//     int weight = 0, profit = 0;
//     int item; // キーボードから入力された品物番号を代入
//               // 入力された値に従い，処理を分ける．
//     printf("ナップサックに詰め込む品物番号を入力してください．\n");
//     printf("詰め込みを終了する場合は -1 を入力してください．\n");
//     while (1)
//     {
//         printf("品物番号を入力してください: ");
//         scanf("%d", &item);
//         if (item == -1)
//         {
//             break;
//         }
//         if (item <= -2 || item >= N)
//         {
//             printf("その品物がありません．\n");
//             continue;
//         }
//         if (weight + w[item] > C)
//         {
//             printf("容量オーバーです．\n");
//             continue;
//         }
//         x[item] = 1;
//     }

//     for (i = 0; i < N; i++)
//     {
//         if (x[i] == 1)
//         {
//             weight += w[i];
//             profit += p[i];
//         }
//     }
//     if (weight > C)
//     {
//         printf("容量オーバーです．\n");
//     }
//     else
//     {
//         printf("重さ:%d 価値:%d\n", weight, profit);
//     }

//     return 0;
// }

// int main(void)
// {
//     int i;
//     int C = 165;
//     int w[N] = {63, 38, 29, 82, 23, 53, 44, 85, 89, 31};
//     int p[N] = {67, 43, 49, 72, 92, 60, 68, 84, 87, 57};
//     double wp[N];

//     for (i = 0; i < N; i++)
//     {
//         wp[i] = (double)p[i] / w[i];
//     }

//     for (i = 0; i < N; i++)
//     {
//         printf("%d\t%.3f\n", i, wp[i]);
//     }

//     return 0;
// }

// int main(void)
// {
//     int i;
//     int C = 165;
//     int w[N] = {23, 31, 29, 44, 53, 38, 63, 85, 89, 82};
//     int p[N] = {67, 43, 49, 72, 92, 60, 68, 84, 87, 57};
//     double wp[N];
//     int no[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

//     for (i = 0; i < N; i++)
//     {
//         wp[i] = (double)p[i] / w[i];
//     }

//     for (i = 0; i < N - 1; i++)
//     {
//         int j;
//         for (j = i + 1; j < N; j++)
//         {
//             if (wp[i] < wp[j])
//             {
//                 double tmp_wp = wp[i];
//                 wp[i] = wp[j];
//                 wp[j] = tmp_wp;

//                 int tmp_no = no[i];
//                 no[i] = no[j];
//                 no[j] = tmp_no;
//             }
//         }
//     }
//     for (i = 0; i < N; i++)
//     {
//         printf("%d %.3f\n", no[i], wp[i]);
//     }
// }

int main(void)
{
    int i, j;
    int C = 165;
    int w[N] = {63, 38, 29, 82, 23, 53, 44, 85, 89, 31};
    int p[N] = {67, 43, 49, 72, 92, 60, 68, 84, 87, 57};
    int x[N] = {0};
    double wp[N];
    int no[N] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int item;
    int weight = 0, profit = 0;

    for (i = 0; i < N; i++)
    {
        wp[i] = (double)p[i] / w[i];
    }

    for (i = 0; i < N - 1; i++)
    {
        for (j = N - 1; j > i; j--)
        {
            if (wp[j - 1] < wp[j])
            {
                double tmp_d = wp[j];
                wp[j] = wp[j - 1];
                wp[j - 1] = tmp_d;

                int tmp_i = no[j];
                no[j] = no[j - 1];
                no[j - 1] = tmp_i;
            }
        }
    }

    for (i = 0; i < N; i++)
    {
        item = no[i];
        if (weight + w[item] < C)
        {
            x[item] = 1;
            weight += w[item];
            profit += p[item];
        }
    }

    printf("重さ:%d 価値:%d\n", weight, profit);
    return 0;
}