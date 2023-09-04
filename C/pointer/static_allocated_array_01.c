#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // static Allocated

    int averages[30];
    char name[20];

    // access array elements
    for (int i = 0; i < 10; i++) {
        averages[i] = 0.0 + i;
        name[i] = 'a' + i;
    }

    name[10] = '\0';
    
    printf("%d, %c, %s\n", averages[3], name[3], name);
    
    strcpy(name, "Doe john");
    printf("%s\n", name);
    
    return 0;
}
