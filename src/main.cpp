#include <filesystem>
#include "CartridgeInspector.h"


void main() {

	std::cout << "Game Boy Emulator \n";

	std::cout << "Current working directory: "
		<< std::filesystem::current_path()
		<< '\n';


	CartridgeInspector::inspect();

}