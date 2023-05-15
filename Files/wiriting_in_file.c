#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    ptr = fopen("./Hello.txt", "w+");

    if (ptr == NULL)
    {
        printf("Error Occurred While writing to a text "
               "file !");
        exit(1);
    }

    // Data to be inserted
    char str[] = "Inserted Text";

    // Puts data inside the file
    fputs(str, ptr);

    // File closed
    fclose(ptr);

    // Data is finally Inserted
    printf("Data Written Inside the file\n\n");

    return 0;
}
