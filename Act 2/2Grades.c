#include <stdio.h>

// Define a structure to store the grades for the course
struct Grades {
    float t1; // Test 1 (5%)
    float p1; // Project 1 (25%)
    float t2; // Test 2 (20%)
    float p2; // Project 2 (15%)
    float t3; // Test 3 (20%)
    float p3; // Project 3 (15%)
};

// Function to calculate the final grade
float calculate_final_grade(struct Grades g) {
    return (g.t1 * 0.05) + 
           (g.p1 * 0.25) + 
           (g.t2 * 0.20) + 
           (g.p2 * 0.15) + 
           (g.t3 * 0.20) + 
           (g.p3 * 0.15);
}

int main() {
    struct Grades studentGrades;
    
    // Input the grades
    printf("Enter the grade for Test 1 (t1): ");
    scanf("%f", &studentGrades.t1);
    
    printf("Enter the grade for Project 1 (p1): ");
    scanf("%f", &studentGrades.p1);
    
    printf("Enter the grade for Test 2 (t2): ");
    scanf("%f", &studentGrades.t2);
    
    printf("Enter the grade for Project 2 (p2): ");
    scanf("%f", &studentGrades.p2);
    
    printf("Enter the grade for Test 3 (t3): ");
    scanf("%f", &studentGrades.t3);
    
    printf("Enter the grade for Project 3 (p3): ");
    scanf("%f", &studentGrades.p3);
    
    // Calculate the final grade
    float finalGrade = calculate_final_grade(studentGrades);
    
    // Output the final grade
    printf("The final grade for the Operating Systems course is: %.2f\n", finalGrade);
    
    return 0;
}
