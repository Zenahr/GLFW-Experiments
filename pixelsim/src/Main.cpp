#include "Common.hpp"

#include <GLFW/glfw3.h>

#include "Rendering/PixelBuffer.hpp"
#include "Rendering/Renderer.hpp"

namespace Zenahr {

	static void Init() {
		std::cout << "Hello" << std::endl;
		std::cin.get();
	}

}


int main(int, char**) {
    Zenahr::Init();
    //Zenahr::Update();
    //Zenahr::Clean();
    return 0;
}
