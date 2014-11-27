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

  int a;
  a = Multiply<int>(3, 5);
  printf("%d\n",a);

  return 0;

}

