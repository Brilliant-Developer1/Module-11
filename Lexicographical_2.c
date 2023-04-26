#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int result = strcmp(a, b);

    if (result < 0)
    {
        printf("A Small\n");
    }
    else if (result > 0)
    {
        printf("B Small\n");
    }
    else
    {
        printf("Same\n");
    }
    // printf("%d\n", result);

    return 0;
}