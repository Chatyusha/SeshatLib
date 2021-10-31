#include "vector2.hpp"

namespace Seshat {
  namespace Vector2 {

    template Vector2<int> operator+(const Vector2<int> &r, const Vector2<int> &l);
    template Vector2<long> operator+(const Vector2<long> &r, const Vector2<long> &l);
    template Vector2<long long> operator+(const Vector2<long long> &r, const Vector2<long long> &l);
    template Vector2<float> operator+(const Vector2<float> &r, const Vector2<float> &l);
    template Vector2<double> operator+(const Vector2<double> &r, const Vector2<double> &l);
    template Vector2<long double> operator+(const Vector2<long double> &r, const Vector2<long double> &l);
    
    template Vector2<int> operator-(const Vector2<int> &r, const Vector2<int> &l);
    template Vector2<long> operator-(const Vector2<long> &r, const Vector2<long> &l);
    template Vector2<long long> operator-(const Vector2<long long> &r, const Vector2<long long> &l);
    template Vector2<float> operator-(const Vector2<float> &r, const Vector2<float> &l);
    template Vector2<double> operator-(const Vector2<double> &r, const Vector2<double> &l);
    template Vector2<long double> operator-(const Vector2<long double> &r, const Vector2<long double> &l);
    
    template Vector2<int> operator*(const int &l, const Vector2<int> &r);
    template Vector2<int> operator*(const long &l, const Vector2<int> &r);
    template Vector2<int> operator*(const long long &l, const Vector2<int> &r);
    template Vector2<int> operator*(const float &l, const Vector2<int> &r);
    template Vector2<int> operator*(const double &l, const Vector2<int> &r);
    template Vector2<int> operator*(const long double &l, const Vector2<int> &r);
    template Vector2<long> operator*(const int &l, const Vector2<long> &r);
    template Vector2<long> operator*(const long &l, const Vector2<long> &r);
    template Vector2<long> operator*(const long long &l, const Vector2<long> &r);
    template Vector2<long> operator*(const float &l, const Vector2<long> &r);
    template Vector2<long> operator*(const double &l, const Vector2<long> &r);
    template Vector2<long> operator*(const long double &l, const Vector2<long> &r);
    template Vector2<long long> operator*(const int &l, const Vector2<long long> &r);
    template Vector2<long long> operator*(const long &l, const Vector2<long long> &r);
    template Vector2<long long> operator*(const long long &l, const Vector2<long long> &r);
    template Vector2<long long> operator*(const float &l, const Vector2<long long> &r);
    template Vector2<long long> operator*(const double &l, const Vector2<long long> &r);
    template Vector2<long long> operator*(const long double &l, const Vector2<long long> &r);
    template Vector2<float> operator*(const int &l, const Vector2<float> &r);
    template Vector2<float> operator*(const long &l, const Vector2<float> &r);
    template Vector2<float> operator*(const long long &l, const Vector2<float> &r);
    template Vector2<float> operator*(const float &l, const Vector2<float> &r);
    template Vector2<float> operator*(const double &l, const Vector2<float> &r);
    template Vector2<float> operator*(const long double &l, const Vector2<float> &r);
    template Vector2<double> operator*(const int &l, const Vector2<double> &r);
    template Vector2<double> operator*(const long &l, const Vector2<double> &r);
    template Vector2<double> operator*(const long long &l, const Vector2<double> &r);
    template Vector2<double> operator*(const float &l, const Vector2<double> &r);
    template Vector2<double> operator*(const double &l, const Vector2<double> &r);
    template Vector2<double> operator*(const long double &l, const Vector2<double> &r);
    template Vector2<long double> operator*(const int &l, const Vector2<long double> &r);
    template Vector2<long double> operator*(const long &l, const Vector2<long double> &r);
    template Vector2<long double> operator*(const long long &l, const Vector2<long double> &r);
    template Vector2<long double> operator*(const float &l, const Vector2<long double> &r);
    template Vector2<long double> operator*(const double &l, const Vector2<long double> &r);
    template Vector2<long double> operator*(const long double &l, const Vector2<long double> &r);
  
