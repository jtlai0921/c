#include <stdio.h>

void recu(int);

int main(void)
{
  recu(1);
  return 0;
}

void recu(int n)
{
  printf("%*d\n", 2*n, n);    /* print #1 */

  if (n < 4){
    //printf("-- n=%d \n", n);
    recu(n+1);
  }

  printf("%*d\n",2*n,n);    /* print #2 */
}
