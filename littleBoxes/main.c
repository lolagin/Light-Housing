//
//  main.c
//  littleBoxes
//
//  Created by Jeffrey C Rosenthal on 3/9/15.
//  Copyright (c) 2015 Jeffreycorp. All rights reserved.
//

#include <stdio.h>
typedef struct {
    float x;
    float y;
    float z;
} Cuboid;
Cuboid buildCube(float x, float y, float z);
float volume(Cuboid cuba);
float surfaceArea(Cuboid cuba);
float cubeEnvy(Cuboid smallerCube, Cuboid largerCube);
float surfaceEnvy(Cuboid smallerCube, Cuboid largerCube);
int main(int argc, const char * argv[]) {

    Cuboid theCube = buildCube(20, 20, 20);
    Cuboid lolaCube = buildCube(23, 23, 23);
//    float vDiff = cubeEnvy(theCube, lolaCube);
//    float sDiff = surfaceEnvy(theCube, lolaCube);
    printf("this is the cube! %f %f %f \n", theCube.x, theCube.y, theCube.z);
    printf("The Cube is %f volumunits, %f surface units, and it's %f smaller than another cube! \n", volume(theCube), surfaceArea(theCube), cubeEnvy(theCube, lolaCube));
    
    
    
    return 0;
}

Cuboid buildCube(float x, float y, float z) {
    Cuboid cube;
    cube.x = x;
        cube.y = y;
    cube.z = z;
    
    return cube;
}


float volume(Cuboid cuba) {
//    float x = cuba.x;
//        float y = cuba.y;
//        float z = cuba.z;
    float vol = cuba.x * cuba.y * cuba.z;
    return vol;
}

float surfaceArea(Cuboid cuba) {
    float x = cuba.x;
    float y = cuba.y;
    float z = cuba.z;
    
    float somethingArea = 2 * x * y + 2 * x * z + 2 * y * z;
    
    return somethingArea;

}


float cubeEnvy(Cuboid smallerCube, Cuboid largerCube) {
    float a = volume(smallerCube);
    float b = volume(largerCube);
    
    float vDiff = b - a;

    
    return vDiff;
}
float surfaceEnvy(Cuboid smallerCube, Cuboid largerCube) {
  
    float x = surfaceArea(smallerCube);
    float y = surfaceArea(largerCube);
    
    float sDiff = y - x;
    return sDiff;
}


