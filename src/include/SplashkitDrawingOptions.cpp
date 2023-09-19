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
#include "SplashkitDrawingOptions.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	drawing_options SplashkitDrawingOptions::option_defaults() 
	{
		return ::option_defaults();
	};

	drawing_options SplashkitDrawingOptions::option_draw_to(bitmap dest) 
	{
		return ::option_draw_to(dest);
	};

	drawing_options SplashkitDrawingOptions::option_draw_to(bitmap dest, drawing_options opts) 
	{
		return ::option_draw_to(dest, opts);
	};

	drawing_options SplashkitDrawingOptions::option_draw_to(window dest) 
	{
		return ::option_draw_to(dest);
	};

	drawing_options SplashkitDrawingOptions::option_draw_to(window dest, drawing_options opts) 
	{
		return ::option_draw_to(dest, opts);
	};

	drawing_options SplashkitDrawingOptions::option_flip_x() 
	{
		return ::option_flip_x();
	};

	drawing_options SplashkitDrawingOptions::option_flip_x(drawing_options opts) 
	{
		return ::option_flip_x(opts);
	};

	drawing_options SplashkitDrawingOptions::option_flip_xy() 
	{
		return ::option_flip_xy();
	};

	drawing_options SplashkitDrawingOptions::option_flip_xy(drawing_options opts) 
	{
		return ::option_flip_xy(opts);
	};

	drawing_options SplashkitDrawingOptions::option_flip_y() 
	{
		return ::option_flip_y();
	};

	drawing_options SplashkitDrawingOptions::option_flip_y(drawing_options opts) 
	{
		return ::option_flip_y(opts);
	};

	drawing_options SplashkitDrawingOptions::option_line_width(int width) 
	{
		return ::option_line_width(width);
	};

	drawing_options SplashkitDrawingOptions::option_line_width(int width, drawing_options opts) 
	{
		return ::option_line_width(width, opts);
	};

	drawing_options SplashkitDrawingOptions::option_part_bmp(double x, double y, double w, double h) 
	{
		return ::option_part_bmp(x, y, w, h);
	};

	drawing_options SplashkitDrawingOptions::option_part_bmp(double x, double y, double w, double h, drawing_options opts) 
	{
		return ::option_part_bmp(x, y, w, h, opts);
	};

	drawing_options SplashkitDrawingOptions::option_part_bmp(rectangle part) 
	{
		return ::option_part_bmp(part);
	};

	drawing_options SplashkitDrawingOptions::option_part_bmp(rectangle part, drawing_options opts) 
	{
		return ::option_part_bmp(part, opts);
	};

	drawing_options SplashkitDrawingOptions::option_rotate_bmp(double angle) 
	{
		return ::option_rotate_bmp(angle);
	};

	drawing_options SplashkitDrawingOptions::option_rotate_bmp(double angle, double anchor_x, double anchor_y) 
	{
		return ::option_rotate_bmp(angle, anchor_x, anchor_y);
	};

	drawing_options SplashkitDrawingOptions::option_rotate_bmp(double angle, double anchor_x, double anchor_y, drawing_options opts) 
	{
		return ::option_rotate_bmp(angle, anchor_x, anchor_y, opts);
	};

	drawing_options SplashkitDrawingOptions::option_rotate_bmp(double angle, drawing_options opts) 
	{
		return ::option_rotate_bmp(angle, opts);
	};

	drawing_options SplashkitDrawingOptions::option_scale_bmp(double scale_x, double scale_y) 
	{
		return ::option_scale_bmp(scale_x, scale_y);
	};

	drawing_options SplashkitDrawingOptions::option_scale_bmp(double scale_x, double scale_y, drawing_options opts) 
	{
		return ::option_scale_bmp(scale_x, scale_y, opts);
	};

	drawing_options SplashkitDrawingOptions::option_to_screen() 
	{
		return ::option_to_screen();
	};

	drawing_options SplashkitDrawingOptions::option_to_screen(drawing_options opts) 
	{
		return ::option_to_screen(opts);
	};

	drawing_options SplashkitDrawingOptions::option_to_world() 
	{
		return ::option_to_world();
	};

	drawing_options SplashkitDrawingOptions::option_to_world(drawing_options opts) 
	{
		return ::option_to_world(opts);
	};

	drawing_options SplashkitDrawingOptions::option_with_animation(animation anim) 
	{
		return ::option_with_animation(anim);
	};

	drawing_options SplashkitDrawingOptions::option_with_animation(animation anim, drawing_options opts) 
	{
		return ::option_with_animation(anim, opts);
	};

	drawing_options SplashkitDrawingOptions::option_with_bitmap_cell(int cell) 
	{
		return ::option_with_bitmap_cell(cell);
	};

	drawing_options SplashkitDrawingOptions::option_with_bitmap_cell(int cell, drawing_options opts) 
	{
		return ::option_with_bitmap_cell(cell, opts);
	};

}
