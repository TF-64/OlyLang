

#include <stdlib.h>
#include <string.h>

#include "definitions.h"

int main(int argc, char **argv)
{
        char *filename, 
             *outname, 
             **args = malloc( (argc-1) * MAX_FILENAME_LEN );

        int argslen = 0;

        for(int i = 0; i < argc; i++) {
                if(argv[i][0] == '-') {
                        args[argslen] = argv[i];
                        argslen++;
                }
                else if(argv[i][argc-4] + argv[i][argc-3] + argv[i][argc-2] + argv[i][argc-1] == ".oly")
                        filename = argv[i];
                
                else
                        outname = argv[i];

        }
}






