#include <stdio.h>
#include <stdbool.h>



char* first_fit(size_t size) //find the first suitable block
{
    char *ptr;
    ptr = start;

    int num = 0;

    char *next = NULL;

    while(true)
    {
        num = *(int *)(ptr+1);

        if(*ptr == freef && num >= size+5)
        {
            return (ptr);
        }
		else if(!ptr)
        {
            return NULL;
        }
		else{

            if( ptr + num + size +5 >= array + 24999)
            {
                printf("Memory Overflow\n");
                return NULL;
            }

            ptr = ptr + num;
        }

    }

    return (ptr); //exit the loop
}

void split(char* b, size_t s) //split the block
{
    char* temp;
    int blocksize = *(int *)(b + 1);

    blocksize = blocksize - s-5; 
    

    temp = b + s + 5;

    *temp = freef;

    *(int *)(temp + 1) = blocksize;
    *(int *)(b + 1) = s+5;
    *b = notfree;


}

void *MyMalloc(size_t size) //mymalloc function
{
    if(size <= 0)
    {
        return NULL;
    }

    if(!*start)
    {
        *start = freef;
        *(int *)(start+1) = 24999-5;

    }

    size_t s = size;

    char* b = first_fit(s);

    if(b)
    {

       if(*(int *)(b+1) >= size)
       {
           split(b,s);

       }
    }
	
	else{
        return NULL;
    }

    return ((void *)b);


}

void MyFree(void* addr) //free function
{
	addr=(char *)addr;
    char *ptr, *prev, *next;

    ptr = start;

    int num = *(int *)(ptr + 1);

    while(true)
    {
        num = *(int *)(ptr + 1);

        if(ptr == addr)
        {
            break;
        }
		else if(!*ptr)
        {
            break;
        }
		
		else{

            prev = ptr;
            ptr = ptr + num;
            next = ptr + *(int *)(ptr + 1);
        }
    }

    if(*next == freef)
    {
        *ptr = freef;
        *(int *)(ptr + 1) = *(int *)(ptr + 1) + *(int *)(next + 1);
    }

    if(*prev == freef)
    {
        *ptr = freef;
        *(int *)(prev + 1) = *(int *)(ptr + 1) + *(int *)(prev + 1);
    }
	else
	{
        *(char *)addr = freef;
    }
}


