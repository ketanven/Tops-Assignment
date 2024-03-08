
//17.WAP to show difference between Structure and Union.


#include <stdio.h>

// Structure definition
struct MyStruct {
    int x;
    char y;
};

// Union definition
union MyUnion {
    int x;
    char y;
};

int main() {
    struct MyStruct s;
    union MyUnion u;

    // Input for structure
    printf("Enter an integer for structure x: ");
    scanf("%d", &s.x);
    printf("Enter a character for structure y: ");
    scanf(" %c", &s.y); // Note the space before %c to consume any leading whitespace
    printf("Structure: x = %d, y = %c\n", s.x, s.y);

    // Input for union
    printf("Enter an integer for union x: ");
    scanf("%d", &u.x);
    printf("Union: x = %d\n", u.x);
    printf("Enter a character for union y: ");
    scanf(" %c", &u.y); // Note the space before %c to consume any leading whitespace
    printf("Union: x = %d, y = %c\n", u.x, u.y);

    return 0;
}

