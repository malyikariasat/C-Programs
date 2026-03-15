#include <stdio.h>
#include <stdlib.h>
int main(){
int a;    // stack variable - automatically managed
int *p;    // pointer on stack, will point to heap memory


// ===== FIRST ALLOCATION =====
    // malloc allocates memory on the heap
    // Returns void* pointer to the allocated memory
    // Optionally typecast to int* since we are storing integers not necessary
//p = (int*)malloc(sizeof(int)); 
p = malloc(1000); 
// Access heap memory through the pointer
*p = 10; // Store 10 in heap memory
printf("First value: %d\n", *p);  // Would print 10


// CRITICAL: Release heap memory back to OS
// Without this: MEMORY LEAK!
// The memory is freed, but p still holds the address


free(p); //if we dont do this older value of p would still sit in the memory


// p is now a DANGLING POINTER - points to freed memory!
// Do not do: *p = 20;  
// Would cause undefined behavior!
//p = NULL;  // Eliminates dangling danger



// ===== SECOND ALLOCATION =====
// Reuse the same pointer for new allocation
p=malloc(sizeof(int));
*p = 30;         // Store new value in new heap memory
printf("Second value: %d\n", *p);  // Would print 30

// ===== CLEANUP =====
free(p);         // Don't forget to free the second allocation too!
return 0;
}