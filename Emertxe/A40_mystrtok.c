#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

int is_delim(char c, char *delim);       //functions declaration 
char *my_strtok(char *str, char *delim);

int main()
{
    char srcString[50] , delim[50];
    
    printf("Enter the string  : ");      //string is read
    scanf("%s", srcString);
    
    __fpurge(stdout);
 
    printf("Enter the delimeter : ");      //delimiters are read
    scanf("\n%s", delim);
    __fpurge(stdout);
    
    char *token = my_strtok(srcString, delim);   //function call
    printf("Tokens :\n");
    
    while (token)  //function call till end of string
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);
    }
    
    
    return 0 ;
}

char *my_strtok(char *str, char *delim)      //function defenition
{
    static char *backup;   
    char *ret;

    if(!str)  //if not string,
    {
        str = backup;   //back up pointer address is saved to string base address
    }


    while(1)
    {
        if(is_delim(*str, delim))    //function call is to return string address
        {
            str++;
            continue;
        }
        if(*str == '\0')  //if string element is null,null returned
        {
            return NULL; 
        }
        break;
    }
    
    ret = str; //str address is saved to ret
    
    while(1)      
    {
        if(*str == '\0')   //whem str value is null
        {
          
            backup = str;   //str address is saved to backup pointer
            return ret;    //ret is returned
        }
        if(is_delim(*str, delim))  //if function returns
        {
            *str = '\0';     //value at address of string where delimiter occurs is changed to null 
            backup = str + 1; //backup pointer is updated to str+1
            return ret; //ret is returned
        }
        str++; //str incremented
    }
}



 int is_delim(char c, char *delim)    //function to check delimiters in the string
{
    while(*delim != '\0')
    {
        if(c == *delim)
            return 1;
        delim++;
    }
    return 0;
}
