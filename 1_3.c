// Write a C program which declares a char array variable and allocate 80 bytes for it.
// (char word[80] or char* word=(char*)malloc(80);)
// Read a word from the keyboard with scanf/fgets functions into the variable.
// Decide the length of it with strlen built in function! (Do not forget about including string.h!

#include <stdio.h>
#include <string.h>

int main(){
    char word[80];
    printf("Enter a word");
    fgets(word, 80, stdin);

    int len = strlen(word);
    printf("The word is %d char long.\n", len);
    return 0;
}

// Is there any difference between the usage of scanf and fgets? How can you read in more then one word?)