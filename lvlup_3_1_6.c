#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* s;
    s=(char*)malloc(sizeof(char)*100);
    printf("Vvedite stroku: ");
    scanf("%s", s);
    char buf;
    int i,len;
    len=strlen(s);
    for(i=0; i<len/2;i++)
    {
        buf=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=buf;
    }
    printf("Reverse s: %s", s);
    return 0;
}
