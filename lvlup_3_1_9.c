#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j;
    char** a;
    char* buf;
    a=(char**)malloc(sizeof(char*)*10);
    for(i=0;i<10;i++)
        a[i]=(char*)malloc(sizeof(char)*100);
    for(i=0;i<10;i++)
    {
        scanf("%s", *(a+i));
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if( strcmp(*(a+j), *(a+j+1))>0 )
            {
                buf=*(a+j+1);
                *(a+j+1)=*(a+j);
                *(a+j)=buf;
            }
        }
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%s\n", *(a+i));
    }
    return 0;
}
