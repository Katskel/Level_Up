#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

typedef struct Dict1 {
            char* eng;
            char* rus;
            } Dict;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char* s;
    int i;
    s=(char*)malloc(sizeof(char)*20);
    Dict a[10];
    a[0].eng="cat";
    a[1].eng="dog";
    a[2].eng="phone";
    a[3].eng="home";
    a[4].eng="friend";
    a[5].eng="bed";
    a[6].eng="school";
    a[7].eng="family";
    a[8].eng="toy";
    a[9].eng="car";
    a[0].rus="���";
    a[1].rus="������";
    a[2].rus="�������";
    a[3].rus="���";
    a[4].rus="����";
    a[5].rus="�������";
    a[6].rus="�����";
    a[7].rus="�����";
    a[8].rus="�������";
    a[9].rus="������";
    printf("Vvedite slovo: (exit dlya vixoda)\n");
    scanf("%s", s);
    while(strcmp(s,"exit")!=0)
    {
        for(i=0;i<10;i++)
        {
            if(strcmp((a[i].rus),s)==0)
                {
                printf("%s: %s\n", s, a[i].eng);
                break;
                }
            if(strcmp((a[i].eng),s)==0)
                {
                printf("%s: %s\n", s, a[i].rus);
                break;
                }
        }
        if(i==10)
            printf("Takogo net\n");
        printf("Vvedite slovo: (exit dlya vixoda)\n");
        fflush(stdin);
        scanf("%s", s);
    }
    return 0;
}
