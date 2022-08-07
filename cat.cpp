#include <iostream>
#include <string.h>
#include <sstream>
#include <Windows.h>

int main(int argc, char** argv){
    if(argc > 2 != 0 &&strcmp(argv[2],"clear") == 0){
        system("cls");
    }
    FILE* f = fopen(argv[1],"r");
    if(!f){
        printf("File not found!\n\r");
        exit(EXIT_FAILURE);
    }
    uint8_t ch;
    std::string b;
    while(!feof(f)){
        printf("%c",getc(f));
    }

    exit(EXIT_SUCCESS);
}