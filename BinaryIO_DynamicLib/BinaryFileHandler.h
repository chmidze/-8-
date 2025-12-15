#pragma once
#include <string>
#include "BinaryIO.h"

#ifdef BINARYIODYNAMICLIB_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

namespace BinaryIO {

    class DLL_API BinaryFileHandler {
    public:
        bool save(const SimpleData& data, const std::string& filename);
        bool load(SimpleData& data, const std::string& filename);
    };

}
