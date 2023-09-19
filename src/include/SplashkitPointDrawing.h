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

#include "IPointDrawing.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitPointDrawing : public IPointDrawing
	{
	public:
		void draw_pixel(color clr, const point_2d &pt) override;
		void draw_pixel(color clr, const point_2d &pt, drawing_options opts) override;
		void draw_pixel(color clr, double x, double y) override;
		void draw_pixel(color clr, double x, double y, drawing_options opts) override;
		void draw_pixel_on_bitmap(bitmap destination, color clr, const point_2d &pt) override;
		void draw_pixel_on_bitmap(bitmap destination, color clr, const point_2d &pt, drawing_options opts) override;
		void draw_pixel_on_bitmap(bitmap destination, color clr, double x, double y) override;
		void draw_pixel_on_bitmap(bitmap destination, color clr, double x, double y, drawing_options opts) override;
		void draw_pixel_on_window(window destination, color clr, const point_2d &pt) override;
		void draw_pixel_on_window(window destination, color clr, const point_2d &pt, drawing_options opts) override;
		void draw_pixel_on_window(window destination, color clr, double x, double y) override;
		void draw_pixel_on_window(window destination, color clr, double x, double y, drawing_options opts) override;
		color get_pixel(bitmap bmp, const point_2d &pt) override;
		color get_pixel(bitmap bmp, double x, double y) override;
		color get_pixel(const point_2d &pt) override;
		color get_pixel(double x, double y) override;
		color get_pixel(window wnd, const point_2d &pt) override;
		color get_pixel(window wnd, double x, double y) override;
		color get_pixel_from_window(window destination, const point_2d &pt) override;
		color get_pixel_from_window(window destination, double x, double y) override;
	};
}
