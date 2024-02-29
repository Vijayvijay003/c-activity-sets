#include <stdio.h>
#include <string.h>

// Function Declarations
void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

// Function Definitions
void input_string(char* a, char* b) {
    printf("Enter the main string: ");
    scanf("%s", a);
    printf("Enter the substring to search: ");
    scanf("%s", b);
}

int sub_str_index(char* string, char* substring) {
    int index = -1;
    char* temp = strstr(string, substring);
    if (temp) {
        index = temp - string;
    }
    return index;
}

void output(char *string, char *substring, int index) {
    if (index == -1) {
        printf("Substring not found in the main string.\n");
    } else {
        printf("Substring '%s' found at index %d in the main string '%s'.\n", substring, index, string);
    }
}

int main() {
    char a[100], b[100];
    input_string(a, b);
    int index = sub_str_index(a, b);
    output(a, b, index);
    return 0;
}