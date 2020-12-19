// Sameh Shahin ew20b001

#include <stdio.h>

// prototypes
int strlength(char s[]);
int is_char(char letter);
void get_char_only_string(int line_length, char input_line[], char char_line[]);
void rev_string(char char_line[], char char_line_rev[]);
int compare_strings_same_size(char s1[], char s2[]);

int main()
{
    int is_palindrome = 1;
    int max_char_length = 80;
    char input_line[max_char_length];
    char char_line[max_char_length];
    char char_line_rev[max_char_length];

    // read input line and get it's length
    fgets(input_line, max_char_length, stdin);
    int line_length = strlength(input_line);

    // initial check if palindrome or not based on length (carefull! additional \0 is added)
    if (line_length > 2)
    {
        // make a char only string out of input
        get_char_only_string(line_length, input_line, char_line);

        // get a char only reversed string
        rev_string(char_line, char_line_rev);

        // check if they are equal
        is_palindrome = compare_strings_same_size(char_line, char_line_rev);
    }

    // print output matrix
    if (is_palindrome)
    {
        printf("palindrome\n");
    }
    else
    {
        printf("not a palindrome\n");
    }

    return 0;
}

//****** Procedures ******//

int strlength(char s[])
{
    int i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}

int is_char(char letter)
{
    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void get_char_only_string(int line_length, char input_line[], char char_line[])
{
    int i = 0;
    int j = 0;
    char check_char;
    for (i; i < line_length; i++)
    {
        check_char = input_line[i];
        if (is_char(check_char))
        {
            char_line[j] = input_line[i];
            j++;
        }
    }
    char_line[j] = '\0';
}

void rev_string(char char_line[], char char_line_rev[])
{
    int j = 0;
    int line_length = strlength(char_line);

    for (int i = 0; i < line_length; i++)
    {
        char_line_rev[line_length - 1 - i] = char_line[i];
        j++;
    }
    char_line_rev[line_length] = '\0';
}

int compare_strings_same_size(char s1[], char s2[])
{
    int size = strlength(s1);
    char compare_char_1, compare_char_2;
    int result = 1;

    for (int i = 0; i < size; i++)
    {
        // convert lower case to upper case
        compare_char_1 = s1[i] >= 'a' ? s1[i] - 32 : s1[i];
        compare_char_2 = s2[i] >= 'a' ? s2[i] - 32 : s2[i];

        if (compare_char_1 != compare_char_2)
        {
            result = 0;
        }
    }
    return result;
}

//****** end Procedures ******//