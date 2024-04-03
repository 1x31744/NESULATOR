#pragma once
#include <cstdint>
#include "cpu6502.hpp"
#include <array>

class Bus {
public:
    Bus(); //constructor
    ~Bus(); //destructor
    
public: //devices
    cpu6502 cpu;
    //Fake ram
    std::array<uint8_t, 64 * 1024> ram;

public: //bus read and write
    void write(uint16_t addr, uint8_t data);
    uint8_t read(uint16_t addr, bool busReadOnly = false);
};