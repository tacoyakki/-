#include <stdio.h>
int main()
{
    int s, s1, n, n1, u, u1;
    double res, ren, reu;
    
    // 입력
    scanf("%d %d", &s, &s1);
    scanf("%d %d", &n, &n1);
    scanf("%d %d", &u, &u1);
    s *= 10;
    s1 *= 10;
    n *= 10;
    n1 *= 10;
    u *= 10;
    u1 *= 10;

    if (s >= 5000) s -= 500;
    if (n >= 5000) n -= 500;
    if (u >= 5000) u -= 500;
    res = (double)s1 / s;
    ren = (double)n1 / n;
    reu = (double)u1 / u;
    if (res >= ren && res >= reu)
        printf("S");
    else if (ren > res && ren >= reu)
        printf("N");
    else 
        printf("U");
        
    return 0;
}