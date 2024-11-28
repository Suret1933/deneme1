#include <stdio.h>
#include <stdlib.h>

char* allocateString(int size){
    if(size == 0){
        return NULL;
    }
    char* ptr=(char*)calloc(size, sizeof(char)) ;
    
    
    
    return ptr;
}
int main() {
    char *(*function)(int) = allocateString ;
    int size =6 ;
    char* allocatedMemory = function(size);
    if (allocatedMemory == NULL ){
        printf("failed\n");
        
    }
    else{
        printf("allocatedMemory adress:%p", (void*)allocatedMemory);
        free(allocatedMemory) ;
    }
    return 0 ;
}
