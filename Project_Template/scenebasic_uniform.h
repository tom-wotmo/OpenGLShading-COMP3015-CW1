#ifndef SCENEBASIC_UNIFORM_H
#define SCENEBASIC_UNIFORM_H

#include "helper/scene.h"

#include <glad/glad.h>
#include "helper/glslprogram.h"

#include "helper/objmesh.h"
#include "helper/plane.h"

class SceneBasic_Uniform : public Scene
{
private:
  
    GLuint vaoHandle;
    GLSLProgram prog;
    Plane plane;
     
    std::unique_ptr<ObjMesh> catMesh;
    std::unique_ptr<ObjMesh> sofaMesh;

    float angle;
    float rotation;
    void setMatrices();
    void compile();

public:
    SceneBasic_Uniform();

    void initScene();
    void update( float t );
    void render();
    void resize(int, int);
};

#endif // SCENEBASIC_UNIFORM_H
