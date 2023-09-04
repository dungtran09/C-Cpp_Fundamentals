#include <stdio.h>
#include <string.h>

// defining a struct type
struct studentT {
    char name[64];
    int age;
    float gpa;
    int grad_y;
};

int checkID(struct studentT s1, int min_age);

int main() {
    
    int can_vote;
    // declaring variables of struct types
    struct studentT student;
    
    strcpy(student.name, "Tran Dung");
    student.age = 17;
    student.gpa = 3.5;
    student.grad_y = 2014;
    
    
    can_vote = checkID(student, 18);

    if (can_vote) {
        printf("%s is %d years old can can vote.\n", student.name, student.age);
    } else {
        printf("%s is %d years old can cannot vote.\n", student.name, student.age);
    }
    
    return 0;
}


int checkID(struct studentT s, int min_age) {
    int rer = 1;

    if (s.age < min_age) {
        rer = 0;
        s.age  = min_age + 1;
    }
    printf("%s is %d years old.\n", s.name, s.age);
    
    return rer;

}
