#include <stdio.h>
#include <unistd.h>
#include "launchlove.h"

void launchlove()
{

    for (int i = 0; i < 10; i++)
    {
        usleep(800000);
        switch (i)
        {
        case 0:
            printf("     ooo                                                *            *                    \n");
            break;
        case 1:
            printf("     | |                                               ***          ***                   \n");
            break;
        case 2:
            printf("    =====                         ====                *****        *****                  \n");
            break;
        case 3:
            printf("      T       //                     =====          **********   **********               \n");
            break;
        case 4:
            printf("      T ======        ====================        ***************************             \n");
            break;
        case 5:
            printf("      T ======        ====================           ********************                 \n");
            break;
        case 6:
            printf("      T       \\\\                     =====              **************                  \n");
            break;
        case 7:
            printf("      T                           ====                     ********                       \n");
            break;
        case 8:
            printf("      T                                                      ****                         \n");
            break;
        case 9:
            printf("    // \\\\                                                     **                        \n");
            break;
        default:
            break;
        }
    }
}