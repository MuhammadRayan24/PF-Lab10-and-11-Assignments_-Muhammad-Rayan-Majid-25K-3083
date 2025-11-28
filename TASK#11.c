#include<stdio.h>
#include<string.h>
int main()
{
    char words[5][15]={"banana", "apple", "grape", "peach", "cherry"};
char search[20];
int found=0;
printf("\n Enter the word to search: ");
fgets(search,sizeof(search),stdin);
search[strcspn(search,"\n")]='\0';
for(int i=0 ; i<5 ; i++)
{
    if(strcmpi(words[i],search)==0)
    {
        found=1;
        break;
    }
}
if(found)
    printf("\n Found!");
    else
     printf("\n Not Found!");
return 0;
}