#ifndef VECTOR2_HPP
#define VECTOR2_HPP

#include <iostream>
#include <cmath>
#include <string>

namespace Seshat {
  namespace Vector2 {
    template <typename T = double> class Vector2
    {
      public:
        T x;
        T y;
        Vector2(T x = 0.0,T y = 0.0);

        double size();
        std::string to_string();
    };
    
    template <typename T>
    Vector2<T> operator+(const Vector2<T> &l, const Vector2<T> &r);
    template <typename T>
    Vector2<T> operator-(const Vector2<T> &l, const Vector2<T> &r);
    template<typename T,typename U>
    Vector2<U> operator*(const T &l, const Vector2<U> &r);
    template<typename T, typename U>
    Vector2<T> operator*(const Vector2<T> &l, const U &r);
    template<typename T, typename U>
    Vector2<T> operator/(const Vector2<T> &l, const U &r);

    template<typename T>
    T dot(const Vector2<T> &a,const Vector2<T> &b);

    template<typename T>
    T cross(const Vector2<T> &a,const Vector2<T> &b);

    template<typename T>
    double angle(const Vector2<T> &a,const Vector2<T> &b);

    template<typename T>
    float anglef(const Vector2<T> &a, const Vector2<T> &b);
  }
}

#endif /* VECTOR2_HPP */
