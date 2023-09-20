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

#include "circle_geometry.h"
#include "types.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class ICircleGeometry
{
public:
    virtual point_2d center_point(const circle &c) = 0;
    virtual circle circle_at(const point_2d &pt, double radius) = 0;
    virtual circle circle_at(double x, double y, double radius) = 0;
    virtual float circle_radius(const circle c) = 0;
    virtual float circle_x(const circle &c) = 0;
    virtual float circle_y(const circle &c) = 0;
    virtual bool circles_intersect(circle c1, circle c2) = 0;
    virtual point_2d closest_point_on_circle(const point_2d &from_pt, const circle &c) = 0;
    virtual point_2d closest_point_on_line_from_circle(const circle &c, const line &l) = 0;
    virtual point_2d closest_point_on_rect_from_circle(const circle &c, const rectangle &rect) = 0;
    virtual point_2d distant_point_on_circle(const point_2d &pt, const circle &c) = 0;
    virtual bool distant_point_on_circle_heading(const point_2d &pt, const circle &c, const vector_2d &heading, point_2d &opposite_pt) = 0;
    virtual float ray_circle_intersect_distance(const point_2d &ray_origin, const vector_2d &ray_heading, const circle &c) = 0;
    virtual bool tangent_points(const point_2d &from_pt, const circle &c, point_2d &p1, point_2d &p2) = 0;
    virtual void widest_points(const circle &c, const vector_2d &along, point_2d &pt1, point_2d &pt2) = 0;
};