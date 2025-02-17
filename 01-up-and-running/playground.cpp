#include <cstdio>

int main() {
    int the_answer = 42;
    int lucky_number = the_answer / 6;
    printf("The Lucky Number is : %d\n", lucky_number);

    int x = 0;
    bool equality = 42 == x;
    printf("42 is %d to x\n", equality);
    bool equality_1 = 0 == x;
    printf("42 is %d to x\n", equality_1);

    return 0;
}