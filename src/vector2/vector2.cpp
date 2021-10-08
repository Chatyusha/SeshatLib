#include "vector2.hpp"
#include <cmath>
#include <string>

namespace Seshat {
  namespace Vector2 {

    template class Vector2<int>;
    template class Vector2<long>;
    template class Vector2<long long>;
    template class Vector2<float>;
    template class Vector2<double>;
    template class Vector2<long double>;

    template double Vector2<int>::size();
    template double Vector2<long>::size();
    template double Vector2<long long>::size();
    template double Vector2<float>::size();
    template double Vector2<double>::size();
    template double Vector2<long double>::size();

    template std::string Vector2<int>::to_string();
    template std::string Vector2<long>::to_string();
    template std::string Vector2<long long>::to_string();
    template std::string Vector2<float>::to_string();
    template std::string Vector2<double>::to_string();
    template std::string Vector2<long double>::to_string();

    template int dot(const Vector2<int> &l, const Vector2<int> &r);
    template long dot(const Vector2<long> &l, const Vector2<long> &r);
    template long long dot(const Vector2<long long> &l, const Vector2<long long> &r);
    template float dot(const Vector2<float> &l, const Vector2<float> &r);
    template double dot(const Vector2<double> &l, const Vector2<double> &r);
    template long double dot(const Vector2<long double> &l, const Vector2<long double> &r);

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

    template<typename T>
    Vector2<T>::Vector2(T x,T y)
    {
      this->x = x;
      this->y = y;
    }

    template<typename T>
    double Vector2<T>::size()
    {
       return sqrt(this->x*this->x + this->y*this->y);
    }

    template<typename T>
    std::string Vector2<T>::to_string()
    {
      return "("+std::to_string(this->x)+", "+std::to_string(this->y)+")";
    }
    
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
    Vector2<U>operator*(const T &l, const Vector2<U> &r)
    {
      return Vector2<U>(l*r.x,l*r.y);
    }

    template<typename T>
    T dot(const Vector2<T> &l, const Vector2<T> &r)
    {
      return l.x*r.x + l.y*r.y;
    }
  }
}
