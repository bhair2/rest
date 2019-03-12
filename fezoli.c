#include <stdio.h>
#include <stdbool.h>

int getAgeOfZoli(bool tellTheTruth, bool tellMeLies=true)
{
  if (tellTheTruth == true && tellMeLies == false)
    {
      return 45;
    }
  return 42;
}
