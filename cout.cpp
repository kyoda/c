#include <iostream>
#include <stdio.h>

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
  a = Multiply<float>(3, 5);
  printf("%f\n",a);

  return 0;

}

