#include <stdio.h>

void main()
{

short int word1 = 255;
short int word2 = 127;
short int word3 = 0;


// AND &

//0000000011111111
//0000000001111111
//---------------- & AND
//0000000001111111 = 127

    word3 = word1 & word2;
    printf("%d\n", word3);


// OR |

word3 = 0;
//0000000011111111
//0000000001111111
//---------------- | OR
//0000000011111111 = 255

    word3 = word1 | word2;
    printf("%d\n", word3);

//  XOR ^

word3 = 0;
//0000000011111111
//0000000001111111
//---------------- | XOR
//0000000010000000 = 128

    word3 = word1 ^ word2;
    printf("%d\n", word3);

// example to quickswap values of word1 and word2
// instead of:
// word3 = word1;
// word1 = word2;
// word2 = word3;
// you can use XOR

// first with XOR find all exclusive bits set in word1 and word2, store that in word1
//0000000011111111 word1 255
//0000000001111111 word2 127
//---------------- | XOR
//0000000010000000 word1 128
word1 ^= word2;

// in word2 we store now all XOR-found bits from before, so we use word1 as a temp storage (mask) for the value second value switch
//0000000001111111 word2 127
//0000000010000000 word1 128
//---------------- | XOR
//0000000011111111 word2 255
word2 ^= word1;

// and finally we put'm back in word 1, because word2 has now the desired value which was in word1 before.
// so now it becomes the new XOR mask to turn word1 in the prvivious value of word2
//0000000010000000 word1 128
//0000000011111111 word2 255
//---------------- | XOR
//0000000001111111 word2 127
word1 ^= word2;
printf("word1: %d and word2: %d\n", word1, word2);

// NOTE:
// 3 times bitwise XOR two unsigned integer variables exchanges their value.
// A = A XOR B;
// B = B XOR A;
// A = A XOR B;

}
