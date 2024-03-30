#include <math.h>
#include <stdbool.h>
double perim(double a, double b, double c)
{
    double per;
    per=a+b+c;
    return per;
}
double sq(double a, double b, double c)
{
    double result, pp=(perim(a,b,c)/2);
    result=sqrt(pp*(pp-a)*(pp-b)*(pp-c));
    return result;
}
bool prov(double a, double b, double c)
{
    if (a<=0 || b<=0 || c<=0)
    {
        return false;
    }
    if (a+b>c&&b+c>a&&a+c>b)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
