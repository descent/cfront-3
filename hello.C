#include <stream.h>

class Hello
{
  public:
    Hello()
    {
      cout << "Hello, cfront!\n";
    }
  private:
};

template<class Type>
Type min(Type a, Type b)
{
  return a < b ? a : b;
}

main()
{
  Hello o;
  cout << min(20, 6) << endl;
}
