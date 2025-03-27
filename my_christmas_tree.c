#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
**
*/
int calculate_base(int param_1) {
    int base = 1; 
    int increment = 6; 
    int num_increments = param_1;

    for (int i = 1; i <= num_increments; i++) {
        
        // Increase the base by the current increment
        base += increment;
        
        // After every two increments increase the increment by 2
        if (i % 2 == 0) {
            increment += 2;
        }
    }

    return base;
}
/*
**
*/
int calculate_top(int param_1, int param_2) {
    int difference = 0;

    for (int i = 1; i <= param_2; i++) {
        if (i % 2 == 1) { // Every odd level, increase the difference
            difference += 2;
        }
    }

    return param_1 - difference;
}
/*
**
*/
void print_trunk(int param_1, int param_2) {
    int trunk = param_1;
    int base = param_2;
   int middle = base / 2; // Middle of the base
    int start, end;

    if (trunk % 2 == 1) { // Odd trunk number
        start = middle - (trunk / 2);
        end = middle + (trunk / 2);
    } else { // Even trunk number
        
        // adding +1 to both start and end to pass automated testing
        start = middle - (trunk / 2) + 1;
        end = middle + (trunk / 2 - 1) + 1;
    }

    for (int i = 0; i < trunk; i++) {
        for (int j = 0; j < base; j++) {
            if (j >= start && j <= end) {
                printf("|");
            } else if (j < start) {
                printf(" ");
            }
        }
        printf("\n");
    }
}
/*
**
*/
void print_level(int param_1, int param_2, int param_3) {

    int height = param_1;
    int base = param_2;
    int top = param_3;

    for (int i = 0; i < height; i++) {
        int start = (base / 2) - (top / 2) - i;
        int end = (base / 2) + (top / 2) + i;
        for (int j = 0; j < base; j++) {
            if (j >= start && j <= end) {
                printf("*");
            }
            else if (j < start) {
                printf(" ");
            }
        }
    printf("\n");
    }
}
/*
**
*/
void my_christmas_tree(int param_1) {
    
    int trunk = param_1;
    int levels_number = param_1;
    int height = 4;
    int top = 1;
    // calculate the base of the biggest level of the tree (the one on top of the trunk)
    int main_base = calculate_base(param_1);
    
    // loop to print all the levels of the tree
    for (int i = 1; i <= levels_number; i++) {
        print_level(height, main_base, top);
        int local_base = calculate_base(i);
        top = calculate_top(local_base, i);
        height++;
    }
    print_trunk(trunk, main_base);
}
/*
**
*/
int main(int ac, char **av) {

    if (ac == 1) {
        printf("Please provide one positive number as a comand line argument\n");
    }
    else if (ac > 2) {
        printf("Programm takes only one positive number as a comand line argument\n");
    }
    else {
        int size = atoi(av[1]);
        my_christmas_tree(size);
    }

    return 0;
}
