#include <fstream>
#include <span>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdint>


class CartridgeInspector {
	public:
		static void inspect();

	private:

		static bool isRangeInBounds(std::size_t offset, std::size_t length, std::size_t containerSize);

		static void readCartData(std::vector<char> data);

		static void inspectField(const std::vector<char>& romData,std::string fieldName,size_t offset, size_t size);

		static void printField(std::string fieldName,std::span<const char> field);

		static constexpr std::size_t kEntryPointOffset = 0x0100;
		static constexpr std::size_t kEntryPointSize = 4;

		static constexpr std::size_t kNintendoLogoOffset = 0x0104;
		static constexpr std::size_t kNintendoLogoSize = 0x30;

		static constexpr std::size_t kTitleOffset = 0x0134;
		static constexpr std::size_t kTitleSize16 = 16;     
		static constexpr std::size_t kTitleSize15 = 15;	   
		static constexpr std::size_t kTitleSize11 = 11;   

		static constexpr std::size_t kManufacturerCodeOffset = 0x013F;
		static constexpr std::size_t kManufacturerCodeSize = 4;

		static constexpr std::size_t kCgbFlagOffset = 0x0143;
		static constexpr std::size_t kCgbFlagSize = 1;

		static constexpr std::size_t kNewLicenseeCodeOffset = 0x0144;
		static constexpr std::size_t kNewLicenseeCodeSize = 2;

		static constexpr std::size_t kSgbFlagOffset = 0x0146;
		static constexpr std::size_t kSgbFlagSize = 1;

		static constexpr std::size_t kCartridgeTypeOffset = 0x0147;
		static constexpr std::size_t kCartridgeTypeSize = 1;

		static constexpr std::size_t kRomSizeFieldOffset = 0x0148;
		static constexpr std::size_t kRomSizeFieldSize = 1;

		static constexpr std::size_t kRamSizeFieldOffset = 0x0149;
		static constexpr std::size_t kRamSizeFieldSize = 1;

		static constexpr std::size_t kDestinationCodeOffset = 0x014A;
		static constexpr std::size_t kDestinationCodeSize = 1;

		static constexpr std::size_t kOldLicenseeCodeOffset = 0x014B;
		static constexpr std::size_t kOldLicenseeCodeSize = 1;

		static constexpr std::size_t kMaskRomVersionNumberOffset = 0x014C;
		static constexpr std::size_t kMaskRomVersionNumberSize = 1;

		static constexpr std::size_t kHeaderChecksumOffset = 0x014D;
		static constexpr std::size_t kHeaderChecksumSize = 1;

		static constexpr std::size_t kGlobalChecksumOffset = 0x014E;
		static constexpr std::size_t kGlobalChecksumSize = 2;
};