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

#include "rectangle_geometry.h"
#include "types.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class IRectangleGeometry
{
public:
    virtual rectangle inset_rectangle(const rectangle &rect, float inset_amount) = 0;
    virtual rectangle intersection(const rectangle &rect1, const rectangle &rect2) = 0;
    virtual rectangle rectangle_around(const circle &c) = 0;
    virtual rectangle rectangle_around(const line &l) = 0;
    virtual rectangle rectangle_around(const quad &q) = 0;
    virtual rectangle rectangle_around(const triangle &t) = 0;
    virtual float rectangle_bottom(const rectangle &rect) = 0;
    virtual point_2d rectangle_center(const rectangle &rect) = 0;
    virtual rectangle rectangle_from(const point_2d pt, const double width, const double height) = 0;
    virtual rectangle rectangle_from(const point_2d pt1, const point_2d pt2) = 0;
    virtual rectangle rectangle_from(double x, double y, double width, double height) = 0;
    virtual float rectangle_left(const rectangle &rect) = 0;
    virtual rectangle rectangle_offset_by(const rectangle &rect, const vector_2d &offset) = 0;
    virtual float rectangle_right(const rectangle &rect) = 0;
    virtual string rectangle_to_string(const rectangle &rect) = 0;
    virtual float rectangle_top(const rectangle &rect) = 0;
    virtual bool rectangles_intersect(const rectangle &rect1, const rectangle &rect2) = 0;
};