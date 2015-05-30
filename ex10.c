#include <stdio.h>

int main(int argc, char *argv[]) {
    
    // go through each string in argv
    // why am I skipping argv[0]?
    for(int i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    char *states[] = {
        "Califonia", "Oregon",
        "Washington", "Texas",
    };

    // let's make our own array of strings
    int num_states = 4;
    for(int i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
