#ifndef VECTOR2_HPP
#define VECTOR2_HPP

#include <iostream>
#include <cmath>

namespace Seshat {
  namespace Vector2 {
    template <typename T = double> class Vector2
    {
      public:
        T x;
        T y;
        Vector2(T x = 0.0,T y = 0.0);

        Vector2<T> operator+(const Vector2<T> &a);
        Vector2<T> operator-(const Vector2<T> &a);

        double size();
    };
  }
}

#endif /* VECTOR2_HPP */
