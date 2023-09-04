#include <stdio.h>
#include <stdlib.h>

struct CharactorsSet {
    char charLower[26];
    char charUpper[26];
    int codeLower[26];
    int codeUpper[26];
};
struct CharactorsSet* addkeyValue(struct CharactorsSet *ptr) {
    int i;
     
    struct CharactorsSet *p = (struct CharactorsSet*)malloc(sizeof(struct CharactorsSet));

    int Lower = 97;
    int Upper = 65;
    for (i = 0; i < 26; i++) {
        p->charLower[i] = Lower;
        p->charUpper[i] = Upper;

        p->codeLower[i] = Lower;
        p->codeUpper[i] = Upper;
        ++Upper;
        ++Lower;
    }
    return p;
}

void print(struct CharactorsSet *ptr) {

    for (int i = 0; i < 26; i++) {
        printf("Upper: %c - Lower: %c\n",ptr->charUpper[i], ptr->charLower[i]);

    }
}

int main() {
    
    struct CharactorsSet *ptr;
    ptr = addkeyValue(ptr);
    print(ptr);
    
    free(ptr);
    ptr = NULL;
    
    return 0;
}
