#include "IWindowManager.h"
#include "splashkit.h"

namespace SplashkitGameEngine
{
    class SplashkitWindowManager : public IWindowManager
    {
    public:
        void clear_window(window wind, color clr) override;
        void close_all_windows() override;
        void close_current_window() override;
        void close_window(const string &name) override;
        void close_window(window wind) override;
        window current_window() override;
        bool current_window_has_border() override;
        int current_window_height() override;
        bool current_window_is_fullscreen() override;
        point_2d current_window_position() override;
        void current_window_toggle_border() override;
        void current_window_toggle_fullscreen() override;
        int current_window_width() override;
        int current_window_x() override;
        int current_window_y() override;
        bool has_window(string caption) override;
        bool is_current_window(window wind) override;
        void move_current_window_to(int x, int y) override;
        void move_window_to(const string &name, int x, int y) override;
        void move_window_to(window wind, int x, int y) override;
        window open_window(string caption, int width, int height) override;
        void refresh_window(window wind) override;
        void refresh_window(window wind, unsigned int target_fps) override;
        void resize_current_window(int width, int height) override;
        void resize_window(window wnd, int width, int height) override;
        void set_current_window(const string &name) override;
        void set_current_window(window wind) override;
        string window_caption(window wind) override;
        bool window_close_requested(const string &name) override;
        bool window_close_requested(window wind) override;
        bool window_has_border(const string &name) override;
        bool window_has_border(window wnd) override;
        bool window_has_focus(window wind) override;
        int window_height(const string &name) override;
        int window_height(window wind) override;
        bool window_is_fullscreen(const string &name) override;
        bool window_is_fullscreen(window wnd) override;
        window window_named(string caption) override;
        point_2d window_position(const string &name) override;
        point_2d window_position(window wnd) override;
        void window_set_icon(window wind, bitmap bmp) override;
        void window_toggle_border(const string &name) override;
        void window_toggle_border(window wnd) override;
        void window_toggle_fullscreen(const string &name) override;
        void window_toggle_fullscreen(window wnd) override;
        int window_width(const string &name) override;
        int window_width(window wind) override;
        window window_with_focus() override;
        int window_x(const string &name) override;
        int window_x(window wnd) override;
        int window_y(const string &name) override;
        int window_y(window wnd) override;
    };
}
