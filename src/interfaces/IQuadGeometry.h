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

#include "quad_geometry.h"
#include "types.h"
#include "matrix_2d.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class IQuadGeometry
{
public:
    virtual quad quad_from(const point_2d &p1, const point_2d &p2, const point_2d &p3, const point_2d &p4) = 0;
    virtual quad quad_from(const rectangle &rect) = 0;
    virtual quad quad_from(const rectangle &rect, const matrix_2d &transform) = 0;
    virtual quad quad_from(double x_top_left, double y_top_left, double x_top_right, double y_top_right, double x_bottom_left, double y_bottom_left, double x_bottom_right, double y_bottom_right) = 0;
    virtual bool quads_intersect(const quad &q1, const quad &q2) = 0;
    virtual void set_quad_point(quad &q, int idx, const point_2d &value) = 0;
};