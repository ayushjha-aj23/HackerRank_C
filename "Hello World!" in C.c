#include <stdio.h>

int main() 
{
	
    char str[100];
    scanf("%[^\n]%*c", &str);
    /*scanf(ā%[^\n]%*cā,name);
    means that all the characters entered as the input, 
    including the spaces, until we hit the enter button 
    are stored in the variable, name; provided we allocate sufficient memory for the variable.*/
    
    printf("Hello, World!\n");
    printf("%s", str);   
    return 0;
}
