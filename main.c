//C program to find length of the string without using standard library function strlen()


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    int i;

    printf("ENTER A STRING: ");
    scanf("%s",s);

    for(i=0;s[i]!='\0';++i);

    printf("LENGTH OF STRING: %d", i);
    return 0;
}


//C program to concatenate two strings without using standard library function strcat()


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[100], str2[100], i, j;
    printf("\n ENTER FIRST STRING:");
    scanf("%s",str1);
    printf("\n ENTER SECOND STRING:");
    scanf("%s",str2);
    for(i=0; str1[i]!='\0'; ++i);
    for(j=0; str2[j]!='\0'; ++j, ++i){
        str1[i] = str2[j];
    }
    str1[i]='\0';
    printf("\n CONCATED STRING IS : %s",str1);
    return 0;
}


=================================================================================================================================
//C program to concatenate two strings without using standard library function strcat()


#include <stdio.h>
#include <stdlib.h>
void reverse_string(char*,int,int);
int main()
{
    char string_array[200];
     //This array would hold the string upto 200 char.
    printf("ENTER ANY STRING: ");
    scanf("%s", &string_array);

    //calling our user defined function
    reverse_string(string_array,0,strlen(string_array)-1);
    printf("/n REVERSED STRING IS: %s",string_array);
    return 0;
}
void reverse_string(char*x, int start, int end)
{
    char ch;
    if (start >= end)
        return;

    ch = *(x+start);
    *(x+start) = *(x+end);
    *(x+end) = ch;

    //Function calling itself: Recursion
    reverse_string(x, ++start, --end);
}


=================================================================================================================================
//C program to copy a string without using standard library function strcpy()


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[1000],s2[1000];
    int i;

    printf("ENTER ANY STRING: ");
    gets(s1);
    for(i=0; s1[i]!='\0';i++)// or for(i=0; s1[i];i++)
    {
        s2[i] = s1[i];
    }
    s2[i]='\0';

    printf("original string ='%s'\n",s1);
    printf("copied string ='%s'\n",s2);

    return 0;
}


=================================================================================================================================
