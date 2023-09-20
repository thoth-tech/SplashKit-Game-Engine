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

#include "camera.h"
#include "window_manager.h"
#include "types.h"
#include "sprites.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class ICamera
{
public:
    virtual point_2d camera_position() = 0;
    virtual double camera_x() = 0;
    virtual double camera_y() = 0;
    virtual void center_camera_on(sprite s, const vector_2d &offset) = 0;
    virtual void center_camera_on(sprite s, double offset_x, double offset_y) = 0;
    virtual void move_camera_by(const vector_2d &offset) = 0;
    virtual void move_camera_by(double dx, double dy) = 0;
    virtual void move_camera_to(const point_2d &pt) = 0;
    virtual void move_camera_to(double x, double y) = 0;
    virtual bool point_in_window(window wind, const point_2d &pt) = 0;
    virtual bool point_on_screen(const point_2d &pt) = 0;
    virtual bool rect_in_window(window wind, const rectangle &rect) = 0;
    virtual bool rect_on_screen(const rectangle &rect) = 0;
    virtual point_2d screen_center() = 0;
    virtual rectangle screen_rectangle() = 0;
    virtual void set_camera_position(point_2d pos) = 0;
    virtual void set_camera_x(double x) = 0;
    virtual void set_camera_y(double y) = 0;
    virtual point_2d to_screen(const point_2d &pt) = 0;
    virtual rectangle to_screen(const rectangle &rect) = 0;
    virtual double to_screen_x(double world_x) = 0;
    virtual double to_screen_y(double world_y) = 0;
    virtual point_2d to_world(const point_2d &pt) = 0;
    virtual double to_world_x(double screen_x) = 0;
    virtual double to_world_y(double screen_y) = 0;
    virtual vector_2d vector_world_to_screen() = 0;
    virtual rectangle window_area(window wind) = 0;
};