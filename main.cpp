#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024

int main(int argc, char** argv) {
    char* str = (char*)malloc(sizeof(char) * SIZE);
    printf("Введите своё имя:\n");   // из main
    str = gets(str);                 // из main
    puts("Привет");                  // из rebasing
    puts(str);                       // из rebasing
    return 0;
}

