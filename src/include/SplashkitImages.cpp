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
#include "SplashkitImages.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	circle SplashkitImages::bitmap_bounding_circle(bitmap bmp, const point_2d &pt) 
	{
		return ::bitmap_bounding_circle(bmp, pt);
	};

	rectangle SplashkitImages::bitmap_bounding_rectangle(bitmap bmp) 
	{
		return ::bitmap_bounding_rectangle(bmp);
	};

	rectangle SplashkitImages::bitmap_bounding_rectangle(bitmap bmp, double x, double y) 
	{
		return ::bitmap_bounding_rectangle(bmp, x, y);
	};

	point_2d SplashkitImages::bitmap_cell_center(bitmap bmp) 
	{
		return ::bitmap_cell_center(bmp);
	};

	circle SplashkitImages::bitmap_cell_circle(bitmap bmp, double x, double y) 
	{
		return ::bitmap_cell_circle(bmp, x, y);
	};

	circle SplashkitImages::bitmap_cell_circle(bitmap bmp, const point_2d pt) 
	{
		return ::bitmap_cell_circle(bmp, pt);
	};

	circle SplashkitImages::bitmap_cell_circle(bitmap bmp, const point_2d pt, double scale) 
	{
		return ::bitmap_cell_circle(bmp, pt, scale);
	};

	int SplashkitImages::bitmap_cell_columns(bitmap bmp) 
	{
		return ::bitmap_cell_columns(bmp);
	};

	int SplashkitImages::bitmap_cell_count(bitmap bmp) 
	{
		return ::bitmap_cell_count(bmp);
	};

	int SplashkitImages::bitmap_cell_height(bitmap bmp) 
	{
		return ::bitmap_cell_height(bmp);
	};

	vector_2d SplashkitImages::bitmap_cell_offset(bitmap src, int cell) 
	{
		return ::bitmap_cell_offset(src, cell);
	};

	rectangle SplashkitImages::bitmap_cell_rectangle(bitmap src) 
	{
		return ::bitmap_cell_rectangle(src);
	};

	rectangle SplashkitImages::bitmap_cell_rectangle(bitmap src, const point_2d &pt) 
	{
		return ::bitmap_cell_rectangle(src, pt);
	};

	int SplashkitImages::bitmap_cell_rows(bitmap bmp) 
	{
		return ::bitmap_cell_rows(bmp);
	};

	int SplashkitImages::bitmap_cell_width(bitmap bmp) 
	{
		return ::bitmap_cell_width(bmp);
	};

	point_2d SplashkitImages::bitmap_center(bitmap bmp) 
	{
		return ::bitmap_center(bmp);
	};

	string SplashkitImages::bitmap_filename(bitmap bmp) 
	{
		return ::bitmap_filename(bmp);
	};

	int SplashkitImages::bitmap_height(bitmap bmp) 
	{
		return ::bitmap_height(bmp);
	};

	int SplashkitImages::bitmap_height(string name) 
	{
		return ::bitmap_height(name);
	};

	string SplashkitImages::bitmap_name(bitmap bmp) 
	{
		return ::bitmap_name(bmp);
	};

	bitmap SplashkitImages::bitmap_named(string name) 
	{
		return ::bitmap_named(name);
	};

	rectangle SplashkitImages::bitmap_rectangle_of_cell(bitmap src, int cell) 
	{
		return ::bitmap_rectangle_of_cell(src, cell);
	};

	void SplashkitImages::bitmap_set_cell_details(bitmap bmp, int width, int height, int columns, int rows, int count) 
	{
		::bitmap_set_cell_details(bmp, width, height, columns, rows, count);
	}

	int SplashkitImages::bitmap_width(bitmap bmp) 
	{
		return ::bitmap_width(bmp);
	};

	int SplashkitImages::bitmap_width(string name) 
	{
		return ::bitmap_width(name);
	};

	void SplashkitImages::clear_bitmap(bitmap bmp, color clr) 
	{
		::clear_bitmap(bmp, clr);
	}

	void SplashkitImages::clear_bitmap(string name, color clr) 
	{
		::clear_bitmap(name, clr);
	}

	bitmap SplashkitImages::create_bitmap(string name, int width, int height) 
	{
		return ::create_bitmap(name, width, height);
	};

	void SplashkitImages::draw_bitmap(bitmap bmp, double x, double y) 
	{
		::draw_bitmap(bmp, x, y);
	}

	void SplashkitImages::draw_bitmap(bitmap bmp, double x, double y, drawing_options opts) 
	{
		::draw_bitmap(bmp, x, y, opts);
	}

	void SplashkitImages::draw_bitmap(string name, double x, double y) 
	{
		::draw_bitmap(name, x, y);
	}

	void SplashkitImages::draw_bitmap(string name, double x, double y, drawing_options opts) 
	{
		::draw_bitmap(name, x, y, opts);
	}

	void SplashkitImages::draw_bitmap_on_bitmap(bitmap destination, bitmap bmp, double x, double y) 
	{
		::draw_bitmap_on_bitmap(destination, bmp, x, y);
	}

	void SplashkitImages::draw_bitmap_on_bitmap(bitmap destination, bitmap bmp, double x, double y, drawing_options opts) 
	{
		::draw_bitmap_on_bitmap(destination, bmp, x, y, opts);
	}

	void SplashkitImages::draw_bitmap_on_window(window destination, bitmap bmp, double x, double y) 
	{
		::draw_bitmap_on_window(destination, bmp, x, y);
	}

	void SplashkitImages::draw_bitmap_on_window(window destination, bitmap bmp, double x, double y, drawing_options opts) 
	{
		::draw_bitmap_on_window(destination, bmp, x, y, opts);
	}

	void SplashkitImages::free_all_bitmaps() 
	{
		::free_all_bitmaps();
	}

	void SplashkitImages::free_bitmap(bitmap to_delete) 
	{
		::free_bitmap(to_delete);
	}

	bool SplashkitImages::has_bitmap(string name) 
	{
		return ::has_bitmap(name);
	};

	bitmap SplashkitImages::load_bitmap(string name, string filename) 
	{
		return ::load_bitmap(name, filename);
	};

	bool SplashkitImages::pixel_drawn_at_point(bitmap bmp, const point_2d &pt) 
	{
		return ::pixel_drawn_at_point(bmp, pt);
	};

	bool SplashkitImages::pixel_drawn_at_point(bitmap bmp, double x, double y) 
	{
		return ::pixel_drawn_at_point(bmp, x, y);
	};

	bool SplashkitImages::pixel_drawn_at_point(bitmap bmp, int cell, const point_2d &pt) 
	{
		return ::pixel_drawn_at_point(bmp, cell, pt);
	};

	bool SplashkitImages::pixel_drawn_at_point(bitmap bmp, int cell, double x, double y) 
	{
		return ::pixel_drawn_at_point(bmp, cell, x, y);
	};

	void SplashkitImages::setup_collision_mask(bitmap bmp) 
	{
		::setup_collision_mask(bmp);
	}

}
