#include "Common.hpp"

#include <GLFW/glfw3.h>

#include "Rendering/PixelBuffer.hpp"
#include "Rendering/Renderer.hpp"

namespace Zenahr {



}


int main(int, char**) {
    Zenahr::Initialize();
    Zenahr::Update();
    Zenahr::Clean();
    return 0;
}
