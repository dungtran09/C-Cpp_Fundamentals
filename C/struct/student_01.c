typedef struct {
    int month;
    int day;
    int year;
} Date;

typedef struct{
    int  id;
    char *firstName;
    char *lastName;
    double gpa;
    Date dateOfBirth;
} Student;
        
/*
 * Create the function a new Student instance whith  the given values
 * */

Student *createStudent(int id,
                       char *firstName,
                       char *lastName,
                       double gpam,
                       int month,
                       int day,
                       int year);


