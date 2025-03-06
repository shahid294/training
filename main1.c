#include <stdio.h>
#define MAX_USERS 3
struct user{;
    int id;
    char name[100];
    int balance;
};
int main()
{
     struct user users[MAX_USERS];
    for(int i= 0;i<MAX_USERS;i++){

        printf("Enter the id : ");
        scanf("%d",&users[i].id);

        printf("Enter the name : ");
        scanf("%s",&users[i].name);

        printf("Enter the balance : ");
        scanf("%d",&users[i].balance);
    }
    for(char i=0;i<MAX_USERS;i++){
        printf("user ID : %d\n", users[i].id);
         printf("user name : %s\n", users[i].name);
         printf("user balance : %d\n", users[i].balance);
    }
    int find, userindex;
    printf("Enter the user id to check the balance : ");
    scanf("%d", &find);
    for(int i=0;i<MAX_USERS;i++){
        if(find==users[i].id){
                printf("balance of the user %d : %d", find, users[i].balance);
        }
    }
    int credit, debit;
    printf("Enter if u want to credit or debit : ")
    scanf("%s",&)
}





