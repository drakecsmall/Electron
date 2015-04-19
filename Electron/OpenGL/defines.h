//
//  defines.h
//  
//
//  Created by Samuco on 19/04/2015.
//
//

#ifndef _defines_h
#define _defines_h

#include <stdio.h>
#include "tags/ZZTHaloScenarioTag.h"
#include "ProtonMap.h"

#define BITS_PER_PIXEL 32.0
#define DEPTH_SIZE 32.0

#define ShaderCount 1
typedef enum {
    shader_SENV = 0
} ShaderType;

// Definitions
#ifdef _WIN32
#define _WINDOWS 1
#elif _WIN64
#define _WINDOWS 1
#endif

// OpenGL includes
#ifdef _WINDOWS
#include "glew/glew.h"
#include <GL/freeglut.h>
#elif __APPLE__
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>
#endif

// VBO
#define INDEX_BUFFER 0
#define POS_VB 1
#define NORMAL_VB 2
#define TEXCOORD_VB 3
#define LIGHT_VB 4

#endif
