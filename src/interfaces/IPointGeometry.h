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

#include "point_geometry.h"
#include "window_manager.h"
#include "types.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class IPointGeometry
{
public:
    virtual point_2d point_at(double x, double y) = 0;
    virtual point_2d point_at_origin() = 0;
    virtual bool point_in_circle(const point_2d &pt, const circle &c) = 0;
    virtual bool point_in_quad(const point_2d &pt, const quad &q) = 0;
    virtual bool point_in_rectangle(const point_2d &pt, const rectangle &rect) = 0;
    virtual bool point_in_triangle(const point_2d &pt, const triangle &tri) = 0;
    virtual float point_line_distance(const point_2d &pt, const line &l) = 0;
    virtual point_2d point_offset_by(const point_2d &start_point, const vector_2d &offset) = 0;
    virtual point_2d point_offset_from_origin(const vector_2d &offset) = 0;
    virtual bool point_on_line(const point_2d &pt, const line &l) = 0;
    virtual bool point_on_line(const point_2d &pt, const line &l, float proximity) = 0;
    virtual float point_point_angle(const point_2d &pt1, const point_2d &pt2) = 0;
    virtual float point_point_distance(const point_2d &pt1, const point_2d &pt2) = 0;
    virtual string point_to_string(const point_2d &pt) = 0;
    virtual point_2d random_bitmap_point(bitmap bmp) = 0;
    virtual point_2d random_screen_point() = 0;
    virtual point_2d random_window_point(window wind) = 0;
    virtual bool same_point(const point_2d &pt1, const point_2d &pt2) = 0;
};