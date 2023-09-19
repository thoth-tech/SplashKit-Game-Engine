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

#include "IImages.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitImages : public IImages
	{
	public:
		circle bitmap_bounding_circle(bitmap bmp, const point_2d &pt) override;
		rectangle bitmap_bounding_rectangle(bitmap bmp) override;
		rectangle bitmap_bounding_rectangle(bitmap bmp, double x, double y) override;
		point_2d bitmap_cell_center(bitmap bmp) override;
		circle bitmap_cell_circle(bitmap bmp, double x, double y) override;
		circle bitmap_cell_circle(bitmap bmp, const point_2d pt) override;
		circle bitmap_cell_circle(bitmap bmp, const point_2d pt, double scale) override;
		int bitmap_cell_columns(bitmap bmp) override;
		int bitmap_cell_count(bitmap bmp) override;
		int bitmap_cell_height(bitmap bmp) override;
		vector_2d bitmap_cell_offset(bitmap src, int cell) override;
		rectangle bitmap_cell_rectangle(bitmap src) override;
		rectangle bitmap_cell_rectangle(bitmap src, const point_2d &pt) override;
		int bitmap_cell_rows(bitmap bmp) override;
		int bitmap_cell_width(bitmap bmp) override;
		point_2d bitmap_center(bitmap bmp) override;
		string bitmap_filename(bitmap bmp) override;
		int bitmap_height(bitmap bmp) override;
		int bitmap_height(string name) override;
		string bitmap_name(bitmap bmp) override;
		bitmap bitmap_named(string name) override;
		rectangle bitmap_rectangle_of_cell(bitmap src, int cell) override;
		void bitmap_set_cell_details(bitmap bmp, int width, int height, int columns, int rows, int count) override;
		int bitmap_width(bitmap bmp) override;
		int bitmap_width(string name) override;
		void clear_bitmap(bitmap bmp, color clr) override;
		void clear_bitmap(string name, color clr) override;
		bitmap create_bitmap(string name, int width, int height) override;
		void draw_bitmap(bitmap bmp, double x, double y) override;
		void draw_bitmap(bitmap bmp, double x, double y, drawing_options opts) override;
		void draw_bitmap(string name, double x, double y) override;
		void draw_bitmap(string name, double x, double y, drawing_options opts) override;
		void draw_bitmap_on_bitmap(bitmap destination, bitmap bmp, double x, double y) override;
		void draw_bitmap_on_bitmap(bitmap destination, bitmap bmp, double x, double y, drawing_options opts) override;
		void draw_bitmap_on_window(window destination, bitmap bmp, double x, double y) override;
		void draw_bitmap_on_window(window destination, bitmap bmp, double x, double y, drawing_options opts) override;
		void free_all_bitmaps() override;
		void free_bitmap(bitmap to_delete) override;
		bool has_bitmap(string name) override;
		bitmap load_bitmap(string name, string filename) override;
		bool pixel_drawn_at_point(bitmap bmp, const point_2d &pt) override;
		bool pixel_drawn_at_point(bitmap bmp, double x, double y) override;
		bool pixel_drawn_at_point(bitmap bmp, int cell, const point_2d &pt) override;
		bool pixel_drawn_at_point(bitmap bmp, int cell, double x, double y) override;
		void setup_collision_mask(bitmap bmp) override;
	};
}
