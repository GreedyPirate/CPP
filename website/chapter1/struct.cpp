#include <stdio.h>

struct User
{
    /* data */
    int id;
    char *name;
};

void print(struct User user) {
    printf("id is %d, name is %s", user.id, user.name);
}

int main() {

    struct User user;

    user.id = 100;
    user.name = "jay";

    print(user);

    return 0;
}

