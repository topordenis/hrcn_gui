#pragma once
#include <base/node_event.hpp>


class c_mouse_scroll_event : public c_node_event {
public:
    c_point offset;
    c_mouse_scroll_event();
};

