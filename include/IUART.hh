#pragma once

#include <string>

class IUART {
    public:
    virtual ~IUART() = default;
    virtual void write(const std::string& msg) = 0;
};