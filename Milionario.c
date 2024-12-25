#include <stdio.h>

int main   (){
    printf("Legngth:");

    int legnth; 
    scanf("%d", &legnth);   

    if (legnth <= 0){
        printf("Invalid legnth\n");
        return 1;
    }
    char *password = malloc(legnth + 1);
    return 0;   
}
    