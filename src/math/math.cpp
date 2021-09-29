#include "math.hpp"

namespace Seshat {
  namespace Math {

    template int gcd<int>(int,int);
    template long gcd<long>(long,long);
    template long long gcd<long long>(long long,long long);

    template int lcm<int>(int,int);
    template long lcm<long>(long,long);
    template long long lcm<long long>(long long,long long);

    template <typename T>
    T gcd(T a, T b)
    {
      if(a<b)
      {
        T c=a;
        a = b;
        b = c;
      }
      while(a%b!=0)
      {
        T r = a%b;
        a=b;
        b=r;
      }
      return b;
    }

    template <typename T>
    T lcm(T a, T b)
    {
      return (a / gcd(a, b)) * b;
    }

  }
}
