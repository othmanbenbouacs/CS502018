#include "stdio.h"
#include "cs50.h"

int checkpoint(void);

int main(int argc, char const *argv[]) {
  /* prompt the user for a valid input */
  /*asking the user for a height in the domain [0, 23]*/
  int height = checkpoint();


  return 0;
}

//checkpoint: asking the user for a valid height until is valid
int checkpoint(void)
{
  int x;
  do
  {
    x = get_int("Give me height: ");
  }
  while (x > 23 || x < 0);

  //return the valid height
  return x;
}
