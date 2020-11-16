#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
char z = *(const char *)0;
printf("I read from location zeron %d\n", z);
exit(EXIT_SUCCESS);
}

//void free(void *ptr_to_memory);
