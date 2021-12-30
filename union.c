#include <unistd.h>

int repeats(char *str, int max, char ch){
    int i = -1;
    while(++i < max)
        if (str[i] == ch)
            return (0);
    return (1);
}

void ft_union(char *str1, char *str2){
    int i = -1; int j = -1;
    while(str1[++i])
        if(repeats(str1, i, str1[i]))
            write(1, &str1[i], 1);
    while(str2[++j])
        if(repeats(str2, j, str2[j]) && repeats(str1, i, str2[j]))
            write(1, &str2[j], 1);
}

int main(int argc, char **argv){
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
}
