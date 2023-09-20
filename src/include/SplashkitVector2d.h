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

#include "IVector2d.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitVector2d : public IVector2d
	{
	public:
		double angle_between(const vector_2d &v1, const vector_2d &v2) override;
		double dot_product(const vector_2d &v1, const vector_2d &v2) override;
		bool is_zero_vector(const vector_2d &v) override;
		bool ray_intersection_point(const point_2d &from_pt, const vector_2d &heading, const line &l, point_2d &pt) override;
		vector_2d unit_vector(const vector_2d &v) override;
		vector_2d vector_add(const vector_2d &v1, const vector_2d &v2) override;
		double vector_angle(const vector_2d v) override;
		vector_2d vector_from_angle(double angle, double magnitude) override;
		vector_2d vector_from_line(const line &l) override;
		vector_2d vector_from_point_to_rect(const point_2d &pt, const rectangle &rect) override;
		bool vector_in_rect(const vector_2d &v, const rectangle &rect) override;
		vector_2d vector_invert(const vector_2d &v) override;
		vector_2d vector_limit(const vector_2d &v, double limit) override;
		double vector_magnitude(const vector_2d &v) override;
		double vector_magnitude_sqared(const vector_2d &v) override;
		vector_2d vector_multiply(const vector_2d &v1, double s) override;
		vector_2d vector_normal(const vector_2d &v) override;
		vector_2d vector_out_of_circle_from_circle(const circle &src, const circle &bounds, const vector_2d &velocity) override;
		vector_2d vector_out_of_circle_from_point(const point_2d &pt, const circle &c, const vector_2d &velocity) override;
		vector_2d vector_out_of_rect_from_circle(const circle &c, const rectangle &rect, const vector_2d &velocity) override;
		vector_2d vector_out_of_rect_from_point(const point_2d &pt, const rectangle &rect, const vector_2d &velocity) override;
		vector_2d vector_out_of_rect_from_rect(const rectangle &src, const rectangle &bounds, const vector_2d &velocity) override;
		vector_2d vector_point_to_point(const point_2d &start, const point_2d &end_pt) override;
		vector_2d vector_subtract(const vector_2d &v1, const vector_2d &v2) override;
		vector_2d vector_to(const point_2d &p1) override;
		vector_2d vector_to(double x, double y) override;
		string vector_to_string(const vector_2d &v) override;
		bool vectors_equal(const vector_2d &v1, const vector_2d v2) override;
		bool vectors_not_equal(const vector_2d &v1, const vector_2d v2) override;
	};
}
