#include <iostream>
#include <cstdio>

template<typename T_n>
T_n Multiply(T_n A, T_n B)
{
  return A * B;
}

int main()
{
  void *i;
  i = std::cout << "aiueo\n";
  printf("%p\n",i);

  float a;
  a = Multiply<float>(3.4, 5.123);
  printf("%f\n",a);

  return 0;

}

