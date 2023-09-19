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

#include "line_geometry.h"
#include "types.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class ILineGeometry
{
public:
    virtual point_2d closest_point_on_line(const point_2d from_pt, const line &l) = 0;
    virtual point_2d closest_point_on_lines(const point_2d from_pt, const vector<line> &lines, int &line_idx) = 0;
    virtual line line_from(const point_2d &start, const point_2d &end_pt) = 0;
    virtual line line_from(const point_2d &start, const vector_2d &offset) = 0;
    virtual line line_from(const vector_2d &v) = 0;
    virtual line line_from(double x1, double y1, double x2, double y2) = 0;
    virtual bool line_intersection_point(const line &line1, const line &line2, point_2d &pt) = 0;
    virtual bool line_intersects_circle(const line &l, const circle &c) = 0;
    virtual bool line_intersects_lines(const line &l, const vector<line> &lines) = 0;
    virtual bool line_intersects_rect(const line &l, const rectangle &rect) = 0;
    virtual float line_length(const line &l) = 0;
    virtual float line_length_squared(const line &l) = 0;
    virtual point_2d line_mid_point(const line &l) = 0;
    virtual vector_2d line_normal(const line &l) = 0;
    virtual string line_to_string(const line &ln) = 0;
    virtual bool lines_intersect(const line &l1, const line &l2) = 0;
};