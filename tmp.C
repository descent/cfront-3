#include <stream.h>

template<class Type>
Type min(Type a, Type b)
{
  return a < b ? a : b;
}


main()
{
  cout << min(20.5, 6.8) << endl;
}
