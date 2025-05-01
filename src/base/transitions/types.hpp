#pragma once

enum class e_transition_type : uint8_t {
    min,
    margin,
    position,
    background_color,
    border_color,
    max
};

template <typename T>
T inline lerp(const T& a, const T& b, float t) {
    return a + (b - a) * t;
}