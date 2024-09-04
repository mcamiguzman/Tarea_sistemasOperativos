#include <stdio.h>


struct Grades {
    float t1; 
    float p1; 
    float t2; 
    float p2; 
    float t3; 
    float p3; 
};

// Function to calculate the final grade
float calculate_final_grade(struct Grades g) {
    return (g.t1 * 0.05) + (g.p1 * 0.25) + (g.t2 * 0.20) + (g.p2 * 0.15) + (g.t3 * 0.20) + (g.p3 * 0.15);
}

int main() {
    struct Grades studentGrades;
    
    printf("Enter the grade for Test 1: ");
    scanf("%f", &studentGrades.t1);
    
    printf("Enter the grade for Project: ");
    scanf("%f", &studentGrades.p1);
    
    printf("Enter the grade for Test 2: ");
    scanf("%f", &studentGrades.t2);
    
    printf("Enter the grade for Project 2: ");
    scanf("%f", &studentGrades.p2);
    
    printf("Enter the grade for Test 3: ");
    scanf("%f", &studentGrades.t3);
    
    printf("Enter the grade for Project 3: ");
    scanf("%f", &studentGrades.p3);
    
    float finalGrade = calculate_final_grade(studentGrades);
    

    printf("The final grade is: %.2f\n", finalGrade);
    
    return 0;
}
