#include <stdio.h>
#include <stdlib.h>

typedef struct User1
    {
    char* login;
	char* password;
	char* mail;
	int age;
    } User;

void swapUser(User* user1, User* user2);
void printUser(User user);

int main()
{
    User* puser;
    puser=(User*)malloc(sizeof(User)*2);
    (*puser).login="Pavel";
    (*puser).password="12345";
    (*puser).mail="Pavel@tut.by";
    (*puser).age=17;
    (*(puser+1)).login="Ann";
    (*(puser+1)).password="8888";
    (*(puser+1)).mail="Ann@tut.by";
    (*(puser+1)).age=16;
    swapUser(puser, puser+1);
    printUser(*puser);
    printf("\n");
    printUser(*(puser+1));
    return 0;
}


void swapUser(User* user1, User* user2)
{
    User* buf;
    buf=(User*)malloc(sizeof(User));
    *buf=*user1;
    *user1=*user2;
    *user2=*buf;
}


void printUser(User user)
{
    printf("Login: %s\n", user.login);
    printf("Password: %s\n", user.password);
    printf("Mail: %s\n", user.mail);
    printf("Age: %d\n", user.age);
}
