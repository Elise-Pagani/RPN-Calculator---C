#include<stdio.h>
#include<string.h>
#include<math.h>

// used to define operators in the calc function. will maybe delete since redundant
int defineOp(char op[]) {
    if (strncmp(op, "+", 0) != 0 || strncmp(op, "-", 0) != 0 ||
        strncmp(op, "*", 0) != 0 || strncmp(op, "/", 0) != 0 ||
        strncmp(op, "^", 0) != 0) {
        return 1;
    }
    else
        return 0;
}

// performs operations
int calcReader(int a, int b, char op[]) {
    if(strncmp(op, "+", 0) != 0) {
        return a + b;
    }
    else if(strncmp(op, "-", 0) != 0) {
        return a - b;
    }
    else if(strncmp(op, "/", 0) != 0) {
        return a / b;
    }
    else if(strncmp(op, "*", 0) != 0) {
        return a * b;
    }
    else if(strncmp(op, "^", 0) != 0) {
        return (int) pow(a, b);
    }
    else return 0;
}

int postfixCalc(char str[]) {
    int size = strlen(str);
    char op[50];
    for (int i = size -1 ; i > -1; i--) {

    }
}

void testEquation(char input[], int expectedResult) {
    printf("Calculating %s\n", input);
    int result = 0; // implement later
    if(result == expectedResult) {
        printf("PASS: result was %d\n", result);
    } else {
        printf("FAIL: expected %d but got %d\n", expectedResult, result);
    }

}

int main(void) {
    testEquation("1 2 +", 3);
    testEquation("2 3 ^", 8);
    testEquation("3 4 - 5 +", 4);
    testEquation("4 8 2 + -", -6);
    testEquation("3 4 + 2 * 7 /", 2);
}
