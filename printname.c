 #include<stdio.h>
 #include<stdlib.h>
 #include <unistd.h>
 
int main(int argc, char* argv[])
{
    int count = atoi (argv[1]);
    for (int i = 0; i < count; i++) {
        sleep(1);
        printf("Joshua Fogg\n");
        fflush(stdout);
    }
    return 0;
}