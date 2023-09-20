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
#include "SplashkitLineGeometry.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	point_2d SplashkitLineGeometry::closest_point_on_line(const point_2d from_pt, const line &l) 
	{
		return ::closest_point_on_line(from_pt, l);
	};

	point_2d SplashkitLineGeometry::closest_point_on_lines(const point_2d from_pt, const vector<line> &lines, int &line_idx) 
	{
		return ::closest_point_on_lines(from_pt, lines, line_idx);
	};

	line SplashkitLineGeometry::line_from(const point_2d &start, const point_2d &end_pt) 
	{
		return ::line_from(start, end_pt);
	};

	line SplashkitLineGeometry::line_from(const point_2d &start, const vector_2d &offset) 
	{
		return ::line_from(start, offset);
	};

	line SplashkitLineGeometry::line_from(const vector_2d &v) 
	{
		return ::line_from(v);
	};

	line SplashkitLineGeometry::line_from(double x1, double y1, double x2, double y2) 
	{
		return ::line_from(x1, y1, x2, y2);
	};

	bool SplashkitLineGeometry::line_intersection_point(const line &line1, const line &line2, point_2d &pt) 
	{
		return ::line_intersection_point(line1, line2, pt);
	};

	bool SplashkitLineGeometry::line_intersects_circle(const line &l, const circle &c) 
	{
		return ::line_intersects_circle(l, c);
	};

	bool SplashkitLineGeometry::line_intersects_lines(const line &l, const vector<line> &lines) 
	{
		return ::line_intersects_lines(l, lines);
	};

	bool SplashkitLineGeometry::line_intersects_rect(const line &l, const rectangle &rect) 
	{
		return ::line_intersects_rect(l, rect);
	};

	float SplashkitLineGeometry::line_length(const line &l) 
	{
		return ::line_length(l);
	};

	float SplashkitLineGeometry::line_length_squared(const line &l) 
	{
		return ::line_length_squared(l);
	};

	point_2d SplashkitLineGeometry::line_mid_point(const line &l) 
	{
		return ::line_mid_point(l);
	};

	vector_2d SplashkitLineGeometry::line_normal(const line &l) 
	{
		return ::line_normal(l);
	};

	string SplashkitLineGeometry::line_to_string(const line &ln) 
	{
		return ::line_to_string(ln);
	};

	bool SplashkitLineGeometry::lines_intersect(const line &l1, const line &l2) 
	{
		return ::lines_intersect(l1, l2);
	};

}
