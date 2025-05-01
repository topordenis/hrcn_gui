#pragma once
#include "transition.hpp"

#include <base/yg_enums.hpp>
class c_node;

class c_transition_position : public c_transition {
public:

    e_edge _edge;
    float old_value = 0.f;
    float new_value = 0.f;
    c_transition_position(c_node* node, e_edge edge, float new_value, int milliseconds);
    

    void run() override;
};



