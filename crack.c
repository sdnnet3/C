#include <cs50.h>
#include <stdio.h>
#include <crypt.h>
#include <string.h>

//Program brute force cracks passwords by checking hash values against sequenced values
//only a-z, A-Z passwords

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./crack (hash)\n");
        return 1;
    }
    
    string hash = argv[1];
    char hold[3] = "aa\0";
    
    for (int i = 0; i < 2; i++)
    {
        hold[i] = hash[i];
    }
    
    string pwstring = "\0abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    //26 upper and lower case, plus a null.
    //strings are pointers to an address which terminates with a null
    //cs50 lecture week 2
    int count = 53;
    char pw_loop[6] = "\0\0\0\0\0\0";
    printf("Working...");
    //first digit
    for (int i = 0; i < count; i++)
    {
        //second digit
        for (int j = 0; j < count; j++)
        {
            //third digit
            for (int k = 0; k < count; k++)
            {
                //fourth digit
                for (int l = 0; l < count; l++)
                {
                    //fifth digit
                    //skip first part of pwstring, which is null?
                    for (int m = 1; m < count; m++)
                    {
                        pw_loop[0] = pwstring[m];
                        pw_loop[1] = pwstring[l];
                        pw_loop[2] = pwstring[k];
                        pw_loop[3] = pwstring[j];
                        pw_loop[4] = pwstring[i];
                        if (strcmp(crypt(pw_loop, hold), hash) == 0)
                            {
                            printf("\nPassword Cracked: %s\n", pw_loop);
                            return 0;
                            }
                    }
                }
                
            }
        }
    }
    printf("No password cracked\n");
    return 1;
}
