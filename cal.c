#include <stdio.h>

int add(int f, int l)
{
    int totel = f + l;
    return totel;
}
int sub(int f, int l)
{
    int totel = f - l;
    return totel;
}
int multi(int f, int l)
{
    int totel = f * l;
    return totel;
}
int main()
{
    int ans = multi(75, 37);
    printf("%d\n", ans);
}
