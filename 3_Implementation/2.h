#include <avr/io.h>
#include"Activity1.h"
#include"Activity2.h"
int main(void)
{
    while(1)
    {
        Activity1();
        Activity2();
    }
  return 0;
}