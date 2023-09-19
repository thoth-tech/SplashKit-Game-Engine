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
#include "SplashkitCollisions.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	bool SplashkitCollisions::bitmap_circle_collision(bitmap bmp, const point_2d &pt, const circle &circ) 
	{
		return ::bitmap_circle_collision(bmp, pt, circ);
	};

	bool SplashkitCollisions::bitmap_circle_collision(bitmap bmp, double x, double y, const circle &circ) 
	{
		return ::bitmap_circle_collision(bmp, x, y, circ);
	};

	bool SplashkitCollisions::bitmap_circle_collision(bitmap bmp, int cell, const matrix_2d &translation, const circle &circ) 
	{
		return ::bitmap_circle_collision(bmp, cell, translation, circ);
	};

	bool SplashkitCollisions::bitmap_circle_collision(bitmap bmp, int cell, const point_2d &pt, const circle &circ) 
	{
		return ::bitmap_circle_collision(bmp, cell, pt, circ);
	};

	bool SplashkitCollisions::bitmap_circle_collision(bitmap bmp, int cell, double x, double y, const circle &circ) 
	{
		return ::bitmap_circle_collision(bmp, cell, x, y, circ);
	};

	bool SplashkitCollisions::bitmap_collision(bitmap bmp1, double x1, double y1, bitmap bmp2, double x2, double y2) 
	{
		return ::bitmap_collision(bmp1, x1, y1, bmp2, x2, y2);
	};

	bool SplashkitCollisions::bitmap_collision(bitmap bmp1, const point_2d &pt1, bitmap bmp2, const point_2d &pt2) 
	{
		return ::bitmap_collision(bmp1, pt1, bmp2, pt2);
	};

	bool SplashkitCollisions::bitmap_collision(bitmap bmp1, int cell1, const matrix_2d &matrix1, bitmap bmp2, int cell2, const matrix_2d &matrix2) 
	{
		return ::bitmap_collision(bmp1, cell1, matrix1, bmp2, cell2, matrix2);
	};

	bool SplashkitCollisions::bitmap_collision(bitmap bmp1, int cell1, const point_2d &pt1, bitmap bmp2, int cell2, const point_2d &pt2) 
	{
		return ::bitmap_collision(bmp1, cell1, pt1, bmp2, cell2, pt2);
	};

	bool SplashkitCollisions::bitmap_collision(bitmap bmp1, int cell1, double x1, double y1, bitmap bmp2, int cell2, double x2, double y2) 
	{
		return ::bitmap_collision(bmp1, cell1, x1, y1, bmp2, cell2, x2, y2);
	};

	bool SplashkitCollisions::bitmap_point_collision(bitmap bmp, const matrix_2d &translation, const point_2d &pt) 
	{
		return ::bitmap_point_collision(bmp, translation, pt);
	};

	bool SplashkitCollisions::bitmap_point_collision(bitmap bmp, const point_2d &bmp_pt, const point_2d &pt) 
	{
		return ::bitmap_point_collision(bmp, bmp_pt, pt);
	};

	bool SplashkitCollisions::bitmap_point_collision(bitmap bmp, double bmp_x, double bmp_y, double x, double y) 
	{
		return ::bitmap_point_collision(bmp, bmp_x, bmp_y, x, y);
	};

	bool SplashkitCollisions::bitmap_point_collision(bitmap bmp, int cell, const matrix_2d &translation, const point_2d &pt) 
	{
		return ::bitmap_point_collision(bmp, cell, translation, pt);
	};

	bool SplashkitCollisions::bitmap_point_collision(bitmap bmp, int cell, const point_2d &bmp_pt, const point_2d &pt) 
	{
		return ::bitmap_point_collision(bmp, cell, bmp_pt, pt);
	};

	bool SplashkitCollisions::bitmap_point_collision(bitmap bmp, int cell, double bmp_x, double bmp_y, double x, double y) 
	{
		return ::bitmap_point_collision(bmp, cell, bmp_x, bmp_y, x, y);
	};

	bool SplashkitCollisions::bitmap_rectangle_collision(bitmap bmp, const point_2d &pt, const rectangle &rect) 
	{
		return ::bitmap_rectangle_collision(bmp, pt, rect);
	};

	bool SplashkitCollisions::bitmap_rectangle_collision(bitmap bmp, double x, double y, const rectangle &rect) 
	{
		return ::bitmap_rectangle_collision(bmp, x, y, rect);
	};

	bool SplashkitCollisions::bitmap_rectangle_collision(bitmap bmp, int cell, const matrix_2d &translation, const rectangle &rect) 
	{
		return ::bitmap_rectangle_collision(bmp, cell, translation, rect);
	};

	bool SplashkitCollisions::bitmap_rectangle_collision(bitmap bmp, int cell, const point_2d &pt, const rectangle &rect) 
	{
		return ::bitmap_rectangle_collision(bmp, cell, pt, rect);
	};

	bool SplashkitCollisions::bitmap_rectangle_collision(bitmap bmp, int cell, double x, double y, const rectangle &rect) 
	{
		return ::bitmap_rectangle_collision(bmp, cell, x, y, rect);
	};

	bool SplashkitCollisions::sprite_bitmap_collision(sprite s, bitmap bmp, double x, double y) 
	{
		return ::sprite_bitmap_collision(s, bmp, x, y);
	};

	bool SplashkitCollisions::sprite_bitmap_collision(sprite s, bitmap bmp, int cell, const point_2d &pt) 
	{
		return ::sprite_bitmap_collision(s, bmp, cell, pt);
	};

	bool SplashkitCollisions::sprite_bitmap_collision(sprite s, bitmap bmp, int cell, double x, double y) 
	{
		return ::sprite_bitmap_collision(s, bmp, cell, x, y);
	};

	bool SplashkitCollisions::sprite_collision(sprite s1, sprite s2) 
	{
		return ::sprite_collision(s1, s2);
	};

	bool SplashkitCollisions::sprite_point_collision(sprite s, const point_2d &pt) 
	{
		return ::sprite_point_collision(s, pt);
	};

	bool SplashkitCollisions::sprite_rectangle_collision(sprite s, const rectangle &rect) 
	{
		return ::sprite_rectangle_collision(s, rect);
	};

}
