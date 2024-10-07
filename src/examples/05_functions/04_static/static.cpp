#include "static.h"

void use_non_static_local_variabel()
{
  auto num = 0;
  num++;
  cout<<num<<"\n"
}