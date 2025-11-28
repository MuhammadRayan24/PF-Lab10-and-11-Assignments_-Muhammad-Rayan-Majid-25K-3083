#include <stdio.h>
#include <string.h>
int Palindrome(char str[]) 
{
    int start = 0;
    int end = strlen(str) - 1;

    // Remove newline at end if present
    if (str[end] == '\n') {
        str[end] = '\0';
        end--;
    }

    while (start < end) {
        char left = str[start];
        char right = str[end];

        // Convert uppercase → lowercase manually
        if (left >= 'A' && left <= 'Z')
            left += 32;

        if (right >= 'A' && right <= 'Z')
            right += 32;

        if (left != right)
            return 0;  // Not palindrome

        start++;
        end--;
    }

    return 1; // Palindrome
}

int main() {
    char words[5][20];

    printf("Enter 5 words:\n");
    for (int i = 0; i < 5; i++) {
        fgets(words[i], sizeof(words[i]), stdin);
    }

    printf("\n=== Palindrome Results ===\n");
    for (int i = 0; i < 5; i++) 
    {
        if (Palindrome(words[i]))
            printf("%s is Palindrome\n", words[i]);
        else
            printf("%s is Not Palindrome\n", words[i]);
    }
    return 0;
}
