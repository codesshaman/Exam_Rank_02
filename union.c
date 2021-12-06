#include <unistd.h>

int     main(void)
{
    int i = 0;
    static char buff[27];
    char *av1 = "1233445";
    char *av2 = "455656756";

    while (av1[i]){
        if(!buff[av1[i]]){
            buff[av1[i]] = 1;
            write(1, &av1[i], 1);
        }
        i++;
    }
    i = 0;
    while (av2[i]){
        if(!buff[av2[i]]){
            buff[av2[i]] = 1;
            write(1, &av2[i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
}
