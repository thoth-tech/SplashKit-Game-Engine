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
#include "SplashkitVector2d.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	double SplashkitVector2d::angle_between(const vector_2d &v1, const vector_2d &v2) 
	{
		return ::angle_between(v1, v2);
	};

	double SplashkitVector2d::dot_product(const vector_2d &v1, const vector_2d &v2) 
	{
		return ::dot_product(v1, v2);
	};

	bool SplashkitVector2d::is_zero_vector(const vector_2d &v) 
	{
		return ::is_zero_vector(v);
	};

	bool SplashkitVector2d::ray_intersection_point(const point_2d &from_pt, const vector_2d &heading, const line &l, point_2d &pt) 
	{
		return ::ray_intersection_point(from_pt, heading, l, pt);
	};

	vector_2d SplashkitVector2d::unit_vector(const vector_2d &v) 
	{
		return ::unit_vector(v);
	};

	vector_2d SplashkitVector2d::vector_add(const vector_2d &v1, const vector_2d &v2) 
	{
		return ::vector_add(v1, v2);
	};

	double SplashkitVector2d::vector_angle(const vector_2d v) 
	{
		return ::vector_angle(v);
	};

	vector_2d SplashkitVector2d::vector_from_angle(double angle, double magnitude) 
	{
		return ::vector_from_angle(angle, magnitude);
	};

	vector_2d SplashkitVector2d::vector_from_line(const line &l) 
	{
		return ::vector_from_line(l);
	};

	vector_2d SplashkitVector2d::vector_from_point_to_rect(const point_2d &pt, const rectangle &rect) 
	{
		return ::vector_from_point_to_rect(pt, rect);
	};

	bool SplashkitVector2d::vector_in_rect(const vector_2d &v, const rectangle &rect) 
	{
		return ::vector_in_rect(v, rect);
	};

	vector_2d SplashkitVector2d::vector_invert(const vector_2d &v) 
	{
		return ::vector_invert(v);
	};

	vector_2d SplashkitVector2d::vector_limit(const vector_2d &v, double limit) 
	{
		return ::vector_limit(v, limit);
	};

	double SplashkitVector2d::vector_magnitude(const vector_2d &v) 
	{
		return ::vector_magnitude(v);
	};

	double SplashkitVector2d::vector_magnitude_sqared(const vector_2d &v) 
	{
		return ::vector_magnitude_sqared(v);
	};

	vector_2d SplashkitVector2d::vector_multiply(const vector_2d &v1, double s) 
	{
		return ::vector_multiply(v1, s);
	};

	vector_2d SplashkitVector2d::vector_normal(const vector_2d &v) 
	{
		return ::vector_normal(v);
	};

	vector_2d SplashkitVector2d::vector_out_of_circle_from_circle(const circle &src, const circle &bounds, const vector_2d &velocity) 
	{
		return ::vector_out_of_circle_from_circle(src, bounds, velocity);
	};

	vector_2d SplashkitVector2d::vector_out_of_circle_from_point(const point_2d &pt, const circle &c, const vector_2d &velocity) 
	{
		return ::vector_out_of_circle_from_point(pt, c, velocity);
	};

	vector_2d SplashkitVector2d::vector_out_of_rect_from_circle(const circle &c, const rectangle &rect, const vector_2d &velocity) 
	{
		return ::vector_out_of_rect_from_circle(c, rect, velocity);
	};

	vector_2d SplashkitVector2d::vector_out_of_rect_from_point(const point_2d &pt, const rectangle &rect, const vector_2d &velocity) 
	{
		return ::vector_out_of_rect_from_point(pt, rect, velocity);
	};

	vector_2d SplashkitVector2d::vector_out_of_rect_from_rect(const rectangle &src, const rectangle &bounds, const vector_2d &velocity) 
	{
		return ::vector_out_of_rect_from_rect(src, bounds, velocity);
	};

	vector_2d SplashkitVector2d::vector_point_to_point(const point_2d &start, const point_2d &end_pt) 
	{
		return ::vector_point_to_point(start, end_pt);
	};

	vector_2d SplashkitVector2d::vector_subtract(const vector_2d &v1, const vector_2d &v2) 
	{
		return ::vector_subtract(v1, v2);
	};

	vector_2d SplashkitVector2d::vector_to(const point_2d &p1) 
	{
		return ::vector_to(p1);
	};

	vector_2d SplashkitVector2d::vector_to(double x, double y) 
	{
		return ::vector_to(x, y);
	};

	string SplashkitVector2d::vector_to_string(const vector_2d &v) 
	{
		return ::vector_to_string(v);
	};

	bool SplashkitVector2d::vectors_equal(const vector_2d &v1, const vector_2d v2) 
	{
		return ::vectors_equal(v1, v2);
	};

	bool SplashkitVector2d::vectors_not_equal(const vector_2d &v1, const vector_2d v2) 
	{
		return ::vectors_not_equal(v1, v2);
	};

}
