#include <stdio.h>

int main() {
    int age;

    printf("Enter Your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You may enter! \n");
    } else {
        printf("Sorry, you're too young! \n");
    }


    return 0;

}