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

    int *numbers = (int*) calloc(size, sizeof(int));


    return RETURN_SUCCESS;
}
