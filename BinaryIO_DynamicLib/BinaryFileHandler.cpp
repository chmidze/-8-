#include "BinaryFileHandler.h"

namespace BinaryIO {

    bool BinaryFileHandler::save(const SimpleData& data, const std::string& filename) {
        return serialize(data, filename);
    }

    bool BinaryFileHandler::load(SimpleData& data, const std::string& filename) {
        return deserialize(data, filename);
    }

}
