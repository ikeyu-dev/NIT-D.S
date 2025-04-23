#include <stdio.h>
#include <stdlib.h>

int main(void)
{
       // やってみよう 1つめ 率直にprintfを使う場合
       printf("%s\n", "125D007");
       printf("%s\n", "Ikeda Yuma");
       printf("%s\n%s\n%s\n%s\n", "池", "田", "悠", "真");
       printf("%s\n", "2006年10月30日");

       // やってみよう 1つめ 変数および反復処理を使う場合
       const char *id = "125D007";
       const char *name = "Ikeda Yuma";
       const char *names[] = {"池", "田", "悠", "真"};
       const char *birth = "2006年10月30日";

       printf("%s\n%s\n", id, name);
       for (int i = 0; i < 4; i++)
       {
              printf("%s\n", names[i]);
       }
       printf("%s\n", birth);

       // やってみよう 2つめ
       int n;
       printf("整数を入力してください: ");
       scanf("%d", &n);
       printf("%dに12を加えると%dです。\n", n, n + 12);

       int m;
       printf("整数を入力してください: ");
       scanf("%d", &m);
       printf("%dに6を減じると%dです。\n", m, m - 6);
       return 0;
}