#include <stdio.h>

int main() {
    int sum = 0, m;
    
    // 1. The Front Door: Ask for the very first number before the loop
    printf("\nEnter a number: ");
    scanf("%d", &m);

    // 2. The Gatekeeper: Keep looping as long as the input is not 0
    while (m != 0) {
        
        // 3. The Filter: Only add the number to the sum if it is strictly positive
        if (m > 0) {
            sum = sum + m;
        }
        
        // 4. The Reset: Ask for the next number at the VERY bottom of the loop
        // This must happen every single time, whether the last number was positive or negative!
        printf("\nEnter numbers: ");
        scanf("%d", &m);
    }

    // 5. The Grand Finale: Print the total sum once the loop breaks
    printf("\nSum of all the numbers: %d\n", sum);

    return 0;
}