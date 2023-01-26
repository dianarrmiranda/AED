

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int a = 1234567890;
    
    while(a>0)
    {
        printf("a - %d \n",a%10);
        a= a/10;
        printf("%d\n",a);
    }
  return 0;
}