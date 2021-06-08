
/*
    Realization principle
         Convert integer data into bits, and display characters by judging the bits.

         12:00:00 Each number occupies 8 bits per line, and 6 numbers require 48 bits, which are stored in 2 32-bit int data.
         A 2-dimensional array unsigned int dig[7][2] is used here to store 7 rows of 48-bit data
         For example, 0, can be expressed as
	######## // 1 number requires 8 digits, 7 lines
    ##    ##
    ##    ##
    ##    ##
    ##    ##
    ##    ##
    ########

         Then dig[0][0] = 0xFF000000;
        dig[1][0] = 0xC3000000;
        dig[2][0] = 0xC3000000;
        dig[3][0] = 0xC3000000;
        dig[4][0] = 0xC3000000;
        dig[5][0] = 0xC3000000;
        dig[6][0] = 0xFF000000;

	Then 12 can be expressed as
	## 		  ######## // 1 number requires 8 digits, 7 lines
    ##              ##
    ##              ##
    ##        ########
    ##        ##
    ##        ##
    ##        ########

         Then dig[0][0] = 0xFFFF0000;
        dig[1][0] = 0xC3030000;
        dig[2][0] = 0xC3030000;
        dig[3][0] = 0xC3FF0000;
        dig[4][0] = 0xC3C00000;
        dig[5][0] = 0xC3C00000;
        dig[6][0] = 0xFFFF0000;
*/

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define DISPLAY_CHAR        "#"         // Digital clock displays characters
#define DELIMITER_CHAR      " @ "       // Digital clock divider, there is a space on the left and right

// Show color code
#define NONE                 "\e[0m"
#define BLACK                "\e[0;30m"
#define L_BLACK              "\e[1;30m"
#define RED                  "\e[0;31m"
#define L_RED                "\e[1;31m"
#define GREEN                "\e[0;32m"
#define L_GREEN              "\e[1;32m"
#define BROWN                "\e[0;33m"
#define YELLOW               "\e[1;33m"
#define BLUE                 "\e[0;34m"
#define L_BLUE               "\e[1;34m"
#define PURPLE               "\e[0;35m"
#define L_PURPLE             "\e[1;35m"
#define CYAN                 "\e[0;36m"
#define L_CYAN               "\e[1;36m"
#define GRAY                 "\e[0;37m"
#define WHITE                "\e[1;37m"

#define BOLD                 "\e[1m"
#define UNDERLINE            "\e[4m"
#define BLINK                "\e[5m"
#define REVERSE              "\e[7m"
#define HIDE                 "\e[8m"
#define CLEAR                "\e[2J"
#define CLRLINE              "\r\e[K" //or "\e[1K\r"

//  0xFF    ########
//  0xC3    ##    ##
//  0xC0    ##
//  0x03          ##
// Hexadecimal data corresponding to the broken code
unsigned char dig_hex[4]={0xFF, 0xC3, 0xC0, 0x03};
// Decimal conversion array
unsigned int dig[7][2];

