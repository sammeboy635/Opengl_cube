#ifndef CUBE_H
#define CUBE_H
#include <stdio.h>

#define TICK(X) clock_t X = clock()
#define TOCK(X) printf("\ntime %s: %f sec.\n", (#X), (double)(clock() - (X)) / CLOCKS_PER_SEC)
#define cc_set(cx, cX, x) \
    cx = x;               \
    cX = x + 1;

static int blockSides[6][3] = {{0, 1, 0}, {0, -1, 0}, {-1, 0, 0}, {1, 0, 0}, {0, 0, 1}, {0, 0, -1}};

typedef struct cubeCalc
{
    int x;
    int y;
    int z;
    int X;
    int Y;
    int Z;
    int offset;
    int *ptr[6][12];
    void (*cube_vert_cpy)(struct cubeCalc *cc, int face, int *vert, int *vertIndex);
    void (*cube_set_xyz_XYZ)(struct cubeCalc *cc, int x, int y, int z, int X, int Y, int Z);
    void (*cube_set_xyz)(struct cubeCalc *cc, int x, int y, int z);
    void (*cube_set_x)(struct cubeCalc *cc, int x);
    void (*cube_set_y)(struct cubeCalc *cc, int y);
    void (*cube_set_z)(struct cubeCalc *cc, int z);
} cubeCalc;

cubeCalc *cube_init(int offset);

void cube_ptr_set(cubeCalc *cc);
void cube_debug_print(cubeCalc *cc);

void cube_vert_cpy(cubeCalc *cc, int face, int *vert, int *vertIndex);
void cube_set_xyz_XYZ(cubeCalc *cc, int x, int y, int z, int X, int Y, int Z);
void cube_set_xyz(cubeCalc *cc, int x, int y, int z);
void cube_set_x(cubeCalc *cc, int x);
void cube_set_y(cubeCalc *cc, int y);
void cube_set_z(cubeCalc *cc, int z);

void cube_test(int x, int y, int z);
#endif