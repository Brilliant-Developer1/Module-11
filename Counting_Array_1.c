#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // int seven = 0;
    int cnt[10] = {0};
    for (int i = 0; i < n; i++)
    {
        cnt[a[i]]++;
        // if (a[i] == 0)
        // {
        //     cnt[0]++;
        // }
        // if (a[i] == 1)
        // {
        //     cnt[1]++;
        // }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d - %d\n", i, cnt[i]);
    }

    // printf("0 - %d\n", cnt[0]);
    // printf("1 - %d\n", cnt[1]);
    // printf("2 - %d\n", cnt[2]);
    // printf("9 - %d\n", cnt[9]);

    return 0;
}
/*
input =
13
5 0 1 9 0 2 3 4 6 5 0 2 9
*/
