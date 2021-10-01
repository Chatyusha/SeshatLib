# Library for Matrix Calculation

## Usage

```example.cpp

#include <matrix/matrix.hpp>
using namespace Seshat::Matrix;

int main ()
{
  Matrix A(2,3);
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<3;j++)
    {
      std::cin >> A.at(i,j);
    }
  }
  std::cout<<A.to_string()<<std::endl;
  return 0;
}

```
