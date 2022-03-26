#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>
#include <editline/history.h>


int main(int argc, char** argv){
   puts("Welcome to my shiny app");
   puts("This is version 1.0.0");
   
   while(1){
     
     char* input = readline("lipsy?> ");
     
     /* Add input to history */
      
     add_history(input);
     
     printf("%s\n", input);
     
     /*Free retrieved input */
     
     free(input);
   }
   return 0;
   
   }   
