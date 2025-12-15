#include <iostream>
#include "../BinaryIO_DynamicLib/BinaryFileHandler.h"
#include "../BinaryIO_StaticLib/BinaryIO.h"

using namespace BinaryIO;

int main() {
    BinaryFileHandler handler;

    SimpleData outData{ 42, 9.81 };
    SimpleData inData{};

    if (handler.save(outData, "test.bin")) {
        std::cout << "Data saved successfully\n";
    }

    if (handler.load(inData, "test.bin")) {
        std::cout << "Loaded data:\n";
        std::cout << "ID = " << inData.id << "\n";
        std::cout << "Value = " << inData.value << "\n";
    }

    return 0;
}
