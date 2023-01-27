#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){
    FILE *file;
    int i;
    char buffer[2048];
    int bytes;

    if (argc <= 1) {
        while ((bytes = fread(buffer, 1, sizeof(buffer), stdin)) > 0)
        {
            fwrite(buffer, 1, bytes, stdout);
        }
    } else {
        for (i = 1; i < argc; ++i){
            file = fopen(argv[i], "r");
            if (file == NULL){
                perror("fopen");
                return 1;
            }
            while ((bytes = fread(buffer, 1, sizeof(buffer), file)) > 0){
                fwrite(buffer, 1, bytes, stdout);
            }
            if (fclose(file) != 0){
                perror("fclose");
                return 1;
            }
        }
    }
    return 0;
}