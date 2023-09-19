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

#include "IDrawingOptions.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitDrawingOptions : public IDrawingOptions
	{
	public:
		drawing_options option_defaults() override;
		drawing_options option_draw_to(bitmap dest) override;
		drawing_options option_draw_to(bitmap dest, drawing_options opts) override;
		drawing_options option_draw_to(window dest) override;
		drawing_options option_draw_to(window dest, drawing_options opts) override;
		drawing_options option_flip_x() override;
		drawing_options option_flip_x(drawing_options opts) override;
		drawing_options option_flip_xy() override;
		drawing_options option_flip_xy(drawing_options opts) override;
		drawing_options option_flip_y() override;
		drawing_options option_flip_y(drawing_options opts) override;
		drawing_options option_line_width(int width) override;
		drawing_options option_line_width(int width, drawing_options opts) override;
		drawing_options option_part_bmp(double x, double y, double w, double h) override;
		drawing_options option_part_bmp(double x, double y, double w, double h, drawing_options opts) override;
		drawing_options option_part_bmp(rectangle part) override;
		drawing_options option_part_bmp(rectangle part, drawing_options opts) override;
		drawing_options option_rotate_bmp(double angle) override;
		drawing_options option_rotate_bmp(double angle, double anchor_x, double anchor_y) override;
		drawing_options option_rotate_bmp(double angle, double anchor_x, double anchor_y, drawing_options opts) override;
		drawing_options option_rotate_bmp(double angle, drawing_options opts) override;
		drawing_options option_scale_bmp(double scale_x, double scale_y) override;
		drawing_options option_scale_bmp(double scale_x, double scale_y, drawing_options opts) override;
		drawing_options option_to_screen() override;
		drawing_options option_to_screen(drawing_options opts) override;
		drawing_options option_to_world() override;
		drawing_options option_to_world(drawing_options opts) override;
		drawing_options option_with_animation(animation anim) override;
		drawing_options option_with_animation(animation anim, drawing_options opts) override;
		drawing_options option_with_bitmap_cell(int cell) override;
		drawing_options option_with_bitmap_cell(int cell, drawing_options opts) override;
	};
}
