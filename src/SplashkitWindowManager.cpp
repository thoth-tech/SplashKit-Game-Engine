#include "splashkit.h"
#include "SplashkitWindowManager.h"

namespace SplashkitGameEngine
{
    void SplashkitWindowManager::clear_window(window wind, color clr)
    {
        ::clear_window(wind, clr);
    };
    void SplashkitWindowManager::close_all_windows()
    {
        ::close_all_windows();
    };
    void SplashkitWindowManager::close_current_window()
    {
        ::close_current_window();
    };
    void SplashkitWindowManager::close_window(const std::string &name)
    {
        ::close_window(name);
    };
    void SplashkitWindowManager::close_window(window wind)
    {
        ::close_window(wind);
    };
    window SplashkitWindowManager::current_window()
    {
        return ::current_window();
    };
    bool SplashkitWindowManager::current_window_has_border()
    {
        return ::current_window_has_border();
    };
    int SplashkitWindowManager::current_window_height()
    {
        return ::current_window_height();
    };
    bool SplashkitWindowManager::current_window_is_fullscreen()
    {
        return ::current_window_is_fullscreen();
    };
    point_2d SplashkitWindowManager::current_window_position()
    {
        return ::current_window_position();
    };
    void SplashkitWindowManager::current_window_toggle_border()
    {
        ::current_window_toggle_border();
    };
    void SplashkitWindowManager::current_window_toggle_fullscreen()
    {
        ::current_window_toggle_fullscreen();
    };
    int SplashkitWindowManager::current_window_width()
    {
        return ::current_window_width();
    };
    int SplashkitWindowManager::current_window_x()
    {
        return ::current_window_x();
    };
    int SplashkitWindowManager::current_window_y()
    {
        return ::current_window_y();
    };
    bool SplashkitWindowManager::has_window(std::string caption)
    {
        return ::has_window(caption);
    };
    bool SplashkitWindowManager::is_current_window(window wind)
    {
        return ::is_current_window(wind);
    };
    void SplashkitWindowManager::move_current_window_to(int x, int y)
    {
        ::move_current_window_to(x, y);
    };
    void SplashkitWindowManager::move_window_to(const std::string &name, int x, int y)
    {
        ::move_window_to(name, x, y);
    };
    void SplashkitWindowManager::move_window_to(window wind, int x, int y)
    {
        ::move_window_to(wind, x, y);
    };
    window SplashkitWindowManager::open_window(std::string caption, int width, int height)
    {
        return ::open_window(caption, width, height);
    };
    void SplashkitWindowManager::refresh_window(window wind)
    {
        ::refresh_window(wind);
    };
    void SplashkitWindowManager::refresh_window(window wind, unsigned int target_fps)
    {
        ::refresh_window(wind, target_fps);
    };
    void SplashkitWindowManager::resize_current_window(int width, int height)
    {
        ::resize_current_window(width, height);
    };
    void SplashkitWindowManager::resize_window(window wnd, int width, int height)
    {
        ::resize_window(wnd, width, height);
    };
    void SplashkitWindowManager::set_current_window(const std::string &name)
    {
        ::set_current_window(name);
    };
    void SplashkitWindowManager::set_current_window(window wind)
    {
        ::set_current_window(wind);
    };
    std::string SplashkitWindowManager::window_caption(window wind)
    {
        return ::window_caption(wind);
    };
    bool SplashkitWindowManager::window_close_requested(const std::string &name)
    {
        return ::window_close_requested(name);
    };
    bool SplashkitWindowManager::window_close_requested(window wind)
    {
        return ::window_close_requested(wind);
    };
    bool SplashkitWindowManager::window_has_border(const std::string &name)
    {
        return ::window_has_border(name);
    };
    bool SplashkitWindowManager::window_has_border(window wnd)
    {
        return ::window_has_border(wnd);
    };
    bool SplashkitWindowManager::window_has_focus(window wind)
    {
        return ::window_has_focus(wind);
    };
    int SplashkitWindowManager::window_height(const std::string &name)
    {
        return ::window_height(name);
    };
    int SplashkitWindowManager::window_height(window wind)
    {
        return ::window_height(wind);
    };
    bool SplashkitWindowManager::window_is_fullscreen(const std::string &name)
    {
        return ::window_is_fullscreen(name);
    };
    bool SplashkitWindowManager::window_is_fullscreen(window wnd)
    {
        return ::window_is_fullscreen(wnd);
    };
    window SplashkitWindowManager::window_named(std::string caption)
    {
        return ::window_named(caption);
    };
    point_2d SplashkitWindowManager::window_position(const std::string &name)
    {
        return ::window_position(name);
    };
    point_2d SplashkitWindowManager::window_position(window wnd)
    {
        return ::window_position(wnd);
    };
    void SplashkitWindowManager::window_set_icon(window wind, bitmap bmp)
    {
        ::window_set_icon(wind, bmp);
    };
    void SplashkitWindowManager::window_toggle_border(const std::string &name)
    {
        ::window_toggle_border(name);
    };
    void SplashkitWindowManager::window_toggle_border(window wnd)
    {
        ::window_toggle_border(wnd);
    };
    void SplashkitWindowManager::window_toggle_fullscreen(const std::string &name)
    {
        ::window_toggle_fullscreen(name);
    };
    void SplashkitWindowManager::window_toggle_fullscreen(window wnd)
    {
        ::window_toggle_fullscreen(wnd);
    };
    int SplashkitWindowManager::window_width(const std::string &name)
    {
        return ::window_width(name);
    };
    int SplashkitWindowManager::window_width(window wind)
    {
        return ::window_width(wind);
    };
    window SplashkitWindowManager::window_with_focus()
    {
        return ::window_with_focus();
    };
    int SplashkitWindowManager::window_x(const std::string &name)
    {
        return ::window_x(name);
    };
    int SplashkitWindowManager::window_x(window wnd)
    {
        return ::window_x(wnd);
    };
    int SplashkitWindowManager::window_y(const std::string &name)
    {
        return ::window_y(name);
    };
    int SplashkitWindowManager::window_y(window wnd)
    {
        return ::window_y(wnd);
    };
} // namespace name
