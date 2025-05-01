#pragma once
#include <iostream>

class c_point {
public:
    float x;
    float y;

    // Constructors
    c_point(float x_val = 0.0f, float y_val = 0.0f) : x(x_val), y(y_val) {}

    // Copy constructor and assignment operator
    c_point(const c_point& other) = default;
    c_point& operator=(const c_point& other) = default;

    // Equality operators
    bool operator==(const c_point& other) const {
        return x == other.x && y == other.y;
    }

    bool operator!=(const c_point& other) const {
        return !(*this == other);
    }

    // Relational operators (lexicographical order)
    bool operator<(const c_point& other) const {
        return (x < other.x) || (x == other.x && y < other.y);
    }

    bool operator>(const c_point& other) const {
        return other < *this;
    }

    bool operator<=(const c_point& other) const {
        return !(*this > other);
    }

    bool operator>=(const c_point& other) const {
        return !(*this < other);
    }

    // Arithmetic operators
    c_point operator+(const c_point& other) const {
        return c_point(x + other.x, y + other.y);
    }

    c_point operator-(const c_point& other) const {
        return c_point(x - other.x, y - other.y);
    }

    c_point operator*(float scalar) const {
        return c_point(x * scalar, y * scalar);
    }

    c_point operator/(float scalar) const {
        return c_point(x / scalar, y / scalar);
    }

    // Compound assignment operators
    c_point& operator+=(const c_point& other) {
        x += other.x;
        y += other.y;
        return *this;
    }

    c_point& operator-=(const c_point& other) {
        x -= other.x;
        y -= other.y;
        return *this;
    }

    c_point& operator*=(float scalar) {
        x *= scalar;
        y *= scalar;
        return *this;
    }

    c_point& operator/=(float scalar) {
        x /= scalar;
        y /= scalar;
        return *this;
    }

    // Unary minus
    c_point operator-() const {
        return c_point(-x, -y);
    }

    // Output stream operator
    friend std::ostream& operator<<(std::ostream& os, const c_point& pos) {
        os << "(" << pos.x << ", " << pos.y << ")";
        return os;
    }
};
