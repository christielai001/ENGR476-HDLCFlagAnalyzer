#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    char input[1024];       // the length of input that can be entered is 1024
    char saved_input[1024]; // new array to save input between flags
    int flag = 0;
    int count = 0; // to keep track of the the number of character entered
    int i = 0;
    int j = 0;

    printf("Please type characters or type E to exit the program: ");

    // The program loops to find the sequence '01111110' and if the sequence is
    // entered twice then it prints out the flag is dectected and anything
    // between the two sequence. The loop does not stop until user types E to exit the program
    while (1)
    {
        input[i] = getch();
        printf("%c", input[i]);

        if (input[i] == '0')
        {
            input[i] = getch();

            if (input[i] == '1')
            {
                printf("%c", input[i]);
                input[i] = getch();

                if (input[i] == '1')
                {
                    printf("%c", input[i]);
                    input[i] = getch();

                    if (input[i] == '1')
                    {
                        printf("%c", input[i]);
                        input[i] = getch();

                        if (input[i] == '1')
                        {
                            printf("%c", input[i]);
                            input[i] = getch();

                            if (input[i] == '1')
                            {
                                printf("%c", input[i]);
                                input[i] = getch();

                                if (input[i] == '1')
                                {
                                    printf("%c", input[i]);
                                    input[i] = getch();

                                    if (input[i] == '0')
                                    {
                                        printf("%c", input[i]);
                                        flag++; // increase everytime '01111110' is entered twice

                                        if (flag == 2) // 
                                        {
                                            saved_input[j] = '\0';
                                            printf("\nThe end flag has been detected: ");
                                            printf("%s\n", saved_input + 1);
                                            printf("Continue typing or Press E to exit\n");

                                            // reset everything so new inputs can be saved
                                            flag = 1;
                                            count = 0;
                                            j = 0;
                                            i = 0;
                                            
                                        }
                                        count = 0; // resets to zero when the flag is detected
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } 

        if (input[i] == 'E') // exits the program
        {
            printf(" Exiting the program\n");
            exit(0);
        }

        if (flag == 1) // saves the input after the first flag is detected
        {
            saved_input[j] = input[i];
            j++;
        }

        count = 0; // reset count
        i++;
   }

    return 0;
}