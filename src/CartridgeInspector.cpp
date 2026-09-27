#include "CartridgeInspector.h"


void CartridgeInspector::inspect(){

	std::ifstream file("roms/halt_bug.gb", std::ios::binary);

	if (!file) {
		std::cerr << "Failed to open file \n";
			return;
	}

	file.seekg(0, std::ios::end);
	std::streamsize size = file.tellg();
	file.seekg(0, std::ios::beg);

	std::vector<char> data(size);

	if (!file.read(data.data(), size)) {
		std::cerr << "Failed to read file \n";
		return;
	}

	std::cout << "Read " << data.size() << " bytes\n";

	return;

}
