#include <stdio.h>
#include <assert.h>

const int N = 1000;

int atoi(const char * str)
{
    int sign = 1, ans = 0;
    assert(NULL != str);
    while (*str == ' ') str++;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
        str++;
    while ((*str<='9') && (*str>='0'))
    {
        ans *= 10;
        ans += *str - '0';
        str++;
    }
    return sign * ans;
}


double atof(const char * str)
{
    int sign = 1;
    double value = 0.0, power = 1.0;
    assert(NULL != str);
    while (*str == ' ') str++;
    if (*str == '-')    
    {
        sign = -1;
        str++;
    }

    while ((*str>='0') && (*str<='9'))
    {
        value *= 10.0;
        value += *str - '0';
        str++;
    }
    if (*str == '.')
        str++;

    while ((*str<='9') && (*str>='0'))
    {
        value *= 10.0;
        value += *str - '0';
        str++;
        power *= 10.0;
    }
    return sign * value / power;
}

int main()
{
    char num[N];
    while (scanf("%s", num) != EOF)
    {
        printf("the result = %f\n", atof(num));
    }
    return 0;
}
