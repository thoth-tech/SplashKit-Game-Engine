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

#include "graphics.h"
#include "window_manager.h"
#include "types.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class IGraphics
{
public:
    virtual void clear_screen() = 0;
    virtual void clear_screen(color clr) = 0;
    virtual display display_details(unsigned int index) = 0;
    virtual int display_height(display disp) = 0;
    virtual string display_name(display disp) = 0;
    virtual int display_width(display disp) = 0;
    virtual int display_x(display disp) = 0;
    virtual int display_y(display disp) = 0;
    virtual int number_of_displays() = 0;
    virtual void refresh_screen() = 0;
    virtual void refresh_screen(unsigned int target_fps) = 0;
    virtual void save_bitmap(bitmap bmp, const string &basename) = 0;
    virtual int screen_height() = 0;
    virtual int screen_width() = 0;
    virtual void take_screenshot(const string &basename) = 0;
    virtual void take_screenshot(window wind, const string &basename) = 0;
};