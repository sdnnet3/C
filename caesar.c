// program that simple encodes a message with a key
// punctuation ignored, case reserved

#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(int argc, string argv[])
{
    if (argc == 2)
    {
        //check if char is a digit
        //convert to int, check against ascii value
        int hold;

        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            hold = (int) argv[1][i] - 48;
            if (hold >= 0 && hold <= 9)
            {
                continue;
            }
            else
            {
                printf("Usage: ./ caeser key\n");
                return 1;
            }
        }
        //convert to integer
        int k = atoi(argv[1]);

        //get user plain messege
        string plain = get_string("Plaintext: ");

        //add an array of length n - original string

        //ascii values and integers
        //97 = a
        //65 = A
        //key conversion
        //c_i = (p_i + k) % 26

        //loop through text to add key
        for (int i = 0, n = strlen(plain); i < n; i++)
        {
            //maintain caps and lowercase
            if (plain[i] >= 'a' && plain[i] <= 'z')
            {
                plain[i] = (plain[i] + k - 97) % 26 + 97;
            }
            else if (plain[i] >= 'A' && plain[i] <= 'Z')
            {
                plain[i] = (plain[i] + k - 65) % 26 + 65;
            }
            else
            {
                //if not a letter, skip and retain original character
                continue;
            }
        }

        //print encoded message
        printf("ciphertext: %s\n", plain);
        return 0;
    }
    printf("Usage: ./ caeser key\n");
    return 1;
}
