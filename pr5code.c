#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

/*float main()
{
	setlocale(LC_ALL, "RUS");
	//primer();
	//zd1();
	zd2();

}
primer()
{
	float x, y, s1, s2, s3, s4, res;
	printf("sin(x ** (0,5 * y)) + (y + 0.0008) ** 0,2\nВведите значения x(от -1 до 1):\n");
	scanf("%f %f", &x, &y);
	printf("x = %f\ny = %f\n", x, y);
	s1 = 0.5 * y;
	s2 = sin(pow(x, s1));
	s3 = y + 0.0008;
	s4 = pow(s3, 0.2);
	res = s2 + s4;
	printf("Результат равен %.4f", res);
	return 1;
}
zd1()
{
	float gr, rad, s;
	printf("Введите значение в градусах:\n");
	scanf("%f", &gr);
	rad = (gr * M_PI) / 180;
	s = sin(rad);
	printf("Синус %.0f градусов равен %.6f", gr, s);
	return 11;
}
zd2() //ВАРИАНТ 7
{
	float k = 1.2,x,y,a,b;
	puts("Введите значение x:");
	scanf("%f", &x);
	printf("x = %f\n", x);
	a = exp(k * x);
	printf("Тогда a = %f\n", a);
	b = pow(log(x), 2) + pow(k, 5);
	printf("Значит b = %f\n", b);
	y = pow(pow(a, 2) + pow(b, 2), 1./3);
	printf("Ответ:\n  x = %f\n  y = %.2f\n", x, y);
}*/
