#include "static.h"

using std::cout;

void use_non_static_local_variable()
{
  auto num = 0;
  num++;
  cout<<num<<"\n";
}
void use_static_local_variable()
{
static auto num = 0;
num++;
cout<<num<<"\n";
}
void use_static_local_variable1()
{
static auto num = 0;
num++;
cout<<num<<"\n";
}