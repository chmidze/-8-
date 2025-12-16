#include "BinaryIO.h"
#include <fstream>
#include <cctype>

namespace BinaryIO {

    bool serialize(const SimpleData& data, const std::string& filename) {
        std::ofstream out(filename, std::ios::binary);
        if (!out) return false;

        out.write(reinterpret_cast<const char*>(&data), sizeof(SimpleData));
        out.close();
        return true;
    }

    bool deserialize(SimpleData& data, const std::string& filename) {
        std::ifstream in(filename, std::ios::binary);
        if (!in) return false;

        in.read(reinterpret_cast<char*>(&data), sizeof(SimpleData));
        in.close();
        return true;
    }

    // Øטפנ Öוחאנÿ

    std::string caesarEncrypt(const std::string& text, int shift) {
        std::string result = text;
        shift %= 26;

        for (char& c : result) {
            if (std::isalpha(static_cast<unsigned char>(c))) {
                char base = std::islower(c) ? 'a' : 'A';
                c = static_cast<char>(base + (c - base + shift) % 26);
            }
        }
        return result;
    }

    std::string caesarDecrypt(const std::string& text, int shift) {
        return caesarEncrypt(text, 26 - shift);
    }

}
