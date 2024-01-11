// Define a macro to calculate the maximum of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

#include <stdio.h>

int main()
{
    // Create a file pointer
    FILE *fp = NULL;
    // Open a file in write mode
    fp = fopen("test.txt", "w");
    // Check if the file is opened successfully
    if (fp == NULL)
    {
        printf("File open failed!\n");
        return -1;
    }
    // Define two integer variables
    int x = 10, y = 20;
    // Call the macro to calculate the maximum
    int z = MAX(x, y);
    // Write the maximum to the file
    fprintf(fp, "The maximum is: %d\n", z);
    // Close the file
    fclose(fp);
    // Print success message
    printf("File write successful!\n");
    return 0;
}
