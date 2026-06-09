#include<stdio.h>
int main(){
    int arr[6], n, m = 0;

    for(int i = 0; i < 6; i++){
        printf("\nEnter number: ");
        scanf("%d", &arr[i]);
    }

    printf("\nEnter search value: ");
    scanf("%d", &n);

    for(int i = 0; i < 6; i++){
        if(n == arr[i]){
            m = 1;
            printf("\nElement found at index: %d", i);
        }
    }

    if(m == 0){
        printf("\nNot found");
    }
}