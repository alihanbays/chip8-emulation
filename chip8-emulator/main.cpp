//
//  main.cpp
//  chip8-emulator
//
//  Created by Alihan Baysal on 8/20/25.
//
#include <array>
#include <iostream>

using namespace std;

class Chip8 {
  public:
    array<uint8_t, 4096> memory{};
//    uint16_t opcode;
//    uint8_t registers[16]{};
//    uint16_t index{};
//    uint16_t pc{};
//    uint16_t stack[16]{};
//    uint8_t sp{};
//    uint8_t delayTimer{};
//    uint8_t soundTimer{};
//    uint8_t keypad[16]{};
//    uint32_t video[64 * 32]{};
};

int main(int argc, const char * argv[]) {
    cout << "Welcome to Chip8 Emulator!\n";
    
    cout << "Creating 4K Bytes of memory\n";
    
    return 0;
}
