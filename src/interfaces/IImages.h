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

#include "images.h"
#include "window_manager.h"
#include "types.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class IImages
{
public:
    virtual circle bitmap_bounding_circle(bitmap bmp, const point_2d &pt) = 0;
    virtual rectangle bitmap_bounding_rectangle(bitmap bmp) = 0;
    virtual rectangle bitmap_bounding_rectangle(bitmap bmp, double x, double y) = 0;
    virtual point_2d bitmap_cell_center(bitmap bmp) = 0;
    virtual circle bitmap_cell_circle(bitmap bmp, double x, double y) = 0;
    virtual circle bitmap_cell_circle(bitmap bmp, const point_2d pt) = 0;
    virtual circle bitmap_cell_circle(bitmap bmp, const point_2d pt, double scale) = 0;
    virtual int bitmap_cell_columns(bitmap bmp) = 0;
    virtual int bitmap_cell_count(bitmap bmp) = 0;
    virtual int bitmap_cell_height(bitmap bmp) = 0;
    virtual vector_2d bitmap_cell_offset(bitmap src, int cell) = 0;
    virtual rectangle bitmap_cell_rectangle(bitmap src) = 0;
    virtual rectangle bitmap_cell_rectangle(bitmap src, const point_2d &pt) = 0;
    virtual int bitmap_cell_rows(bitmap bmp) = 0;
    virtual int bitmap_cell_width(bitmap bmp) = 0;
    virtual point_2d bitmap_center(bitmap bmp) = 0;
    virtual string bitmap_filename(bitmap bmp) = 0;
    virtual int bitmap_height(bitmap bmp) = 0;
    virtual int bitmap_height(string name) = 0;
    virtual string bitmap_name(bitmap bmp) = 0;
    virtual bitmap bitmap_named(string name) = 0;
    virtual rectangle bitmap_rectangle_of_cell(bitmap src, int cell) = 0;
    virtual void bitmap_set_cell_details(bitmap bmp, int width, int height, int columns, int rows, int count) = 0;
    virtual int bitmap_width(bitmap bmp) = 0;
    virtual int bitmap_width(string name) = 0;
    virtual void clear_bitmap(bitmap bmp, color clr) = 0;
    virtual void clear_bitmap(string name, color clr) = 0;
    virtual bitmap create_bitmap(string name, int width, int height) = 0;
    virtual void draw_bitmap(bitmap bmp, double x, double y) = 0;
    virtual void draw_bitmap(bitmap bmp, double x, double y, drawing_options opts) = 0;
    virtual void draw_bitmap(string name, double x, double y) = 0;
    virtual void draw_bitmap(string name, double x, double y, drawing_options opts) = 0;
    virtual void draw_bitmap_on_bitmap(bitmap destination, bitmap bmp, double x, double y) = 0;
    virtual void draw_bitmap_on_bitmap(bitmap destination, bitmap bmp, double x, double y, drawing_options opts) = 0;
    virtual void draw_bitmap_on_window(window destination, bitmap bmp, double x, double y) = 0;
    virtual void draw_bitmap_on_window(window destination, bitmap bmp, double x, double y, drawing_options opts) = 0;
    virtual void free_all_bitmaps() = 0;
    virtual void free_bitmap(bitmap to_delete) = 0;
    virtual bool has_bitmap(string name) = 0;
    virtual bitmap load_bitmap(string name, string filename) = 0;
    virtual bool pixel_drawn_at_point(bitmap bmp, const point_2d &pt) = 0;
    virtual bool pixel_drawn_at_point(bitmap bmp, double x, double y) = 0;
    virtual bool pixel_drawn_at_point(bitmap bmp, int cell, const point_2d &pt) = 0;
    virtual bool pixel_drawn_at_point(bitmap bmp, int cell, double x, double y) = 0;
    virtual void setup_collision_mask(bitmap bmp) = 0;
};