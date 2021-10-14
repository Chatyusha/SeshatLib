#ifndef MATH_HPP
#define MATH_HPP

#include <cmath>
#include <math.h>
#include <typeinfo>

namespace Seshat {
  namespace Math {

    const double PI = 3.141592653589793;
    const long double PIl =3.141592653589793;
    const float PIf = 3.141592653589793;

    template <typename T>
    T gcd(T a, T b);

    template <typename T>
    T lcm(T a, T b);

    template <typename T>
    double deg2rad(T __degrees);

    template <typename T>
    long double deg2radl(T __degrees);

    template <typename T>
    float deg2radf(T __degrees);

    template <typename T>
    double rad2deg(T __radian);

    template <typename T>
    long double rad2degl(T __radian);

    template <typename T>
    float rad2degf(T __radian);
  }
}
#endif