void Input_Data(unsigned char n, unsigned char d)
{
    unsigned char i, a, b, m;

    // Determine whether to use the first or second int storage
    if(n<4)
    {
        // Use the first int storage, which is dig[n][0]
        a = 24 - (n * 8);
        m = 0;
    }
    else
    {
        // Use the second int storage, which is dig[n][1]
        n = n-4;
        a = 24 - (n * 8);
        m = 1;
    }

    // Save the data conversion to the array
    switch (d)
    {
        case 0:
            dig[0][m] |= (dig_hex[0] << a);
            dig[1][m] |= (dig_hex[1] << a);
            dig[2][m] |= (dig_hex[1] << a);
            dig[3][m] |= (dig_hex[1] << a);
            dig[4][m] |= (dig_hex[1] << a);
            dig[5][m] |= (dig_hex[1] << a);
            dig[6][m] |= (dig_hex[0] << a);
            break;
        case 1:
            dig[0][m] |= (dig_hex[2] << a);
            dig[1][m] |= (dig_hex[2] << a);
            dig[2][m] |= (dig_hex[2] << a);
            dig[3][m] |= (dig_hex[2] << a);
            dig[4][m] |= (dig_hex[2] << a);
            dig[5][m] |= (dig_hex[2] << a);
            dig[6][m] |= (dig_hex[2] << a);
            break;
        case 2:
            dig[0][m] |= (dig_hex[0] << a);
            dig[1][m] |= (dig_hex[3] << a);
            dig[2][m] |= (dig_hex[3] << a);
            dig[3][m] |= (dig_hex[0] << a);
            dig[4][m] |= (dig_hex[2] << a);
            dig[5][m] |= (dig_hex[2] << a);
            dig[6][m] |= (dig_hex[0] << a);
            break;
        case 3:
            dig[0][m] |= (dig_hex[0] << a);
            dig[1][m] |= (dig_hex[3] << a);
            dig[2][m] |= (dig_hex[3] << a);
            dig[3][m] |= (dig_hex[0] << a);
            dig[4][m] |= (dig_hex[3] << a);
            dig[5][m] |= (dig_hex[3] << a);
            dig[6][m] |= (dig_hex[0] << a);
            break;
        case 4:
            dig[0][m] |= (dig_hex[1] << a);
            dig[1][m] |= (dig_hex[1] << a);
            dig[2][m] |= (dig_hex[1] << a);
            dig[3][m] |= (dig_hex[0] << a);
            dig[4][m] |= (dig_hex[3] << a);
            dig[5][m] |= (dig_hex[3] << a);
            dig[6][m] |= (dig_hex[3] << a);
            break;
        case 5:
            dig[0][m] |= (dig_hex[0] << a);
            dig[1][m] |= (dig_hex[2] << a);
            dig[2][m] |= (dig_hex[2] << a);
            dig[3][m] |= (dig_hex[0] << a);
            dig[4][m] |= (dig_hex[3] << a);
            dig[5][m] |= (dig_hex[3] << a);
            dig[6][m] |= (dig_hex[0] << a);
            break;
        case 6:
            dig[0][m] |= (dig_hex[0] << a);
            dig[1][m] |= (dig_hex[2] << a);
            dig[2][m] |= (dig_hex[2] << a);
            dig[3][m] |= (dig_hex[0] << a);
            dig[4][m] |= (dig_hex[1] << a);
            dig[5][m] |= (dig_hex[1] << a);
            dig[6][m] |= (dig_hex[0] << a);
            break;
        case 7:
            dig[0][m] |= (dig_hex[0] << a);
            dig[1][m] |= (dig_hex[3] << a);
            dig[2][m] |= (dig_hex[3] << a);
            dig[3][m] |= (dig_hex[3] << a);
            dig[4][m] |= (dig_hex[3] << a);
            dig[5][m] |= (dig_hex[3] << a);
            dig[6][m] |= (dig_hex[3] << a);
            break;
        case 8:
            dig[0][m] |= (dig_hex[0] << a);
            dig[1][m] |= (dig_hex[1] << a);
            dig[2][m] |= (dig_hex[1] << a);
            dig[3][m] |= (dig_hex[0] << a);
            dig[4][m] |= (dig_hex[1] << a);
            dig[5][m] |= (dig_hex[1] << a);
            dig[6][m] |= (dig_hex[0] << a);
            break;
        case 9:
            dig[0][m] |= (dig_hex[0] << a);
            dig[1][m] |= (dig_hex[1] << a);
            dig[2][m] |= (dig_hex[1] << a);
            dig[3][m] |= (dig_hex[0] << a);
            dig[4][m] |= (dig_hex[3] << a);
            dig[5][m] |= (dig_hex[3] << a);
            dig[6][m] |= (dig_hex[0] << a);
            break;
        default:
            break;
    }
}

// print output time
void Output_Data(void)
{
    unsigned char i,j;
    unsigned int t, z;

    // 7 lines
    for(i=0; i<7; i++)
    {
        // print the first 32 bits
        t = dig[i][0];
        z = 0x80000000;
        for(j=0; j<32; j++)
        {
            // Print color selection
            if(j<16)
                printf(GREEN);
            else
                printf(BLUE);

            // Proof number
            if(t&z)
                printf(DISPLAY_CHAR);
            else
                printf(" ");
            z >>= 1;

            // Proofing separator
            if((j == 7)||(j == 15)||(j == 23))
            {
                printf(PURPLE);
                if(((i==1)||(i==5))&&(j==15))
                    printf(DELIMITER_CHAR);
                else
                    printf("   ");
            }
        }
        // The second 32 bits, only the upper 16 bits are actually used
        t = dig[i][1];
        z = 0x80000000;
        for(j=0; j<16; j++)
        {
            // Proofing separator
            if(j == 0)
            {
                printf(PURPLE);
                if(((i==1)||(i==5))&&(j==0))
                    printf(DELIMITER_CHAR);
                else
                    printf("   ");
            }
            // Print color selection
            if(j<16)
                printf(YELLOW);
            else
                printf(BLUE);
            // Proof number
            if(t&z)
                printf(DISPLAY_CHAR);
            else
                printf(" ");
            z >>= 1;
            // Proofing separator
            if((j == 7)||(j == 15)||(j == 23))
                printf(" ");
        }
        printf("\r\n");
    }
}

// Divide the time and convert it to an array
void printf_time(unsigned char hour, unsigned char min, unsigned char sec)
{
    unsigned char i, s, g;
    s = hour/10;
    g = hour%10;
    Input_Data(0, s);
    Input_Data(1, g);

    s = min/10;
    g = min%10;
    Input_Data(2, s);
    Input_Data(3, g);

    s = sec/10;
    g = sec%10;
    Input_Data(4, s);
    Input_Data(5, g);

    printf("\r\n");
}


int main()
{
    time_t timep;
    struct tm *p;
    unsigned char h, m, s, os;

    while(1)
    {
        time(&timep);
        p = gmtime(&timep);

        h = p->tm_hour+8;
        m = p->tm_min;
        s = p->tm_sec;
        // Determine whether the time is updated, update the latest time, in seconds
        if(s != os)
        {
            // windows clear screen
            // system("cls");
            // linux clear screen
            system("clear");
            printf("%0.2d:%0.2d:%0.2d\r\n",h, m, s);
            memset(&dig, 0, sizeof(dig));
            printf_time(h, m, s);
            Output_Data();
        }

        os = s;
    }

    return 0;
}

