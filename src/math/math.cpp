#include "math.hpp"

namespace Seshat {
  namespace Math {
    template double deg2rad(int);
    template double deg2rad(long);
    template double deg2rad(long long);
    template double deg2rad(float);
    template double deg2rad(double);
    template double deg2rad(long double);
    template long double deg2radl(int);
    template long double deg2radl(long);
    template long double deg2radl(long long);
    template long double deg2radl(float);
    template long double deg2radl(double);
    template long double deg2radl(long double);
    template float deg2radf(int);
    template float deg2radf(long);
    template float deg2radf(long long);
    template float deg2radf(float);
    template float deg2radf(double);
    template float deg2radf(long double);

    template double rad2deg(int);
    template double rad2deg(long);
    template double rad2deg(long long);
    template double rad2deg(float);
    template double rad2deg(double);
    template double rad2deg(long double);
    template long double rad2degl(int);
    template long double rad2degl(long);
    template long double rad2degl(long long);
    template long double rad2degl(float);
    template long double rad2degl(double);
    template long double rad2degl(long double);
    template float rad2degf(int);
    template float rad2degf(long);
    template float rad2degf(long long);
    template float rad2degf(float);
    template float rad2degf(double);
    template float rad2degf(long double);

    template<typename T>
    double deg2rad(T __degrees)
    {
      return __degrees * (PI / 180.0);
    }

    template<typename T>
    long double deg2radl(T __degrees)
    {
      return __degrees * (PIl / 180.0L);
    }

    template<typename T>
    float deg2radf(T __degrees)
    {
      return __degrees * (PIf / 180.0f);
    }

    template <typename T>
    double rad2deg(T __radian)
    {
      return __radian * (180.0 / PI);
    }

    template <typename T>
    long double rad2degl(T __radian)
    {
      return __radian * (180.0 / PIl);
    }

    template <typename T>
    float rad2degf(T __radian)
    {
      return __radian * (180.0 / PIf);
    }
  }
}
