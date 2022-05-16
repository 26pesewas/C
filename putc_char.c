#include <stdio.h>

//the putc function
int main()
{
    int ch;

    ch = 97; //the numeric value of a
    printf("The character that has numeric value of 97 is:\n");
    putc(ch, stdout);

    return 0;
}

//the putchar function: takes only one argument
//difference between putc and putchar is that the latter needs only one argument
//to contain the character

int main()
{

    putchar(65);//prints A
    putchar(10);//prints newline character
    putchar(66);//prints B
    putchar(10);
    putchar(67);//prints C
    return 0;
}
