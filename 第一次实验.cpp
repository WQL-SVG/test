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
    printf("������a��b��c��ֵ���ÿո�ָ�����");
    scanf("%d %d %d", &a, &b, &c);
    max = (a > b) ? a : b;
    max = (max > c) ? max : c;
    printf("�������е����ֵ�ǣ�%d\n", max);
    return 0;
}
