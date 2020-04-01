#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    char * args[]={"fork","hello","sahar",NULL};
    execv("./fork",args);
    return 0;
}
