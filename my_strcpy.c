#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest,const char* src)
{
    char* ret = dest;
    assert(dest != NULL);//╤оят
    assert(src != NULL);
    while(*dest++ = *src++)
    {
        ;
    }
    return ret;
}

int main()
{
    char arr1[] = "######";
    char arr2[] = "@@@@";
    printf("%s\n", my_strcpy(arr1, arr2));
    return 0;
}
