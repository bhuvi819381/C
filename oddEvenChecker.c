#include <stdio.h>

int main() {

    int num;

    printf("Enter a num: ");
    scanf("%d", &num);

    if (num % 2 == 0)   
    {
        printf("It's an Even number.\n");
    } else {
        printf("It's an Odd number. \n");
    }
    

    return 0;
}