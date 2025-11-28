#include <stdio.h>
int countVowels(char str[], int index)
{
    if (str[index] == '\0')
        return 0;
    char ch = str[index];
    int vowel = (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
                   ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
  
    return vowel + countVowels(str, index + 1);
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int total = countVowels(str, 0);

    printf("Number of vowels: %d\n", total);
    return 0;
}
