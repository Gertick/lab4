#include <stdio.h>
#include <locale.h>
#include <math.h>

void task1()
{
    char c = 'h';
    int i = 52;
    float f = 5.214f;
    double d = 23.000;
    printf("Тип char: %c\nТип int: %d\nТип float: %f\nТип double: %f\n", c, i, f, d);

    puts("Введите значения в консоль:");
    puts("Символ:");
    scanf(" %c", &c, (unsigned int)sizeof(c));
    puts("Целое:");
    scanf("%d", &i);
    puts("С плавающей точкой:");
    scanf("%f", &f);
    puts("Двойной точности:");
    scanf("%lf", &d);
    printf("Тип char: %c\nТип int: %d\nТип float: %f\nТип double: %f\n", c, i, f, d);

    puts("задача 1а");
    int intpart;
    float floatpart;
    intpart = (int)f;
    floatpart = f - intpart;
    printf("Целая часть: %d\nДробная часть: %f\n", intpart, floatpart);

    puts("задача 1б");
    int r;
    puts("Введите число:");
    scanf("%d", &r);
    printf("Число в восьмеричной системе: %o\nЧисло в шестнадцатеричной системе: %x\n", r, r);

    puts("задача 1в");
    double result = 1.0 / i;
    printf("Число, соответствующее 1/i: ");
    printf("%f\n", result);
}

void task2() {
    int a = 11;
    int b = 3;

    int x;
    float y;
    double z;

    x = a / b;
    y = (float)a / (float)b;
    z = (double)a / (double)b;
    printf("x: %d\n y: %f\n z: %f\n", x, y, z);
}

void task3() {
    int N;
    int first;
    int second;
    int third;
    int sum;
    int obr;

    puts("Введите целое трехзначное число:");
    scanf("%d", &N);

    first = N / 100;
    second = N % 100 / 10;
    third = N % 10;
    sum = first + second + third;
    obr = (third * 100) + (second * 10) + first;

    printf("Первая цифра:%d\nВторая цифра:%d\nТретья цифра:%d\nСумма цифр:%d\nЧисло наоборот:%d\n", first, second, third, sum, obr);
}

void homework()
{
    int a, b, c;
    puts("Введите массы элементов по порядку");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if ((a % 3 == 0) && (b % 3 == 0) && (c % 3 == 0))
    {
        puts("Реакция запустится");
    }
    else
    {
        puts("Реакция не запустится");
    }
}

void main()
{
    setlocale(LC_CTYPE, "ru_RU.UTF-8");

    task1();
    task2();
    task3();
    homework();
}