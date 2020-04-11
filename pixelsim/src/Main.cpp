#include "Common.hpp"
#include <string>
#include <GLFW/glfw3.h>

#include "Rendering/PixelBuffer.hpp"
#include "Rendering/Renderer.hpp"

namespace Zenahr {

	static void Init() {

		unsigned int windowW = 640;
		unsigned int windowH = 480;
		char* windowTitle = "Zenahr Pixel Test";


		// Init window
		GLFWwindow* window;

		if (!glfwInit()) {
			std::cout << "GLFW init failed." << std::endl;
		}
		
		window = glfwCreateWindow(windowW, windowH, windowTitle, nullptr, nullptr);
		if (!window) {
			std::cout << "Window init failed." << std::endl;
		}

	}

}


int main(int, char**) {
    Zenahr::Init();
    //Zenahr::Update();
    //Zenahr::Clean();
    return 0;
}
