#include <stdio.h>

void printHoroscopeSign(int month)
{
  switch(month)
  {
      case 0: print("Capricorn"); break;
      case 1: print("Aquarius"); break;
      default: print("not implemented");
  }
}