    template Vector2<int> operator/(const Vector2<int> &l, const int &r);
    template Vector2<int> operator/(const Vector2<int> &l, const long &r);
    template Vector2<int> operator/(const Vector2<int> &l, const long long &r);
    template Vector2<int> operator/(const Vector2<int> &l, const float &r);
    template Vector2<int> operator/(const Vector2<int> &l, const double &r);
    template Vector2<int> operator/(const Vector2<int> &l, const long double &r);
    template Vector2<long> operator/(const Vector2<long> &l, const int &r);
    template Vector2<long> operator/(const Vector2<long> &l, const long &r);
    template Vector2<long> operator/(const Vector2<long> &l, const long long &r);
    template Vector2<long> operator/(const Vector2<long> &l, const float &r);
    template Vector2<long> operator/(const Vector2<long> &l, const double &r);
    template Vector2<long> operator/(const Vector2<long> &l, const long double &r);
    template Vector2<long long> operator/(const Vector2<long long> &l, const long double &r);
    template Vector2<long long> operator/(const Vector2<long long> &l, const long long &r);
    template Vector2<long long> operator/(const Vector2<long long> &l, const int &r);
    template Vector2<long long> operator/(const Vector2<long long> &l, const long &r);
    template Vector2<long long> operator/(const Vector2<long long> &l, const float &r);
    template Vector2<long long> operator/(const Vector2<long long> &l, const double &r);
    template Vector2<float> operator/(const Vector2<float> &l, const int &r);
    template Vector2<float> operator/(const Vector2<float> &l, const long &r);
    template Vector2<float> operator/(const Vector2<float> &l, const long long &r);
    template Vector2<float> operator/(const Vector2<float> &l, const float &r);
    template Vector2<float> operator/(const Vector2<float> &l, const double &r);
    template Vector2<float> operator/(const Vector2<float> &l, const long double &r);
    template Vector2<double> operator/(const Vector2<double> &l, const int &r);
    template Vector2<double> operator/(const Vector2<double> &l, const long &r);
    template Vector2<double> operator/(const Vector2<double> &l, const long long &r);
    template Vector2<double> operator/(const Vector2<double> &l, const float &r);
    template Vector2<double> operator/(const Vector2<double> &l, const double &r);
    template Vector2<double> operator/(const Vector2<double> &l, const long double &r);
    template Vector2<long double> operator/(const Vector2<long double> &l, const int &r);
    template Vector2<long double> operator/(const Vector2<long double> &l, const long &r);
    template Vector2<long double> operator/(const Vector2<long double> &l, const long long &r);
    template Vector2<long double> operator/(const Vector2<long double> &l, const float &r);
    template Vector2<long double> operator/(const Vector2<long double> &l, const double &r);
    template Vector2<long double> operator/(const Vector2<long double> &l, const long double &r);
    
    template Vector2<int> operator*(const Vector2<int> &l, const int &r);
    template Vector2<int> operator*(const Vector2<int> &l, const long &r);
    template Vector2<int> operator*(const Vector2<int> &l, const long long &r);
    template Vector2<int> operator*(const Vector2<int> &l, const float &r);
    template Vector2<int> operator*(const Vector2<int> &l, const double &r);
    template Vector2<int> operator*(const Vector2<int> &l, const long double &r);
    template Vector2<long> operator*(const Vector2<long> &l, const int &r);
    template Vector2<long> operator*(const Vector2<long> &l, const long &r);
    template Vector2<long> operator*(const Vector2<long> &l, const long long &r);
    template Vector2<long> operator*(const Vector2<long> &l, const float &r);
    template Vector2<long> operator*(const Vector2<long> &l, const double &r);
    template Vector2<long> operator*(const Vector2<long> &l, const long double &r);
    template Vector2<long long> operator*(const Vector2<long long> &l, const long double &r);
    template Vector2<long long> operator*(const Vector2<long long> &l, const long long &r);
    template Vector2<long long> operator*(const Vector2<long long> &l, const int &r);
    template Vector2<long long> operator*(const Vector2<long long> &l, const long &r);
    template Vector2<long long> operator*(const Vector2<long long> &l, const float &r);
    template Vector2<long long> operator*(const Vector2<long long> &l, const double &r);
    template Vector2<float> operator*(const Vector2<float> &l, const int &r);
    template Vector2<float> operator*(const Vector2<float> &l, const long &r);
    template Vector2<float> operator*(const Vector2<float> &l, const long long &r);
    template Vector2<float> operator*(const Vector2<float> &l, const float &r);
    template Vector2<float> operator*(const Vector2<float> &l, const double &r);
    template Vector2<float> operator*(const Vector2<float> &l, const long double &r);
    template Vector2<double> operator*(const Vector2<double> &l, const int &r);
    template Vector2<double> operator*(const Vector2<double> &l, const long &r);
    template Vector2<double> operator*(const Vector2<double> &l, const long long &r);
    template Vector2<double> operator*(const Vector2<double> &l, const float &r);
    template Vector2<double> operator*(const Vector2<double> &l, const double &r);
    template Vector2<double> operator*(const Vector2<double> &l, const long double &r);
    template Vector2<long double> operator*(const Vector2<long double> &l, const int &r);
    template Vector2<long double> operator*(const Vector2<long double> &l, const long &r);
    template Vector2<long double> operator*(const Vector2<long double> &l, const long long &r);
    template Vector2<long double> operator*(const Vector2<long double> &l, const float &r);
    template Vector2<long double> operator*(const Vector2<long double> &l, const double &r);
    template Vector2<long double> operator*(const Vector2<long double> &l, const long double &r);

    template<typename T>
    Vector2<T> operator+(const Vector2<T> &l, const Vector2<T> &r)
    {
      return Vector2<T>(l.x+r.x,r.y+r.y);
    }

    template<typename T>
    Vector2<T> operator-(const Vector2<T> &l, const Vector2<T> &r)
    {
      return Vector2<T>(l.x-r.x,l.y-r.y);
    }

    template<typename T, typename U>
    Vector2<U> operator*(const T &l, const Vector2<U> &r)
    {
      return Vector2<U>(l*r.x,l*r.y);
    }

    template<typename T, typename U>
    Vector2<T> operator*(const Vector2<T> &l, const U &r)
    {
      return Vector2<T>(l.x*r,l.y*r);
    }

    template<typename T, typename U>
    Vector2<T> operator/(const Vector2<T> &l, const U &r)
    {
      return Vector2<T>(l.x/r,l.y/r);
    }
    
  }
}
