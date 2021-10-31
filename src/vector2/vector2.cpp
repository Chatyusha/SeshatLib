#include "vector2.hpp"

namespace Seshat {
  namespace Vector2 {

    template class Vector2<int>;
    template class Vector2<long>;
    template class Vector2<long long>;
    template class Vector2<float>;
    template class Vector2<double>;
    template class Vector2<long double>;

    template  double Vector2<int>::size();
    template  double Vector2<long>::size();
    template  double Vector2<long long>::size();
    template  double Vector2<float>::size();
    template  double Vector2<double>::size();
    template  double Vector2<long double>::size();

    template std::string Vector2<int>::to_string();
    template std::string Vector2<long>::to_string();
    template std::string Vector2<long long>::to_string();
    template std::string Vector2<float>::to_string();
    template std::string Vector2<double>::to_string();
    template std::string Vector2<long double>::to_string();

    template int dot(const Vector2<int> &a, const Vector2<int> &b);
    template long dot(const Vector2<long> &a, const Vector2<long> &b);
    template long long dot(const Vector2<long long> &a, const Vector2<long long> &b);
    template float dot(const Vector2<float> &a, const Vector2<float> &b);
    template double dot(const Vector2<double> &a, const Vector2<double> &b);
    template long double dot(const Vector2<long double> &a, const Vector2<long double> &b);

    template double angle(const Vector2<int> &a, const Vector2<int> &b);
    template double angle(const Vector2<long> &a, const Vector2<long> &b);
    template double angle(const Vector2<long long> &a, const Vector2<long long> &b);
    template double angle(const Vector2<float> &a, const Vector2<float> &b);
    template double angle(const Vector2<double> &a, const Vector2<double> &b);
    template double angle(const Vector2<long double> &a, const Vector2<long double> &b);
    
    template Vector2<double> Vector2<int>::normalize();
    template Vector2<double> Vector2<long>::normalize();
    template Vector2<double> Vector2<long long>::normalize();
    template Vector2<double> Vector2<float>::normalize();
    template Vector2<double> Vector2<double>::normalize();
    template Vector2<double> Vector2<long double>::normalize();

    template<typename T>
    Vector2<T>::Vector2(T x,T y)
    {
      this->x = x;
      this->y = y;
    }

    template<typename T>
    double Vector2<T>::size()
    {
      return std::sqrt(x*x + y*y);
    }
    
    template <typename T>
    Vector2<double> Vector2<T>::normalize()
    {
      return Vector2<double>((double)x/size(),(double)y/size());
    }

    template<typename T>
    std::string Vector2<T>::to_string()
    {
      return "("+std::to_string(this->x)+", "+std::to_string(this->y)+")";
    }
    
    template<typename T>
    T dot(const Vector2<T> &a, const Vector2<T> &b)
    {
      return a.x*b.x + a.y*b.y;
    }
    template<typename T>
    T cross(const Vector2<T> &a, const Vector2<T> &b)
    {
      return a.x*b.y - a.y*b.x;
    }
    
    template<typename T>
    double angle(const Vector2<T> &a, const Vector2<T> &b)
    {
      return acos(dot(a,b)/ (sqrt(a.x*a.x+a.y*a.y) * sqrt(b.x*b.x+b.y*b.y)));
    }

    template<typename T>
    float anglef(const Vector2<T> &a, const Vector2<T> &b)
    {
      return (float)acos(dot(a,b)/ (sqrt(a.x*a.x+a.y*a.y) * sqrt(b.x*b.x+b.y*b.y)));
    }
  }
}
