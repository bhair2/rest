#include <stdio.h>

void printHoroscopeSign(int month, const char *text)
{
  print("%d%s", month, text);
  switch(month)
  {
      case 0: print("Dragon"); break;
      case 1: print("Horse"); break;
      default: print("not implemented");
  }
}