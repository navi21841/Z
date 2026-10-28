#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    char input[100];
    puts("Welcome to Z");
    puts("Version 0.0.0.1");
    puts("Press Ctrl+c to exit\n");
    while (1)
    {   
        printf("Z> ");
        fgets(input,sizeof(input), stdin);
        printf("You entered %s", input);
    }
}


