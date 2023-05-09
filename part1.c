#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_STR_SIZE 256
#define MIN_SIZE 1
#define RETURN_SUCCESS 0
#define RETURN_FAILURE (-1)
int powerOfTwo(int);

int main(void){
    // necessary for letting the Clion debugger print correctly and not get stuck.
    #ifndef NDEBUG
        setbuf(stdout, 0);
    #endif
    printf("Enter size of input:\n");
    int size;
    scanf("%d", &size);
    if (size < MIN_SIZE) {
        printf("Invalid size\n");
        return RETURN_SUCCESS;
    }

    // allocate dynamic array to store all numbers.
    int *numbers = (int*) calloc(size, sizeof(int));
    #ifndef NDEBUG
    printf("\n[* Created pointer at address: 0x%xul]\n", &numbers);
    #endif
    // record every number in turn.
    printf("Enter numbers:\n");
    for (int i = 0; i < size; i++) {
        if (scanf( "%d", &numbers[i]) < 1) {
            printf("Invalid number\n");
            return RETURN_SUCCESS;
        }
        #ifndef NDEBUG
        printf("\n[* Recorded number: %d]\n", numbers[i]);
        #endif
    }

    int totalExponents = 0;

    for (int i = 0; i < size; i++) {
        int j;
        if ((j = powerOfTwo(numbers[i])) > RETURN_FAILURE) {
            printf("The number %d is a power of 2: %d = 2^%d\n", numbers[i], numbers[i], j);
            totalExponents += j;
        }
    }
    printf("Total exponent sum is %d", totalExponents);

    free(numbers);

    #ifndef NDEBUG
    printf("\n[* Freed pointer at address: 0x%xul]\n", &numbers);
    #endif

    return RETURN_SUCCESS;
}

/**
 * @param num an <code style="font-family:'Courier New'"><b>int</b></code>.
 * @return If <code style="font-family:'Courier New'">num</code> can be represented as a power of two, i.e:
 * <code style="font-family:'Courier New'">num = 2^j</code>, returns the exponent
 * <code style="font-family:'Courier New'">j</code>.
 * Otherwise, returns the value saved for failure: <code style="font-family:'Courier New'">RETURN_FAILURE</code> in the
 * header <a style="font-family:'Courier New'">General.h</a>.
 */
int powerOfTwo(int num) {

    int j = 0;
    int powerOfTwo = 1;

    for (; powerOfTwo <= num; j++, powerOfTwo *= 2) {
        if (powerOfTwo == num)
            return j;
    }

    return RETURN_FAILURE;
}
