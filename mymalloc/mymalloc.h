#include<stddef.h>
char array[25000] = {'\0'};

char *start = array;

char freef = 'f';
char notfree = 'n';

char* first_fit(size_t size);
void split(char* b, size_t s);
void *MyMalloc(size_t size);
void MyFree(void* address);
#include "mymalloc.c"
