#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>
#include <string>

namespace Seshat {
  namespace Matrix {
    template<typename T = float> class Matrix {
      public:
        T *matrix;
        int row, column;
        Matrix(int row, int column);
        Matrix(int row, int column, T *init);
        ~Matrix();
        Matrix<T> operator+(const Matrix<T> &a);
        Matrix<T> operator-(const Matrix<T> &a);
        Matrix<T> operator*(const Matrix<T> &a);
        Matrix<T> operator=(const Matrix<T> &a);
        
        T& at(int a, int b) const;
        std::string to_string();

    };
    template<typename T, typename U>
    Matrix<T> operator*(U l, const Matrix<T> &r);
  }
}
#endif /* MATRIX_HPP */
