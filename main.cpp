#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024

int main(int argc, char** argv) {
    char* str = (char*)malloc(sizeof(char) * SIZE);
    printf("Введите своё имя: \n");  // из merging
    str = gets(str);                 // из main
    printf("Привет, %s", str);       // из main
    return 0;
}
