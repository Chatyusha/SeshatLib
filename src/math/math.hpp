#ifndef MATH_HPP
#define MATH_HPP

#include <cmath>
#include <typeinfo>

namespace Seshat {
  namespace Math {
    template <typename T>
    T gcd(T a, T b);

    template <typename T>
    T lcm(T a, T b);

  }
}
#endif
