#include <stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	float x_2 = 1 / 2.0, y_1 = 1 / 3.0, y_2 = 1 / 4.0, h;
	h = x_2 + y_1 + y_2;
	printf("%lf", h);
	int a;
	double b, c;
		scanf_s(" %d", &a);
		b = 2 * pi * a;
		c = pi * pow(a, 2);
		printf(" %.3lf %.3lf", b, c);
		getchar();
		char m,n;
		printf("请输入一个字符：\n");
		scanf_s("%c", &m);
		n = (int)m;
		printf("\n\n%c的ASCII为%d\n", m, n);
		getchar();
		int x, y, z;
		scanf_s("%d %d", &x, &y);
		z = (x + y) / 2;
		printf("%d\n", z);
		getchar();
		int x_1;
		scanf_s("%d", &x_1);
		printf("\n%d(10),%o(8),%x(16)\n", x_1,x_1,x_1);
		



	return 0;
}