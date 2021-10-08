#include "./matrix.hpp"
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
    
    template Matrix<int> operator+(const Matrix<int> &l, const Matrix<int> &r);
    template Matrix<long> operator+(const Matrix<long> &l, const Matrix<long> &r);
    template Matrix<long long> operator+(const Matrix<long long> &l, const Matrix<long long> &r);
    template Matrix<float> operator+(const Matrix<float> &l, const Matrix<float> &r);
    template Matrix<double> operator+(const Matrix<double> &l, const Matrix<double> &r);
    template Matrix<long double> operator+(const Matrix<long double> &l, const Matrix<long double> &r);

    template Matrix<int> operator-(const Matrix<int> &l, const Matrix<int> &r);
    template Matrix<long> operator-(const Matrix<long> &l, const Matrix<long> &r);
    template Matrix<long long> operator-(const Matrix<long long> &l, const Matrix<long long> &r);
    template Matrix<float> operator-(const Matrix<float> &l, const Matrix<float> &r);
    template Matrix<double> operator-(const Matrix<double> &l, const Matrix<double> &r);
    template Matrix<long double> operator-(const Matrix<long double> &l, const Matrix<long double> &r);

    template Matrix<int> operator*(const Matrix<int> &l, const Matrix<int> &r);
    template Matrix<long> operator*(const Matrix<long> &l, const Matrix<long> &r);
    template Matrix<long long> operator*(const Matrix<long long> &l, const Matrix<long long> &r);
    template Matrix<float> operator*(const Matrix<float> &l, const Matrix<float> &r);
    template Matrix<double> operator*(const Matrix<double> &l, const Matrix<double> &r);
    template Matrix<long double> operator*(const Matrix<long double> &l, const Matrix<long double> &r);

    template Matrix<int> operator*(const int &l, const Matrix<int> &r);
    template Matrix<long> operator*(const int &l, const Matrix<long> &r);
    template Matrix<long long> operator*(const int &l, const Matrix<long long> &r);
    template Matrix<float> operator*(const int &l, const Matrix<float> &r);
    template Matrix<double> operator*(const int &l, const Matrix<double> &r);
    template Matrix<long double> operator*(const int &l, const Matrix<long double> &r);
    template Matrix<int> operator*(const long &l, const Matrix<int> &r);
    template Matrix<long> operator*(const long &l, const Matrix<long> &r);
    template Matrix<long long> operator*(const long &l, const Matrix<long long> &r);
    template Matrix<float> operator*(const long &l, const Matrix<float> &r);
    template Matrix<double> operator*(const long &l, const Matrix<double> &r);
    template Matrix<long double> operator*(const long &l, const Matrix<long double> &r);
    template Matrix<int> operator*(const long long &l, const Matrix<int> &r);
    template Matrix<long> operator*(const long long &l, const Matrix<long> &r);
    template Matrix<long long> operator*(const long long &l, const Matrix<long long> &r);
    template Matrix<float> operator*(const long long &l, const Matrix<float> &r);
    template Matrix<double> operator*(const long long &l, const Matrix<double> &r);
    template Matrix<long double> operator*(const long long &l, const Matrix<long double> &r);  
    template Matrix<int> operator*(const float &l, const Matrix<int> &r);
    template Matrix<long> operator*(const float &l, const Matrix<long> &r);
    template Matrix<long long> operator*(const float &l, const Matrix<long long> &r);
    template Matrix<float> operator*(const float &l, const Matrix<float> &r);
    template Matrix<double> operator*(const float &l, const Matrix<double> &r);
    template Matrix<long double> operator*(const float &l, const Matrix<long double> &r);
    template Matrix<int> operator*(const double &l, const Matrix<int> &r);
    template Matrix<long> operator*(const double &l, const Matrix<long> &r);
    template Matrix<long long> operator*(const double &l, const Matrix<long long> &r);
    template Matrix<float> operator*(const double &l, const Matrix<float> &r);
    template Matrix<double> operator*(const double &l, const Matrix<double> &r);
    template Matrix<long double> operator*(const double &l, const Matrix<long double> &r);
    template Matrix<int> operator*(const long double &l, const Matrix<int> &r);
    template Matrix<long> operator*(const long double &l, const Matrix<long> &r);
    template Matrix<long long> operator*(const long double &l, const Matrix<long long> &r);
    template Matrix<float> operator*(const long double &l, const Matrix<float> &r);
    template Matrix<double> operator*(const long double &l, const Matrix<double> &r);
    template Matrix<long double> operator*(const long double &l, const Matrix<long double> &r);

    template<typename T> Matrix<T>::Matrix(int row,int column)
    {
      this->row = row;
      this->column = column;
      this->matrix = new T[row*column]();
    }
    
    template<typename T>
    Matrix<T>::Matrix(int row, int column, T *init)
    {
      this->row = row;
      this->column = column;
      this->matrix = new T[row*column];
      for (int i=0;i<row*column;i++)
      {
        matrix[i] = init[i];
      }
    }
    template<typename T>
    Matrix<T>::~Matrix()
    {
      if(matrix!=nullptr)
      {
        delete[] matrix;
        matrix = nullptr;
      }
    }

    template<typename T>
    Matrix<T> operator+(const Matrix<T> &l, const Matrix<T> &r)
    {
      int row = l.row;
      int column = l.column;
      Matrix<T> M(row,column);
      for (int i=0; i<row;i++) {
        for(int j=0;j<column;j++)
        {
          M.at(i,j) = l.at(i,j) + r.at(i,j);
        }
      }
      return M;
    }
    
    template <typename T>
    Matrix<T> operator-(const Matrix<T> &l, const Matrix<T> &r)
    {
      int row = l.row;
      int column = l.column;
      Matrix<T> M(row,column);
      for (int i=0; i<row;i++) {
        for(int j=0;j<column;j++)
        {
          M.at(i,j) = l.at(i,j) - r.at(i,j);
        }
      }
      return M;
    }

    
    template<typename T>
    Matrix<T> &Matrix<T>::operator=(const Matrix<T> &r)
    {
      for(int i=0;i<row;i++)
      {
        for(int j=0;j<column;j++)
        {
          at(i,j) = r.at(i,j);
        }
      }
      return *this;
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
          S+=std::to_string(this->at(i,j))+", ";
        }
        S+="\n";
      }
      return S;
    }
    
    template <typename T>
    Matrix<T> operator*(const Matrix<T> &l, const Matrix<T> &r)
    {
      int row = l.row;
      int column = l.column;
      Matrix<T> M(row,row);
      for(int i=0;i<row;i++)
      {
        for(int j=0;j<row;j++)
        {
          for(int k=0;k<column;k++)
          {
            M.at(i,j) += l.at(i,k)*r.at(k,j);
          }
        }
      }
      return M;
    }

    template<typename T, typename U>
    Matrix<T> operator*(const U &l,const Matrix<T> &r)
    {
      Matrix<T> M(r.row,r.column);
      for(int i=0;i<M.row;i++)
      {
        for(int j=0;j<M.column;j++)
        {
          M.at(i,j) = l * r.at(i,j);
        }
      }
      return M; 
    }
  }
}
