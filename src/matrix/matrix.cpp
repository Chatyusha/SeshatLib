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
    
    template int& Matrix<int>::at(int a,int b) const;
    template long& Matrix<long>::at(int a,int b) const;
    template long long& Matrix<long long>::at(int a,int b) const;
    template float& Matrix<float>::at(int a,int b) const;
    template double& Matrix<double>::at(int a,int b) const;
    template long double& Matrix<long double>::at(int a,int b) const;

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
      this->matrix = new T[row*column];
      for(int i=0;i<row*column;i++)
      {
        matrix[i]=0;
      }
    }
    
    template<typename T>
    Matrix<T>::Matrix(int row, int column, T *init)
    {
      this->row = row;
      this->column = column;
      this->matrix = init;
    }
    template<typename T>
    Matrix<T>::~Matrix()
    {
    }

    template<typename T>
    Matrix<T> Matrix<T>::operator+(const Matrix<T> &a)
    {
      Matrix<T> M(row,column);
      for (int i=0; i<row;i++) {
        for(int j=0;j<column;j++)
        {
          M.at(i,j) = this->at(i,j) + a.at(i,j);
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
          M.at(i,j) = this->at(i,j) - a.at(i,j);
        }
      }
      return M;
    }

    template <typename T>
    Matrix<T> Matrix<T>::operator*(const Matrix<T> &a)
    {
      Matrix<T> M(row,row);
      for(int i=0;i<row;i++)
      {
        for(int j=0;j<row;j++)
        {
          for(int k=0;k<column;k++)
          {
            M.at(i,j) += this->at(i,k)*a.at(k,j);
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
          M.matrix[column*i+j] = matrix[column*i+j] * a;
        }
      }
      return M;
    }
    
    template<typename T>
    T& Matrix<T>::at(int a,int b) const
    {
      return matrix[column*a+b];
    }
    template<typename T> 
    std::string Matrix<T>::to_string()
    {
      std::string S="";
      for(int i=0;i<row;i++)
      {
        for(int j=0;j<column;j++)
        {
          S+=std::to_string(matrix[column*i+j])+", ";
        }
        S+="\n";
      }
      return S;
    }
       
  }
}
