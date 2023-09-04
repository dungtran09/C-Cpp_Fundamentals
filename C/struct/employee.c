#include <stdio.h>
#include <stdlib.h>

struct emplooyee {
    char *name;
    int age;
    float salary;
};

float manager() {
    struct emplooyee manager;
    manager.age = 27;

    if (manager.age > 30) {
        manager.salary = 65.0;
    } else {
        manager.salary = 55.0;
    }
    return manager.salary;
}

int main(int argc, char *argv[]) {
    struct emplooyee emp1, emp2;
    printf("Enter the salary of emp1: ");
    scanf("%f", &emp1.salary);
    printf("Enter the salary of emp2: ");
    scanf("%f", &emp2.salary);

    printf("OUT PUT: \n");
    printf("Salary of emp1 is: %4.2f\n", emp1.salary);
    printf("Salary of emp2 is: %4.2f\n", emp2.salary);
    printf("Salary of manager is: %4.2f\n", manager());
    
    return 0;
}
