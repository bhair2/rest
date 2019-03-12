#include <stdio.h>

void printHoroscopeSign(int month, const char *text, int harmadik)
{
  print("%d%s%d", month, text, harmadik);
  switch(month)
  {
      case 0: print("Capricorn"); break;
      case 1: print("Aquarius"); break;
      default: print("not implemented");
  }
}

void cheer()
{
  
}