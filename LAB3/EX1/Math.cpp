#include "Math.h"
#include <stdarg.h>
#include <stdio.h>


int Math::Add(int nr1, int nr2)
{
    return nr1 + nr2;
}

int Math::Add(int nr1, int nr2, int nr3)
{
    return nr1 + nr2 + nr3;
}

int Math::Add(double nr1, double nr2)
{
    return nr1 + nr2;
}

int Math::Add(double nr1, double nr2, double nr3)
{
    return nr1 + nr2 + nr3;
}

int Math::Mul(int nr1, int nr2)
{
    return nr1 * nr2;
}

int Math::Mul(int nr1, int nr2, int nr3)
{
    return nr1 * nr2 * nr3;
}

int Math::Mul(double nr1, double nr2)
{
    return nr1 * nr2;
}

int Math::Mul(double nr1, double nr2, double nr3)
{
    return nr1 * nr2 * nr3;
}

int Math::Add(int count, ...)
{
    int value;
    int sum = 0;
    va_list ap;
    va_start(ap, count);
    for (int i = 0; i < count; i++)
    {
        value = va_arg(ap, int);
        sum += value;
    }
    va_end(ap);
    return sum;
}

char* Math::Add(const char* str1, const char* str2)
{
    if(str1 == nullptr || str2 == nullptr)
    return nullptr;


    v = t + (c - '0');
    t = 0;
    if (v > 9)
        t = v / 10
        s[i] = v % 10 + '0';
}