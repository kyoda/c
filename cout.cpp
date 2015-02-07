#include <iostream>
#include <cstdio>
using namespace std;

template<typename T_n>
T_n Multiply(T_n A, T_n B)
{
  return (T_n)(A * B + 3);
}


template<typename AA>
AA getInt(AA x);

int main()
{

  void *i;
  i = cout << "aiueo\n";
  printf("%p\n",i);

  float a;
  a = Multiply<float>(3.4, 5);
  printf("%f\n",a);
  printf("int: %lu\n", sizeof(int));
  printf("%f\n", getInt<float>(3.4));


  5;


  return 0;

}



template<typename AA>
AA getInt(AA x)
{
  return (AA)x;
}
