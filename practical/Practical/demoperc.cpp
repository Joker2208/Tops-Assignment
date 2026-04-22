#include <stdio.h>

int main() {
    float sub1, sub2, sub3, total_obtained, max_marks, percentage;
    
    // Example: 3 subjects, each out of 100
    printf("Enter marks for 3 subjects: ");
    scanf("%f %f %f", &sub1, &sub2, &sub3);
    
    total_obtained = sub1 + sub2 + sub3;
    max_marks = 300;
    
    // Formula to calculate percentage
    percentage = (total_obtained / max_marks) * 100;
    
    printf("Total Marks: %.2f\n", total_obtained);
    printf("Percentage: %.2f%%\n", percentage); // %% prints a literal % sign
    
    return 0;
}

