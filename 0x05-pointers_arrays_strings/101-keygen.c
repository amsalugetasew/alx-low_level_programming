#include "main.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Generate Password by random values
 * @void: void parameter
 * Return: Always (Success)
 */

int main(void)
{
        char password[84];      
        int i = 0, sum = 0, dh1, dh2;

        srand(time(0));

        while (sum < 2772)
        {
                password[i] = 33 + rand() % 94;
                sum += password[i];
        }
        if (sum != 2772)
        {
                dh1 = (sum - 2772) / 2;
                dh2 = (sum - 2772) / 2;
                if ((sum - 2772) % 2 != 0)
                {
                        dh1++;
                }
                for (i = 1; password[i]; i++)
                {
                        if (password[i] >= (33 + dh1))
                        {
                                break;
                        }
                }
                for (i = 0; password[i]; i++)
                {
                        if (password[i] >= (33 + dh2))
                        {
                                password[i] -= dh2;
                                break;
                        }
                }
        }
        printf("%s", password);
        return (0);
}
