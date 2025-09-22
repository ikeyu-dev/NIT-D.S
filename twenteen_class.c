#include <stdio.h>
#define DATASIZE 7

// int main(void)
// {
//     int data[DATASIZE] = {5, 1, 3, 7, 4, 6, 2};

//     int i, j, tmp;
//     for (i = 0; i < DATASIZE - 1; i++)
//     {
//         for (j = i + 1; j < DATASIZE; j++)
//         {
//             if (data[i] > data[j])
//             {
//                 tmp = data[i];
//                 data[i] = data[j];
//                 data[j] = tmp;
//             }
//         }
//     }
//     for (i = 0; i < DATASIZE; i++)
//     {
//         printf("%d ", data[i]);
//     }
//     printf("\n");
//     return 0;
// }

// int main(void)
// {
//     int data[DATASIZE] = {5, 1, 3, 7, 4, 6, 2};
//     int i, j, tmp;

//     for (i = 0; i < DATASIZE - 1; i++)
//     {
//         for (j = DATASIZE - 1; j >= i + 1; j--)
//         {
//             if (data[j - 1] > data[j])
//             {
//                 tmp = data[j - 1];
//                 data[j - 1] = data[j];
//                 data[j] = tmp;
//             }
//         }
//         {
//         }
//     }
//     for (i = 0; i < DATASIZE; i++)
//     {
//         printf("%d ", data[i]);
//     }
//     printf("\n");
//     return 0;
// }

// int main(void)
// {
//     int data[DATASIZE] = {-5, -3, -1, 0, 2, 4, 6};
//     int i, j, tmp;

//     for (i = 0; i < DATASIZE - 1; i++)
//     {
//         for (j = i + 1; j < DATASIZE; j++)
//         {
//             if (data[i] * data[i] > data[j] * data[j])
//             {
//                 tmp = data[i];
//                 data[i] = data[j];
//                 data[j] = tmp;
//             }
//         }
//     }
//     for (i = 0; i < DATASIZE; i++)
//     {
//         printf("%d ", data[i]);
//     }
//     printf("\n");
//     return 0;
// }

int main(void)
{
    // {気温, 湿度}
    double data[][2] = {{20.6, 83.0},
                        {16.6, 97.0},
                        {27.4, 78.0},
                        {30.0, 42.0},
                        {29.0, 52.0}};

    int i, j;
    double tmp[1][2]; // 一時的にデータを保存するための配列

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            double discomfort_index_i = (0.81 * data[i][0]) + (0.01 * data[i][1]) * ((0.99 * data[i][0]) - 14.3) + 46.3;

            double discomfort_index_j = (0.81 * data[j][0]) + (0.01 * data[j][1]) * ((0.99 * data[j][0]) - 14.3) + 46.3;

            if (discomfort_index_i < discomfort_index_j)
            {
                tmp[0][0] = data[i][0];
                tmp[0][1] = data[i][1];
                data[i][0] = data[j][0];
                data[i][1] = data[j][1];
                data[j][0] = tmp[0][0];
                data[j][1] = tmp[0][1];
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        double discomfort_index = 0.81 * data[i][0] + 0.01 * data[i][1] * (0.99 * data[i][0] - 14.3) + 46.3;
        printf("気温=%.2f, 湿度=%.2f, 不快指数=%.2f\n", data[i][0], data[i][1], discomfort_index);
    }
}