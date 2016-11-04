#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *s1, *s2;
    s1=(char*)malloc(sizeof(char)*100);
    s2=(char*)malloc(sizeof(char)*100);
    printf("Vvedite 1 stroku: ");
    scanf("%s", s1);
    printf("Vvedite 2 stroku: ");
    scanf("%s", s2);
    s1=strcat(s1, s2);
    printf("s1+s2: %s\n", s1);
    return 0;
}
