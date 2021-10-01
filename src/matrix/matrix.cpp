#include "./matrix.hpp"
#include <cstdio>
#include <string>

namespace Seshat {
  namespace Matrix {
    template class Matrix<int>;
    template class Matrix<long>;
    template class Matrix<long long>;
    template class Matrix<float>;
    template class Matrix<double>;
    template class Matrix<long double>;

    template std::string Matrix<int>::to_string();
    template std::string Matrix<long>::to_string();
    template std::string Matrix<long long>::to_string();
    template std::string Matrix<float>::to_string();
    template std::string Matrix<double>::to_string();
    template std::string Matrix<long double>::to_string();

    template<typename T> Matrix<T>::Matrix(int row,int column)
    {
      this->row = row;
      this->column = column;
      this->matrix = new T*[row*column];
    }
    
    template<typename T>
    Matrix<T>::Matrix(int row, int column, T *init)
    {
      this->row = row;
      this->column = column;
      this->matrix = init;
    }
    
    template<typename T>
    Matrix<T> Matrix<T>::operator+(const Matrix<T> &a)
    {
      Matrix<T> M(row,column);
      for (int i=0; i<row;i++) {
        for(int j=0;j<column;j++)
        {
          M.matrix[i][j] = matrix[i][j] + a.matrix[i][j];
        }
      }
      return M;
    }
    
    template <typename T>
    Matrix<T> Matrix<T>::operator-(const Matrix<T> &a)
    {
      Matrix<T> M(row,column);
      for (int i=0; i<row;i++) {
        for(int j=0;j<column;j++)
        {
          M.matrix[i][j] = matrix[i][j] - a.matrix[i][j];
        }
      }
      return M;
    }

    template <typename T>
    Matrix<T> Matrix<T>::operator*(const Matrix<T> &a)
    {
      Matrix<T> M(row,row);
      for (int i=0;i<row;i++)
      {
        for (int j=0; j<row;j++) {
          for (int k=0;k<column;k++)
          {
            M.matrix[i][j] += matrix[i][k]*a.matrix[k][j];
          }
        }
      }
      return M;
    }
    template <typename T>
    Matrix<T> Matrix<T>::operator*(const T &a)
    {
      Matrix<T> M(row,column);
      for (int i=0; i<row;i++) {
        for(int j=0;j<column;j++)
        {
          M.matrix[i][j] = matrix[i][j] * a;
        }
      }
      return M;
    }

    template<typename T> 
    std::string Matrix<T>::to_string()
    {
      std::string S="";
      for(int i=0;i<row;i++)
      {
        for(int j=0;j<column;j++)
        {
          S+=std::to_string(matrix[i][j])+", ";
        }
        S+="\n";
      }
      return S;
    }
    
    template<typename T> Matrix<T> dot(T &a, T &b)
    {

    }
  }
}
