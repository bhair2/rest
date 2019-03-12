#include <stdio.h>

void printHoroscopeSign(int month)
{
  print("%d", month);
  switch(month)
  {
      case 0: print("Capricorn"); break;
      case 1: print("Aquarius"); break;
      default: print("not implemented");
  }
}