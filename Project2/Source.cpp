#include<stdio.h>
int main(int argc, char const* argv[])
{
    unsigned long t;
    int h, m, s;
    printf("Enter your time (second) : ");
    scanf("%lu", &t);
    h = t / 3600;
    t -= h * 3600;
    m = t / 60;
    t -= m * 60;
    s = t;
    if (t >= 0)
    {
        printf("%d hour(s) %d minute(s) %d second(s).", h, m, s);
    }
    else
    {
        printf("Error");
    }
    return 0;
}
