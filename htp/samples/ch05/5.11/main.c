#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  unsigned int i;

  for (i = 0; i <= 20; ++i) {
    printf("%10d", 1 + (rand() % 6));

    if (i % 5 == 0) {
      puts("");
    }
  }
}