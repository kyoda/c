#include <iostream>
#include <cstdio>
using namespace std;

template<typename T_n>
T_n Multiply(T_n A, T_n B)
{
  return A * B + 3;
}

int main()
{

  void *i;
  i = cout << "aiueo\n";
  printf("%p\n",i);

  float a;
  a = Multiply<float>(3.4, 5);
  printf("%f\n",a);

  return 0;

}

