#include<stdio.h>
#include<string.h>

int main()
{
    char topic[] = "String related Functions";
    char topic1[] = " are cool to learn";

    printf("%d\n", strlen(topic));  // strlen() => counts string length. counts space as well.
   
    strcat(topic, topic1); // concatenate two strings. result will be stored in topic.
    printf("%s\n", topic);

    strcpy(topic1, topic); // copy topic to topic1
    printf("%s\n", topic1);

return 0;
}