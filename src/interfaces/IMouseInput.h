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

#include "mouse_input.h"
#include "types.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class IMouseInput
{
public:
    virtual void hide_mouse() = 0;
    virtual bool mouse_clicked(mouse_button button) = 0;
    virtual bool mouse_down(mouse_button button) = 0;
    virtual vector_2d mouse_movement() = 0;
    virtual point_2d mouse_position() = 0;
    virtual vector_2d mouse_position_vector() = 0;
    virtual bool mouse_shown() = 0;
    virtual bool mouse_up(mouse_button button) = 0;
    virtual vector_2d mouse_wheel_scroll() = 0;
    virtual float mouse_x() = 0;
    virtual float mouse_y() = 0;
    virtual void move_mouse(double x, double y) = 0;
    virtual void move_mouse(point_2d point) = 0;
    virtual void show_mouse() = 0;
    virtual void show_mouse(bool show) = 0;
};