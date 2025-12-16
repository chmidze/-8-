#pragma once
#include <string>

namespace BinaryIO {

    // Простая структура для бинарной сериализации
    struct SimpleData {
        int id;
        double value;
    };

    // Бинарная сериализация
    bool serialize(const SimpleData& data, const std::string& filename);
    bool deserialize(SimpleData& data, const std::string& filename);

    // Шифр Цезаря
    std::string caesarEncrypt(const std::string& text, int shift);
    std::string caesarDecrypt(const std::string& text, int shift);

}
