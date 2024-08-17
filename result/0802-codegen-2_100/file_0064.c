
#include <stdio.h>
#include <string.h>

int a() {
    char s[80];
    char *t;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = 0; // Remove the newline character from the string
    t = strtok(s, " "); // Tokenize the string based on spaces
    printf("Tokenized string: %s\n", t);
    return 0;
}

int main() {
    a();
    return 0;
}
