#include <stream.h>

class Hello
{
  public:
    Hello()
    {
      cout << "Hello, cfront!\n";
    }
    ~Hello()
    {
      cout << "bye, cfront!\n";
    }
  private:
};

template<class Type>
Type min(Type a, Type b)
{
  return a < b ? a : b;
}

template<class Type>
class Queue
{
  public:
    Queue(const Type &e)
    {
      e_ = e;
    }
    void print()
    {
      cout << "e_: " << e_ << endl;
    }
  private:
    Type e_;
};

main()
{
  Hello o;
  cout << min(20.5, 6.8) << endl;

  Queue<float> q(5.2);
  q.print();
}
