#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    int file1;
    char buffer[1024] = "writing test text\n";
    long int num = 100;

    if((file1 = open(argv[1], O_WRONLY|O_APPEND)) == -1){
        perror("could not open file to write");
        return 1;
    }
    printf("successful\n");
    close(file1);
}