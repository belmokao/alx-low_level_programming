#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
    char password[100];
    int i;
    
    srand(time(0));
    for (i = 0; i < 12; i++) {
        int category = rand() % 3;
        switch (category) {
            case 0:
                password[i] = (rand() % 26) + 65;
                break;
            case 1:
                password[i] = (rand() % 26) + 97;
                break;
            case 2:
		password[i] = (rand() % 10) + 48;
                break;
        }
    }
    password[12] = '\0';
    printf("%s\n", password);
    return (0);
}
