#pragma one

#define TRUE 1
#define FALSE 0
#define SIZE_OF_INT 4

#define CUBE_SIZE 5 //Make sure this divids the screen height evenly

#define SCREEN_WIDTH 1080
#define SCREEN_HEIGHT 720
#define SCREEN_MIN_WIDTH 0
#define SCREEN_MIN_HEIGHT 0

#define SCREEN_W SCREEN_WIDTH - CUBE_SIZE
#define SCREEN_H SCREEN_HEIGHT - CUBE_SIZE

#define SCREEN_ARRAY_WIDTH SCREEN_WIDTH / CUBE_SIZE   //size of array
#define SCREEN_ARRAY_HEIGHT SCREEN_HEIGHT / CUBE_SIZE //size of array
#
#define Move_Speed 10

#define ZZ -500

#define GLFW_ARROW_CURSOR 0x00036001
#define FIFI 160461

//CALC.h

//VERT.h
#define VERT_SIZE_PROCESS 100
#define VERT_ARRAY_VERTICES_SIZE 1200
#define VERT_ARRAY_XYZ_SIZE 500
#define VERT_ARRAY_PROCESSING_SIZE 300
#define VERT_SIZE_CUBE 12

#define THRESHOLD 0.8
#define INDEX_INIT_SIZE 300

//CALC.h
#define CALC_INIT_SIZE 100
#define CALC_REALLOC_SIZE 10

static const char *fragment_shader_text =
    "#version 440\n"
    "in vec3 vs_position;\n"
    "in vec3 vs_color;\n"
    "in vec2 vs_texcoord;\n"
    "out vec4 fs_color;\n"
    "void main()\n"
    "{\n"
    "fs_color = vec4(vs_color, 1.f);\n"
    "}\n";

static const char *vertex_shader_text =
    "#version 440\n"
    "layout (location = 0) in vec3 vertex_position;\n"
    "layout (location = 1) in vec3 vertex_color;\n"
    "layout (location = 2) in vec2 vertex_texcoords;\n"
    "out vec3 vs_position;\n"
    "out vec3 vs_color;\n"
    "out vec2 vs_texcoord;\n"
    "void main()\n"
    "{\n"
    "vs_position = vertex_position;\n"
    "vs_color = vertex_color;\n"
    "vs_texcoord = vertex_texcoords;\n"

    "gl_Position = vec4(vertex_position,1.f);\n"
    "}\n";