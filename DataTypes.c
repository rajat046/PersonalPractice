#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;    
    char s[20];
    char sen[100];

    scanf("%c", &ch);
    scanf("%s", &s);
    scanf("\n");
    fgets(sen, 100, stdin);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s", sen);
}

