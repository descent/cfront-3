#ifndef t_h
#define t_h
#include <stdio.h>
class Base
{
  public:
    Base()
    {
      printf("Base ctor\n");
      num_ = 5;
    }
    ~Base()
    {
      printf("Base dtor\n");
    }
    int get_num();
  private:
    int num_;
};

class D1 : public Base
{
  public:
    D1()
    {
      printf("D1 ctor\n");
      a_ = 12;
    }
    ~D1()
    {
      printf("D1 dtor\n");
    }
    int get_a()
    {
      return a_;
    }
  private:
    int a_;
};

class D2 : public Base
{
  public:
    D2()
    {
      printf("D2 ctor\n");
      b_ = 78;
    }
    ~D2()
    {
      printf("D2 dtor\n");
    }
    int get_b()
    {
      return b_;
    }
  private:
    int b_;
};
#endif
