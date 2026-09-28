#include "CartridgeInspector.h"


void CartridgeInspector::inspect(){

	std::ifstream file("roms/Pokemon - Red Version.gb", std::ios::binary);

	if (!file) {
		std::cerr << "Failed to open file \n";
			return;
	}

	file.seekg(0, std::ios::end);
	std::streamsize size = file.tellg();
	file.seekg(0, std::ios::beg);

	std::vector<char> romData(size);

	if (!file.read(romData.data(), size)) {
		std::cerr << "Failed to read file \n";
		return;
	}

	readCartData(romData);

	return;

}


bool CartridgeInspector::isRangeInBounds(std::size_t offset, std::size_t length, std::size_t containerSize) {
	return offset <= containerSize && length <= containerSize - offset;
}

void CartridgeInspector::readCartData(std::vector<char> romData) {

	inspectField(romData,"Entry Point ",kEntryPointOffset,kEntryPointSize);

	inspectField(romData,"NintendoLogo ", kNintendoLogoOffset, kNintendoLogoSize);

	inspectField(romData,"Title ", kTitleOffset, kTitleSize16);

	inspectField(romData,"ManufacturerCode ", kManufacturerCodeOffset, kManufacturerCodeSize);

	inspectField(romData,"CgbFlag ", kCgbFlagOffset, kCgbFlagSize);

	inspectField(romData, "NewLicenseeCode ", kNewLicenseeCodeOffset, kNewLicenseeCodeSize);

	inspectField(romData,"SgbFlag ", kSgbFlagOffset, kSgbFlagSize);

	inspectField(romData,"CartridgeType ", kCartridgeTypeOffset, kCartridgeTypeSize);

	inspectField(romData,"RomSizeField ", kRomSizeFieldOffset, kRomSizeFieldSize);

	inspectField(romData,"RamSizeField ", kRamSizeFieldOffset, kRamSizeFieldSize);

	inspectField(romData,"DestinationCode ", kDestinationCodeOffset, kDestinationCodeSize);

	inspectField(romData,"OldLicenseeCode ", kOldLicenseeCodeOffset, kOldLicenseeCodeSize);

	inspectField(romData,"MaskRomVersionNumber ", kMaskRomVersionNumberOffset, kMaskRomVersionNumberSize);

	inspectField(romData, "HeaderChecksum ", kHeaderChecksumOffset, kHeaderChecksumSize);

	inspectField(romData, "GlobalChecksum ", kGlobalChecksumOffset, kGlobalChecksumSize);



}

void CartridgeInspector::inspectField(const std::vector<char>& romData,std::string fieldName,size_t fieldOffset,size_t fieldSize)
{
	std::span<const char> field{};
	if (isRangeInBounds(fieldOffset,fieldSize, romData.size())) {
		field = std::span<const char>(romData.data() + fieldOffset, fieldSize);
		printField(fieldName, field);
	}
}

void CartridgeInspector::printField(std::string fieldName,std::span<const char> field) {

	std::cout << fieldName;
	if (fieldName == "Title " || fieldName == "ManufacturerCode " || fieldName == "NewLicenseeCode ") {

		for (char ch : field) {

			if (ch == '\0') {
				break;
			}

			std::cout << ch;
		}
	}
	else if (fieldName == "RomSizeField ") {
		std::cout << 32 * (1 << field[0]) <<"kb";
	}
	else if (fieldName == "RamSizeField ") {
		std::uint8_t value = static_cast<std::uint8_t>(field[0]);

		switch (value) {
			case 0x00:
				std::cout << " No Ram";
				break;
			case 0x01:
				std::cout << " Unused";
				break;
			case 0x02:
				std::cout << " 8Kib , 1 bank";
				break;
			case 0x03:
				std::cout << " 32Kib, 4 banks";
				break;
			case 0x04:
				std::cout << " 128Kib, 16 banks";
				break;
			case 0x05:
				std::cout << " 64Kib, 8 banks";
				break;
		}

		
	}else {
		for (unsigned char byte : field) {
			std::cout
				<< std::hex
				<< std::setw(2)
				<< std::setfill('0')
				<< static_cast<int>(byte)
				<< ' ';
		}
		std::cout << std::dec;
	}
	std::cout << std::endl;
}

