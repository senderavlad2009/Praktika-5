#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14159265358979323846
//Вариант 7
main()
{
	setlocale(LC_ALL, "RUS");
	f();
}

float f()
{
	double x, y, z, res1,res2, res3, res3_ch, res3_zn, res; //т.к. функция pow принимает значения типа double
	puts("Введите значения x,y,z:");
	scanf("%lf %lf %lf", &x, &y, &z);
	printf("x = %lf \ny = %lf \nz = %lf \n", x, y, z);
	res1 = 5. * atan(x);
	res2 = (1./4) * acos(x);
	res3_ch = x + ((3 * fabs(x - y)) + pow(x, 2));
	res3_zn = (fabs(x - y) * z) + pow(x, 2);
	res3 = res3_ch / res3_zn;
	res = res1 - (res2 * res3);
	printf("Ответ:    %lf", res);
	return 1;
}
