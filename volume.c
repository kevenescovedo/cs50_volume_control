// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// byte
typedef  uint8_t BYTE;
// 2 BYTES
typedef int16_t TWO_BYTES;

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file
    BYTE headers[HEADER_SIZE];
    fread(headers,sizeof(BYTE),HEADER_SIZE,input);
    // escrever os bites do cabeçalho
    fwrite(headers, HEADER_SIZE, 1, output);


    // TODO: Read samples from input file and write updated data to output file
     TWO_BYTES two_bytes;
     while(fread(&two_bytes,sizeof(TWO_BYTES),1,input) != 0)
     {
        TWO_BYTES tb = two_bytes;
        two_bytes *= factor;

        fwrite(&two_bytes,sizeof(TWO_BYTES),1,output);
     }
    // Close files
    fclose(input);
    fclose(output);
}
