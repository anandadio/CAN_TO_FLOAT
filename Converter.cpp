#include <iostream>
#include <cstdint>

union FloatToBytes {
    float floatValue;
    uint8_t byteArray[4];
};

int main() {
    FloatToBytes converter;
    converter.floatValue = -23.75f;  // Example float value

    // Output the byte array in hexadecimal
    std::cout << "Float value: " << converter.floatValue << std::endl;
    std::cout << "4-byte array in hex: ";
    for (int i = 0; i < 4; i++) {
        printf("0x%02X ", converter.byteArray[i]);
    }
    std::cout << std::endl;

    return 0;
}
