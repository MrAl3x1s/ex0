#include "part1.h"

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
    printf("\n[* Created pointer at address: %d]\n", &numbers);
    #endif
    // record every number in turn.
    printf("Enter numbers:\n");
    // clean input stream.
    scanf("%*s");
    for (int i = 0; i < size; i++) {
        if (scanf("%d\n", &numbers[i]) < 1) {
            printf("Invalid number\n");
            return RETURN_SUCCESS;
        }
        #ifndef NDEBUG
        printf("\n[* Recorded number: %d]\n", numbers[i]);
        #endif
    }
    free(numbers);

    #ifndef NDEBUG
    printf("\n[* Freed pointer at address: %d]\n", &numbers);
    #endif

    return RETURN_SUCCESS;
}
