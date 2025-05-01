#pragma once
#include <iostream>

class c_rect {
public:
    float x = 0.f;
    float y = 0.f;
    float w = 0.f;
    float h = 0.f;

    // Constructors
    c_rect(float x_val = 0.0f, float y_val = 0.0f, float w_val = 0.0f, float h_val = 0.0f) : x(x_val), y(y_val),w(w_val), h(h_val) {}

    // Copy constructor and assignment operator
    c_rect(const c_rect& other) = default;
    c_rect& operator=(const c_rect& other) = default;

    // Equality operators
    bool operator==(const c_rect& other) const {
        return x == other.x && y == other.y && w == other.w && h == other.h;
    }

    bool operator!=(const c_rect& other) const {
        return !(*this == other);
    }

    // Relational operators (lexicographical)
    bool operator<(const c_rect& other) const {
        return (w < other.w) || (w == other.w && h < other.h);
    }

    bool operator>(const c_rect& other) const {
        return other < *this;
    }

    bool operator<=(const c_rect& other) const {
        return !(*this > other);
    }

    bool operator>=(const c_rect& other) const {
        return !(*this < other);
    }

   

    // Output stream operator
    friend std::ostream& operator<<(std::ostream& os, const c_rect& rect) {
        os << "[" << rect.w << " x " << rect.h << "]";
        return os;
    }
};
