#include <stdio.h>
int mystrlen(char *p)
{
    int i=0;
    while(*p)
    {
        i++;
        p++;
    }
    return i;
}
int main ()
{
    char str[80];
    int i;
    printf("Enter a string :");
    gets(str);
    i=mystrlen(str);
    printf("Length of the string is: %d",i);
    return 0;
}
