
#define _USE_MATH_DEFINES // for C++

#include <LambertW.h>

#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <bit>

using namespace std;

constexpr double EPS = 0.00001f;
constexpr double MAXV = 8;
constexpr double PRECISION = 20;

int main()
{
    double best = 0;
    double xb = 0, yb = 0;
    for (double xf = EPS; xf < MAXV; xf += EPS)
    {
        double yf = MAXV - xf;
        double res = ::pow(xf, yf);
        if (res > best)
        {
            best = res;
            xb = xf;
            yb = yf;
        }
    }
    cout << std::setprecision(PRECISION);
    cout << xb << " :: " << yb << " :: " << best << endl;

    // analytic answer
    xb = ::exp(utl::LambertW<0>(MAXV * M_E) - 1);
    yb = MAXV - xb;
    best = ::pow(xb, yb);

    cout << xb << " :: " << yb << " :: " << best << endl;
}