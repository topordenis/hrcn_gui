#pragma once
class c_render_context
{
public:
    c_render_context();
    ~c_render_context();

    virtual void rect(c_rect rect, c_color color) = 0;
    virtual void clip(c_rect rect) = 0;
    virtual void restore() = 0;
};
