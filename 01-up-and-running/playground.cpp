#include <cstdio>

int step_function(int test_value) {
    int result = 0;
    if (test_value < 0) {
        result = -1;
    } else if (test_value > 0) {
        result = 1;
    }

    return result;
}

int main() {
    int the_answer = 42;
    int lucky_number = the_answer / 6;
    printf("The Lucky Number is : %d\n", lucky_number);

    int x = 0;
    bool equality = 42 == x;
    printf("42 is %d to x\n", equality);
    bool equality_1 = 0 == x;
    printf("42 is %d to x\n", equality_1);
    
    int x1 = 1;
    if (x1 > 0) printf("Positive.\n");
    else if (x1 < 0) printf("Negative.\n");
    else printf("Zero.\n");
    
    int value1 = step_function(100); // value1 is  1
    int value2 = step_function(0);   // value2 is  0
    int value3 = step_function(-10); // value3 is -1
    printf("Test  step fucntion: %d, %d, and %d.\n", value1, value2, value3);


    
    return 0;
}