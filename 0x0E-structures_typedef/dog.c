#include <stdio.h>
#include <stdlib.h>

typedef struct User
{
	char *name;
	char *email;
	int age;
} red;
red *new(char *n, char *e, int a)
{
	red *usr;
	usr = malloc(sizeof(red));

	usr->name = n;
	usr->email = e;
	usr->age = a;
	return (usr);
}
int main(void)
{
	red user;
	red *str;
	str = &user;
	user.name = "redouane";
	printf("%s\n", user.name);
	printf("%s\n", str->name);
	printf("%s\n", __FILE__);

	red *usr;
	usr = new("der", "red@gmail.com", 23);
	printf("%s %s %d\n", usr->name, usr->email, usr->age);
	return (0);
}
