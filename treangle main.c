#include <stdio.h>
#include "mylib.h"

int main()
{
    double a,b,c,s,p;
    printf("Insert a,b,c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    p=perim(a,b,c);
    s=sq(a,b,c);
    if (prov(a,b,c))
    {
        printf("P=%lf\n",p);
        printf("S=%lf\n",s);
    }
    else
    {
        printf("Not correct\n");
    }

    return 0;
}
