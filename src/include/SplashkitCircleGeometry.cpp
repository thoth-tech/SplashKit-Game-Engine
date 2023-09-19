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
#include "SplashkitCircleGeometry.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	point_2d SplashkitCircleGeometry::center_point(const circle &c) 
	{
		return ::center_point(c);
	};

	circle SplashkitCircleGeometry::circle_at(const point_2d &pt, double radius) 
	{
		return ::circle_at(pt, radius);
	};

	circle SplashkitCircleGeometry::circle_at(double x, double y, double radius) 
	{
		return ::circle_at(x, y, radius);
	};

	float SplashkitCircleGeometry::circle_radius(const circle c) 
	{
		return ::circle_radius(c);
	};

	float SplashkitCircleGeometry::circle_x(const circle &c) 
	{
		return ::circle_x(c);
	};

	float SplashkitCircleGeometry::circle_y(const circle &c) 
	{
		return ::circle_y(c);
	};

	bool SplashkitCircleGeometry::circles_intersect(circle c1, circle c2) 
	{
		return ::circles_intersect(c1, c2);
	};

	point_2d SplashkitCircleGeometry::closest_point_on_circle(const point_2d &from_pt, const circle &c) 
	{
		return ::closest_point_on_circle(from_pt, c);
	};

	point_2d SplashkitCircleGeometry::closest_point_on_line_from_circle(const circle &c, const line &l) 
	{
		return ::closest_point_on_line_from_circle(c, l);
	};

	point_2d SplashkitCircleGeometry::closest_point_on_rect_from_circle(const circle &c, const rectangle &rect) 
	{
		return ::closest_point_on_rect_from_circle(c, rect);
	};

	point_2d SplashkitCircleGeometry::distant_point_on_circle(const point_2d &pt, const circle &c) 
	{
		return ::distant_point_on_circle(pt, c);
	};

	bool SplashkitCircleGeometry::distant_point_on_circle_heading(const point_2d &pt, const circle &c, const vector_2d &heading, point_2d &opposite_pt) 
	{
		return ::distant_point_on_circle_heading(pt, c, heading, opposite_pt);
	};

	float SplashkitCircleGeometry::ray_circle_intersect_distance(const point_2d &ray_origin, const vector_2d &ray_heading, const circle &c) 
	{
		return ::ray_circle_intersect_distance(ray_origin, ray_heading, c);
	};

	bool SplashkitCircleGeometry::tangent_points(const point_2d &from_pt, const circle &c, point_2d &p1, point_2d &p2) 
	{
		return ::tangent_points(from_pt, c, p1, p2);
	};

	void SplashkitCircleGeometry::widest_points(const circle &c, const vector_2d &along, point_2d &pt1, point_2d &pt2) 
	{
		::widest_points(c, along, pt1, pt2);
	}

}
