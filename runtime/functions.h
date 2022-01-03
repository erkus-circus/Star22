#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// struct for a function
// contains number of arguments, pointer to index in file the function starts at
// contains a program counter
// the instructions of the function
typedef struct {
    int num_args;
    int num_instructions;
    int start_index;
    int pc;
} function;

// array of functions
function *functions;



// function for setting the functions array
void set_functions(unsigned char* file, unsigned int index, unsigned int fileSize);

// copying a function from the functions array to a new function
function copy_function(int index);

// function for printing a function
void print_function(function f);



#endif // FUNCTIONS_H