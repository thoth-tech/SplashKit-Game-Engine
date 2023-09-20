#pragma once
#include <string>
#include <vector>

using std::string;
using std::vector;

struct _window_data;
typedef struct _window_data *window;

class IWindowManager
{
public:
    virtual void clear_window(window wind, color clr) = 0;
    virtual void close_all_windows() = 0;
    virtual void close_current_window() = 0;
    virtual void close_window(const string &name) = 0;
    virtual void close_window(window wind) = 0;
    virtual window current_window() = 0;
    virtual bool current_window_has_border() = 0;
    virtual int current_window_height() = 0;
    virtual bool current_window_is_fullscreen() = 0;
    virtual point_2d current_window_position() = 0;
    virtual void current_window_toggle_border() = 0;
    virtual void current_window_toggle_fullscreen() = 0;
    virtual int current_window_width() = 0;
    virtual int current_window_x() = 0;
    virtual int current_window_y() = 0;
    virtual bool has_window(string caption) = 0;
    virtual bool is_current_window(window wind) = 0;
    virtual void move_current_window_to(int x, int y) = 0;
    virtual void move_window_to(const string &name, int x, int y) = 0;
    virtual void move_window_to(window wind, int x, int y) = 0;
    virtual window open_window(string caption, int width, int height) = 0;
    virtual void refresh_window(window wind) = 0;
    virtual void refresh_window(window wind, unsigned int target_fps) = 0;
    virtual void resize_current_window(int width, int height) = 0;
    virtual void resize_window(window wnd, int width, int height) = 0;
    virtual void set_current_window(const string &name) = 0;
    virtual void set_current_window(window wind) = 0;
    virtual string window_caption(window wind) = 0;
    virtual bool window_close_requested(const string &name) = 0;
    virtual bool window_close_requested(window wind) = 0;
    virtual bool window_has_border(const string &name) = 0;
    virtual bool window_has_border(window wnd) = 0;
    virtual bool window_has_focus(window wind) = 0;
    virtual int window_height(const string &name) = 0;
    virtual int window_height(window wind) = 0;
    virtual bool window_is_fullscreen(const string &name) = 0;
    virtual bool window_is_fullscreen(window wnd) = 0;
    virtual window window_named(string caption) = 0;
    virtual point_2d window_position(const string &name) = 0;
    virtual point_2d window_position(window wnd) = 0;
    virtual void window_set_icon(window wind, bitmap bmp) = 0;
    virtual void window_toggle_border(const string &name) = 0;
    virtual void window_toggle_border(window wnd) = 0;
    virtual void window_toggle_fullscreen(const string &name) = 0;
    virtual void window_toggle_fullscreen(window wnd) = 0;
    virtual int window_width(const string &name) = 0;
    virtual int window_width(window wind) = 0;
    virtual window window_with_focus() = 0;
    virtual int window_x(const string &name) = 0;
    virtual int window_x(window wnd) = 0;
    virtual int window_y(const string &name) = 0;
    virtual int window_y(window wnd) = 0;
};