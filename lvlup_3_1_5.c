#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int p=0, i, j, m=0;
    char *s1, *s2;
    int k=0;
    s1=(char*)malloc(sizeof(char)*100);
    s2=(char*)malloc(sizeof(char)*100);
    printf("Vvedite stroku: ");
    scanf("%s", s1);
    printf("Vvedite podstroku: ");
    scanf("%s", s2);
    int len2=strlen(s2);
    int len1=strlen(s1);
    for(i=0; i<len1-len2+1;i++)
    {
        for(j=i;j<i+len2;j++)
        {
            if(s1[j]==s2[m])
            {
                k++;
                p=1;
                m++;
            }
        }
        if(k==len2)
            printf("From %d to %d \n", i+1, i+len2);
        k=0;
        m=0;
    }
    if(p==0)
        printf("Net podstrok\n");
    return 0;
}
