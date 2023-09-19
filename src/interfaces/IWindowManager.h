// SplashkitInterfaceGen v0.1.0-alpha
// Copyright (c) 2023 Coskun Kilinc. All rights reserved.
// Developed under collaboration with Deakin University.
//
// This software is licensed under the MIT License.
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in 
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// WARNING: This code was auto-generated using SplashkitInterfaceGen. 
// Manual modifications might be overwritten if regenerated.
// Always test auto-generated code thoroughly before deployment.
// While every effort has been made to ensure the safety of this tool, 
// there is no guarantee or warranty that the generated code will work as 
// intended.
#pragma once

#include "window_manager.h"
#include "types.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

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