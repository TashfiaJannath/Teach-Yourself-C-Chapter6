#include <stdio.h>
#include <string.h>
int main ()
{
    char *o="one", *t="two", *th="three" ;
    printf("%s %s %s\n", o,t,th);
    printf("%s %s %s\n", o,th,t);
    printf("%s %s %s\n", t,th,o);
    printf("%s %s %s\n", t,o,th);
    printf("%s %s %s\n", th,o,t);
    printf("%s %s %s\n", th,t,o);

}
