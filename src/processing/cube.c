#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "cube.h"

cubeCalc *cube_init(int offset)
{
    //cube_xyz_set(cc, x, y, z);
    cubeCalc *cc = (cubeCalc *)malloc(sizeof(cubeCalc));

    cc->offset = offset;

    cc->x = 0;
    cc->y = 0;
    cc->z = 0;

    cc->X = offset;
    cc->Y = offset;
    cc->Z = offset;

    cube_ptr_set(cc);
    return cc;
}

void cube_ptr_set(cubeCalc *cc)
{
    //cc->ptr = (int **)malloc(sizeof(int *) * 72);
    int *x, *y, *z, *X, *Y, *Z;
    x = &cc->x;
    y = &cc->y;
    z = &cc->z;
    X = &cc->X;
    Y = &cc->Y;
    Z = &cc->Z;

    int *positions[6][12] = {
        {x, Y, Z, X, Y, Z, X, Y, z, x, Y, z},  //Top
        {x, y, z, X, y, z, X, y, Z, x, y, Z},  //Bottum
        {x, y, z, x, y, Z, x, Y, Z, x, Y, z},  //Left Maybe
        {X, y, Z, X, y, z, X, Y, z, X, Y, Z},  //Right Maybe
        {X, y, z, x, y, z, x, Y, z, X, Y, z},  //Front Maybe
        {x, y, Z, X, y, Z, X, Y, Z, x, Y, Z}}; //Back Maybe

    //bcopy(positions, cc->ptr, sizeof(positions));
    memcpy(cc->ptr, positions, sizeof(positions));
}
void cube_debug_print(cubeCalc *cc)
{
    char text[12];
    for (int y = 0; y < 6; y++)
    {
        for (int x = 0; x < 12; x++)
        {
            //printf("%d,", *(cc->ptr[y][x]));
            text[x] = (*(cc->ptr[y][x])) + '0';
        }
        printf("%.*s\n", 12, text);
    }
}
void cube_set_xyz_XYZ(cubeCalc *cc, int x, int y, int z, int X, int Y, int Z)
{
    cc->x = x;
    cc->y = y;
    cc->z = z;

    cc->X = X;
    cc->Y = Y;
    cc->Z = Z;
}
void cube_set_xyz(cubeCalc *cc, int x, int y, int z)
{
    cc->x = x;
    cc->y = y;
    cc->z = z;

    cc->X = x + cc->offset;
    cc->Y = y + cc->offset;
    cc->Z = z + cc->offset;
}
void cube_set_x(cubeCalc *cc, int x)
{
    cc->x = x;
    cc->X = x + cc->offset;
}
void cube_set_y(cubeCalc *cc, int y)
{
    cc->y = y;
    cc->Y = y + cc->offset;
}
void cube_set_z(cubeCalc *cc, int z)
{
    cc->z = z;
    cc->Z = z + cc->offset;
}
void cube_vert_cpy(cubeCalc *cc, int face, int *vert, int *vertIndex)
{
    for (int i = 0; i < 12; i++)
    {
        vert[(*vertIndex)++] = *(cc->ptr[face][i]);
    }
}
void cube_test(int x, int y, int z)
{
    cubeCalc *cc = cube_init(50);
    cube_set_xyz(cc, x, y, z);
    cube_debug_print(cc);
    free(cc);
}