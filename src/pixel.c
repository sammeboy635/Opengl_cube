#include <stdio.h>
#include "pixel.h"
pixel_init(int screen_width, int screen_height, int offset)
{
    int x, y;
    x = screen_width / offset;
    y = screen_height / offset;

    //Screen *screen = (Screen *)calloc(x, sizeof(int));
    int *screenA[540][360];
}