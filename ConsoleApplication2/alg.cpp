
#include "alg.h"
int main()
{
    const double a = 4.8;
    const double b = -7.9;
    double n, m;
    double (*ready1)(const double a, const double b);
    ready1 = versionsN(a,b);
    n = ready1(a, b);
    double (*ready2)(const double a, const double b, double n);
    ready2 = versionsM(n,b);
    m = ready2(a, b, n);
    cout << "n = " << n << endl << "m =  " << m << endl << "a = " << a << endl << "b = " << b;
    

}

