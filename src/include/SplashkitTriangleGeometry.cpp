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
#include "SplashkitTriangleGeometry.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	point_2d SplashkitTriangleGeometry::triangle_barycenter(const triangle &tri) 
	{
		return ::triangle_barycenter(tri);
	};

	triangle SplashkitTriangleGeometry::triangle_from(const point_2d &p1, const point_2d &p2, const point_2d &p3) 
	{
		return ::triangle_from(p1, p2, p3);
	};

	triangle SplashkitTriangleGeometry::triangle_from(double x1, double y1, double x2, double y2, double x3, double y3) 
	{
		return ::triangle_from(x1, y1, x2, y2, x3, y3);
	};

	bool SplashkitTriangleGeometry::triangle_rectangle_intersect(const triangle &tri, const rectangle &rect) 
	{
		return ::triangle_rectangle_intersect(tri, rect);
	};

	string SplashkitTriangleGeometry::triangle_to_string(const triangle &tri) 
	{
		return ::triangle_to_string(tri);
	};

	bool SplashkitTriangleGeometry::triangles_intersect(const triangle &t1, const triangle &t2) 
	{
		return ::triangles_intersect(t1, t2);
	};

}
