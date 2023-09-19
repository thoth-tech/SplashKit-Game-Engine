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
#include "SplashkitLineDrawing.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	void SplashkitLineDrawing::draw_line(color clr, const line &l) 
	{
		::draw_line(clr, l);
	}

	void SplashkitLineDrawing::draw_line(color clr, const line &l, drawing_options opts) 
	{
		::draw_line(clr, l, opts);
	}

	void SplashkitLineDrawing::draw_line(color clr, const point_2d &from_pt, const point_2d &to_pt) 
	{
		::draw_line(clr, from_pt, to_pt);
	}

	void SplashkitLineDrawing::draw_line(color clr, const point_2d &from_pt, const point_2d &to_pt, const drawing_options &opts) 
	{
		::draw_line(clr, from_pt, to_pt, opts);
	}

	void SplashkitLineDrawing::draw_line(color clr, double x1, double y1, double x2, double y2) 
	{
		::draw_line(clr, x1, y1, x2, y2);
	}

	void SplashkitLineDrawing::draw_line(color clr, double x1, double y1, double x2, double y2, const drawing_options &opts) 
	{
		::draw_line(clr, x1, y1, x2, y2, opts);
	}

	void SplashkitLineDrawing::draw_line_on_bitmap(bitmap destination, color clr, const line &l) 
	{
		::draw_line_on_bitmap(destination, clr, l);
	}

	void SplashkitLineDrawing::draw_line_on_bitmap(bitmap destination, color clr, const line &l, drawing_options opts) 
	{
		::draw_line_on_bitmap(destination, clr, l, opts);
	}

	void SplashkitLineDrawing::draw_line_on_bitmap(bitmap destination, color clr, const point_2d &from_pt, const point_2d &to_pt) 
	{
		::draw_line_on_bitmap(destination, clr, from_pt, to_pt);
	}

	void SplashkitLineDrawing::draw_line_on_bitmap(bitmap destination, color clr, const point_2d &from_pt, const point_2d &to_pt, const drawing_options &opts) 
	{
		::draw_line_on_bitmap(destination, clr, from_pt, to_pt, opts);
	}

	void SplashkitLineDrawing::draw_line_on_bitmap(bitmap destination, color clr, double x1, double y1, double x2, double y2) 
	{
		::draw_line_on_bitmap(destination, clr, x1, y1, x2, y2);
	}

	void SplashkitLineDrawing::draw_line_on_bitmap(bitmap destination, color clr, double x1, double y1, double x2, double y2, const drawing_options &opts) 
	{
		::draw_line_on_bitmap(destination, clr, x1, y1, x2, y2, opts);
	}

	void SplashkitLineDrawing::draw_line_on_window(window destination, color clr, const line &l) 
	{
		::draw_line_on_window(destination, clr, l);
	}

	void SplashkitLineDrawing::draw_line_on_window(window destination, color clr, const line &l, drawing_options opts) 
	{
		::draw_line_on_window(destination, clr, l, opts);
	}

	void SplashkitLineDrawing::draw_line_on_window(window destination, color clr, const point_2d &from_pt, const point_2d &to_pt) 
	{
		::draw_line_on_window(destination, clr, from_pt, to_pt);
	}

	void SplashkitLineDrawing::draw_line_on_window(window destination, color clr, const point_2d &from_pt, const point_2d &to_pt, const drawing_options &opts) 
	{
		::draw_line_on_window(destination, clr, from_pt, to_pt, opts);
	}

	void SplashkitLineDrawing::draw_line_on_window(window destination, color clr, double x1, double y1, double x2, double y2) 
	{
		::draw_line_on_window(destination, clr, x1, y1, x2, y2);
	}

	void SplashkitLineDrawing::draw_line_on_window(window destination, color clr, double x1, double y1, double x2, double y2, const drawing_options &opts) 
	{
		::draw_line_on_window(destination, clr, x1, y1, x2, y2, opts);
	}

}
