#include "update.h"
#include <string.h>
#include <stdio.h>

void updateUser(struct User *users, int *userCount)
{
    int id, found = 0;
    printf("Enter user id to update: ");
    scanf("%d", &id);

    for (int i = 0; i < *userCount; i++) {
        if (users[i].id == id) {
            found = 1;
            printf("User found\n");

            printf("Enter New Name (current: %s): ", users[i].name);
            scanf(" %[^\n]", users[i].name);

            printf("Enter New Address (current: %s): ", users[i].address);
            scanf(" %[^\n]", users[i].address);

            printf("Enter New Balance (current: %d): ", users[i].balance);
            scanf("%d", &users[i].balance);

            printf("User Updated Successfully!\n");
            printf("Updated User Details:\n");
            printf("User Name: %s\n", users[i].name);
            printf("User Address: %s\n", users[i].address);
            printf("User Balance: %d\n", users[i].balance);

            return;
        }
    }

    if (!found) {
        printf("User not found with id: %d\n", id);
    }
}

