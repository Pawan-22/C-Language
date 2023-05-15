
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // File Pointer declared
    FILE *ptr;

    // File opened
    ptr = fopen("./Hello.txt", "w");

    // Failed Condition
    if (ptr == NULL)
    {
        printf("Error Occurred While creating a "
               "file !");
        exit(1);
    }

    // File closed
    fclose(ptr);

    // Data is finally Inserted
    printf("File created\n\n");

    return 0;
}
