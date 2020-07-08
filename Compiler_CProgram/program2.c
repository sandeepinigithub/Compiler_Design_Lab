#include <stdio.h> 
#include<conio.h>
#include<string.h>
#include <stdbool.h> /*C90 does not support the boolean data type.C99 does include it with this include*/

bool isKeyword(char* str) 
{ 
    if (!strcmp(str, "if") || !strcmp(str, "else") || 
        !strcmp(str, "while") || !strcmp(str, "do") ||  
        !strcmp(str, "break") ||  
         !strcmp(str, "continue") || !strcmp(str, "int") 
        || !strcmp(str, "double") || !strcmp(str, "float") 
        || !strcmp(str, "return") || !strcmp(str, "char") 
        || !strcmp(str, "case") || !strcmp(str, "char") 
        || !strcmp(str, "sizeof") || !strcmp(str, "long") 
        || !strcmp(str, "short") || !strcmp(str, "typedef") 
        || !strcmp(str, "switch") || !strcmp(str, "unsigned") 
        || !strcmp(str, "void") || !strcmp(str, "static") 
        || !strcmp(str, "struct") || !strcmp(str, "goto")){        	
        	return (true);        	
		} 		     
    return (false); 
}

int main() {
   char str[20]; 
   puts("Enter your string:");
   gets(str); 
   if (isKeyword(str) == true) 
        printf("%s IS A KEYWORD\n",str); 
   else 
        printf("%s IS NOT A KEYWORD\n",str); 
   return 0;
}


