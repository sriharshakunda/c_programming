#include <stdio.h>
#include <math.h>

/*
1. Add two charachters
2. Input a string and prints the string to screen
3. Add two strings and forms into one sentence
*/

int main(){
    char a,b;
    char c[50];
    char d[50];

    printf("Input any two charachters:\n");
    scanf("%c%c",&a,&b);

    while (getchar() != '\n');
    printf("You entered: %c%c\n",a,b);
    printf("Enter a new string:\n");

    fgets(c,sizeof(c),stdin);
    printf("Your string is:");
    puts(c);



   
   
    return 0;
}