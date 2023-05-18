#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[] = "My name is Aakasmik";  
    char ch = '*';  
      
    //Replace space with specific character ch  
    for(int i = 0; i < strlen(string); i++){  
        if(string[i] == ' ')  
            string[i] = ch;  
    }  
      
    printf("String after replacing spaces with given character: \n");  
    printf("%s", string);  
          
    return 0;  
} 
