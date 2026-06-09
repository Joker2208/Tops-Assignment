#include <stdio.h>

int main() {
    int num;
    printf("\nEnter your year: ");
    scanf("%d", &num);

    if(num % 4 == 0) {
        if(num % 100 == 0) {
            if(num % 400 == 0) {
                printf("\n%d is a leap year.", num);
            }
            else {
                printf("\n%d is not a leap year.", num);
            }
        }
        else {
            printf("\n%d is a leap year.", num);
        }
    }
    else {
        printf("\n%d is not a leap year.", num);
    }

    return 0;
}
