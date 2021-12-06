#include <unistd.h>

int     main(void)
{
	int i = 0;
	int j = 0;
	static char tab[127];
    char *av1 = "1233445";
    char *av2 = "455656756";

	while (av1[i]){
		while (av2[j]){
			if(!tab[(unsigned char)av1[i]] && av1[i] == av2[j]){
				tab[(unsigned char)av1[i]] = 1;
				write(1, &av1[i], 1);
			}
			j++;
		}
		j = 0;
		i++;
	}
	write(1, "\n", 1);
}