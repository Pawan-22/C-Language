#include<stdio.h>
#include<string.h>

int main()
{
    char topic[] = "String related Functions";
    char topic1[] = " are cool to learn";
    char word[10] ;

    printf("%d\n", strlen(topic));  // strlen() => counts string length. counts space as well.
   
    strcat(topic, topic1); // concatenate two strings. result will be stored in topic.
    printf("%s\n", topic);

    strcpy(topic1, topic); // copy topic to topic1
    printf("%s\n", topic1);

    strrev(topic1); // reverse the string
    puts(topic1);  // puts functions as printf.

    puts("Enter a word\n");
    gets(word); // takes input
    puts(word);

    printf("\nLower String is: %s",strlwr(word));  // converts to lower  
    printf("\nUpper String is: %s",strupr(word));  // converts to upper
    

return 0;
}