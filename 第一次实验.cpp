1.#include <stdio.h>
int main()
{
    printf("  *****\n");
    printf(" *     *\n");
    printf("*       *\n");
    printf("*       *\n");
    printf("*       *\n");
    printf(" *     *\n");
    printf("  *****\n");
    return 0;
}

2.#include <stdio.h>
int main()
{
    printf("  *\n");
    printf(" * *\n");
    printf("***\n");
    return 0;
}

3.#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("请输入a、b、c的值（用空格分隔）：");
    scanf("%d %d %d", &a, &b, &c);
    max = (a > b) ? a : b;
    max = (max > c) ? max : c;
    printf("三个数中的最大值是：%d\n", max);
    return 0;
}
