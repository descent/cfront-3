#include "t.h"

int main(int argc, char *argv[])
{
  D1 d1;
  D2 d2;

  printf("d1.num: %d\n", d1.get_num());
  printf("d2.num: %d\n", d1.get_num());
  printf("d1.a: %d\n", d1.get_a());
  printf("d2.b: %d\n", d2.get_b());
  
  return 0;
}
