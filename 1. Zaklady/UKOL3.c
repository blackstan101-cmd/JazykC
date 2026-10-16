#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char to_upper(char c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (char)(c-'a'+'A');
    }
    return c;
}

int main(int argc, char *argv[]) 
{
    int len = strlen(argv[1]);
    char *word = (char *)malloc(len + 1);
    strcpy(word, argv[1]);
    printf("%s\n",word);
    for (int i = 0; i<len; i++)
    {
        word[i] = to_upper(word[i]);
    }
    printf("%s\n",word);
    free(word);  
    
    
    
/*
    while(i < argc)
    {
        upper[i] = to_upper(*argv[i]);
        i++;
    }
    i=0;
    
    while(i < argc)
    {
        printf("%c",*argv[i]);
        i++;
    }
    i=0;

    printf("\n");
    while(i < argc)
    {
        printf("%c",upper[i]);
        i++;
    }*/
    return 0;
}