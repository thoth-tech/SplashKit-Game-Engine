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

#include "text.h"
#include "window_manager.h"
#include "types.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class IText
{
public:
    virtual void draw_text(const string &text, const color &clr, const string &fnt, int font_size, double x, double y) = 0;
    virtual void draw_text(const string &text, const color &clr, const string &fnt, int font_size, double x, double y, const drawing_options &opts) = 0;
    virtual void draw_text(const string &text, const color &clr, double x, double y) = 0;
    virtual void draw_text(const string &text, const color &clr, double x, double y, const drawing_options &opts) = 0;
    virtual void draw_text(const string &text, const color &clr, font fnt, int font_size, double x, double y) = 0;
    virtual void draw_text(const string &text, const color &clr, font fnt, int font_size, double x, double y, const drawing_options &opts) = 0;
    virtual void draw_text_on_bitmap(bitmap bmp, const string &text, const color &clr, const string &fnt, int font_size, double x, double y) = 0;
    virtual void draw_text_on_bitmap(bitmap bmp, const string &text, const color &clr, const string &fnt, int font_size, double x, double y, const drawing_options &opts) = 0;
    virtual void draw_text_on_bitmap(bitmap bmp, const string &text, const color &clr, double x, double y) = 0;
    virtual void draw_text_on_bitmap(bitmap bmp, const string &text, const color &clr, double x, double y, const drawing_options &opts) = 0;
    virtual void draw_text_on_bitmap(bitmap bmp, const string &text, const color &clr, font fnt, int font_size, double x, double y) = 0;
    virtual void draw_text_on_bitmap(bitmap bmp, const string &text, const color &clr, font fnt, int font_size, double x, double y, const drawing_options &opts) = 0;
    virtual void draw_text_on_window(window wnd, const string &text, const color &clr, const string &fnt, int font_size, double x, double y) = 0;
    virtual void draw_text_on_window(window wnd, const string &text, const color &clr, const string &fnt, int font_size, double x, double y, const drawing_options &opts) = 0;
    virtual void draw_text_on_window(window wnd, const string &text, const color &clr, double x, double y) = 0;
    virtual void draw_text_on_window(window wnd, const string &text, const color &clr, double x, double y, const drawing_options &opts) = 0;
    virtual void draw_text_on_window(window wnd, const string &text, const color &clr, font fnt, int font_size, double x, double y) = 0;
    virtual void draw_text_on_window(window wnd, const string &text, const color &clr, font fnt, int font_size, double x, double y, const drawing_options &opts) = 0;
    virtual bool font_has_size(const string &name, int font_size) = 0;
    virtual bool font_has_size(font fnt, int font_size) = 0;
    virtual void font_load_size(const string &name, int font_size) = 0;
    virtual void font_load_size(font fnt, int font_size) = 0;
    virtual font font_named(string name) = 0;
    virtual void free_all_fonts() = 0;
    virtual void free_font(font fnt) = 0;
    virtual font_style get_font_style(const string &name) = 0;
    virtual font_style get_font_style(font fnt) = 0;
    virtual bool has_font(font fnt) = 0;
    virtual bool has_font(string name) = 0;
    virtual font load_font(const string &name, const string &filename) = 0;
    virtual void set_font_style(const string &name, font_style style) = 0;
    virtual void set_font_style(font fnt, font_style style) = 0;
    virtual int text_height(const string &text, const string &fnt, int font_size) = 0;
    virtual int text_height(const string &text, font fnt, int font_size) = 0;
    virtual int text_width(const string &text, const string &fnt, int font_size) = 0;
    virtual int text_width(const string &text, font fnt, int font_size) = 0;
};