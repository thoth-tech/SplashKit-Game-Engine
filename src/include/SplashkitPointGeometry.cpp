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
#include "SplashkitPointGeometry.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	point_2d SplashkitPointGeometry::point_at(double x, double y) 
	{
		return ::point_at(x, y);
	};

	point_2d SplashkitPointGeometry::point_at_origin() 
	{
		return ::point_at_origin();
	};

	bool SplashkitPointGeometry::point_in_circle(const point_2d &pt, const circle &c) 
	{
		return ::point_in_circle(pt, c);
	};

	bool SplashkitPointGeometry::point_in_quad(const point_2d &pt, const quad &q) 
	{
		return ::point_in_quad(pt, q);
	};

	bool SplashkitPointGeometry::point_in_rectangle(const point_2d &pt, const rectangle &rect) 
	{
		return ::point_in_rectangle(pt, rect);
	};

	bool SplashkitPointGeometry::point_in_triangle(const point_2d &pt, const triangle &tri) 
	{
		return ::point_in_triangle(pt, tri);
	};

	float SplashkitPointGeometry::point_line_distance(const point_2d &pt, const line &l) 
	{
		return ::point_line_distance(pt, l);
	};

	point_2d SplashkitPointGeometry::point_offset_by(const point_2d &start_point, const vector_2d &offset) 
	{
		return ::point_offset_by(start_point, offset);
	};

	point_2d SplashkitPointGeometry::point_offset_from_origin(const vector_2d &offset) 
	{
		return ::point_offset_from_origin(offset);
	};

	bool SplashkitPointGeometry::point_on_line(const point_2d &pt, const line &l) 
	{
		return ::point_on_line(pt, l);
	};

	bool SplashkitPointGeometry::point_on_line(const point_2d &pt, const line &l, float proximity) 
	{
		return ::point_on_line(pt, l, proximity);
	};

	float SplashkitPointGeometry::point_point_angle(const point_2d &pt1, const point_2d &pt2) 
	{
		return ::point_point_angle(pt1, pt2);
	};

	float SplashkitPointGeometry::point_point_distance(const point_2d &pt1, const point_2d &pt2) 
	{
		return ::point_point_distance(pt1, pt2);
	};

	string SplashkitPointGeometry::point_to_string(const point_2d &pt) 
	{
		return ::point_to_string(pt);
	};

	point_2d SplashkitPointGeometry::random_bitmap_point(bitmap bmp) 
	{
		return ::random_bitmap_point(bmp);
	};

	point_2d SplashkitPointGeometry::random_screen_point() 
	{
		return ::random_screen_point();
	};

	point_2d SplashkitPointGeometry::random_window_point(window wind) 
	{
		return ::random_window_point(wind);
	};

	bool SplashkitPointGeometry::same_point(const point_2d &pt1, const point_2d &pt2) 
	{
		return ::same_point(pt1, pt2);
	};

}
