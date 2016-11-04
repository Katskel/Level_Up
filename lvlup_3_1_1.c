#include <stdio.h>
#include <stdlib.h>
typedef struct User1
    {
    char* login;
	char* password;
	char* mail;
	int age;
    } User;


User enterUser();
User copyUser(User user);
User copyUser2(User* dest,User* src);
void printUser();
User getTestUser();

User GlUser;

int main()
{
    User* puser;
    puser=(User*)malloc(sizeof(User)*5);
    printf("Inpur user[1]:\n");
    puser[0]=enterUser();
    printf("Inpur user[2]:\n");
    puser[1]=enterUser();
    puser[2]=copyUser(puser[1]);
    puser[3]=copyUser2(puser,puser+1);
    printf("Output user[3]:\n");
    GlUser=puser[2];
    printUser();
    printf("Output user[4]:\n");
    GlUser=puser[3];
    printUser();
    puser[4]=getTestUser();
    printf("Output user[5]:\n");
    GlUser=puser[4];
    printUser();
    return 0;
}

User getTestUser()
{
    User user1;
    user1.login="Test";
    user1.password="12345678";
    user1.mail="test@tut.by";
    user1.age=18;
    return user1;
}


User enterUser()
{
    User input;
    int error;
    input.login=(char*)malloc(sizeof(char)*20);
    input.password=(char*)malloc(sizeof(char)*20);
    input.mail=(char*)malloc(sizeof(char)*20);
    printf("Login: ");
    scanf("%s", input.login);
    printf("Password: ");
    scanf("%s", input.password);
    printf("Mail: ");
    scanf("%s", input.mail);
    do {
		printf("Age: ");
		error = scanf("%d", &input.age);
		fflush(stdin);
		if (!error)
            {
			printf("\nBad input, try one more time\n");
            }
		else if (input.age < 0)
            {
			printf("\nAge can not be less than zero\n");
            }
        }
        while((!error) || (input.age<0));
    return input;
}


User copyUser(User user)
{
    return user;
}

User copyUser2(User* dest, User* src)
{
    User buf;
    buf=*dest;
    *dest=*src;
    return buf;
}

void printUser()
{
    printf("Login: %s\n", GlUser.login);
    printf("Password: %s\n", GlUser.password);
    printf("Mail: %s\n", GlUser.mail);
    printf("Age: %d\n\n", GlUser.age);
}

