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

#include "IRectangleGeometry.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitRectangleGeometry : public IRectangleGeometry
	{
	public:
		rectangle inset_rectangle(const rectangle &rect, float inset_amount) override;
		rectangle intersection(const rectangle &rect1, const rectangle &rect2) override;
		rectangle rectangle_around(const circle &c) override;
		rectangle rectangle_around(const line &l) override;
		rectangle rectangle_around(const quad &q) override;
		rectangle rectangle_around(const triangle &t) override;
		float rectangle_bottom(const rectangle &rect) override;
		point_2d rectangle_center(const rectangle &rect) override;
		rectangle rectangle_from(const point_2d pt, const double width, const double height) override;
		rectangle rectangle_from(const point_2d pt1, const point_2d pt2) override;
		rectangle rectangle_from(double x, double y, double width, double height) override;
		float rectangle_left(const rectangle &rect) override;
		rectangle rectangle_offset_by(const rectangle &rect, const vector_2d &offset) override;
		float rectangle_right(const rectangle &rect) override;
		string rectangle_to_string(const rectangle &rect) override;
		float rectangle_top(const rectangle &rect) override;
		bool rectangles_intersect(const rectangle &rect1, const rectangle &rect2) override;
	};
}
