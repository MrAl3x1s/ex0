#include "part1.h"

int main(void){
// necessary for letting the Clion debugger print correctly and not get stuck.
    #ifndef NDEBUG
        setbuf(stdout, 0);
    #endif
    printf("Enter size of input:\n");
    int input;
    if ((readInt(&input)) == false) {
        return RETURN_ERROR;
    }
    if (input < MIN_SIZE) {
        printf("Invalid size\n");
        return RETURN_ERROR;
    }

    return RETURN_SUCCESS;
}
