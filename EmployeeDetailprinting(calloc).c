#include <stdio.h>
#include <stdlib.h>

struct employee {
    int empno;
    char name[100];
    float salary;
};

int main() {
    int n, i;
    struct employee *emp_ptr;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Allocate memory for n employees
    emp_ptr = (struct employee *)calloc(n, sizeof(struct employee));
    if (emp_ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit program if memory allocation fails
    }

    // Input employee details
    printf("Enter employee details (EmpNo Name Salary):\n");
    for (i = 0; i < n; i++) {
        printf("Employee %d:\n", i + 1);
        scanf("%d %s %f", &emp_ptr[i].empno, emp_ptr[i].name, &emp_ptr[i].salary);
    }

    // Display employee details
    printf("\nEmployee Details:\n");
    for (i = 0; i < n; i++) {
        printf("%d  %.2f  %s\n", emp_ptr[i].empno, emp_ptr[i].salary, emp_ptr[i].name);
    }

    // Free allocated memory
    free(emp_ptr);

    return 0;
}
