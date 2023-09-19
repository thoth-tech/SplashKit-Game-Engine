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
#include "SplashkitMatrix2d.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	void SplashkitMatrix2d::apply_matrix(const matrix_2d &matrix, quad &q) 
	{
		::apply_matrix(matrix, q);
	}

	void SplashkitMatrix2d::apply_matrix(const matrix_2d &m, triangle &tri) 
	{
		::apply_matrix(m, tri);
	}

	matrix_2d SplashkitMatrix2d::identity_matrix() 
	{
		return ::identity_matrix();
	};

	matrix_2d SplashkitMatrix2d::matrix_inverse(const matrix_2d &m) 
	{
		return ::matrix_inverse(m);
	};

	point_2d SplashkitMatrix2d::matrix_multiply(const matrix_2d &m, const point_2d &pt) 
	{
		return ::matrix_multiply(m, pt);
	};

	matrix_2d SplashkitMatrix2d::matrix_multiply(const matrix_2d &m1, const matrix_2d &m2) 
	{
		return ::matrix_multiply(m1, m2);
	};

	vector_2d SplashkitMatrix2d::matrix_multiply(const matrix_2d &m, const vector_2d &v) 
	{
		return ::matrix_multiply(m, v);
	};

	string SplashkitMatrix2d::matrix_to_string(const matrix_2d &matrix) 
	{
		return ::matrix_to_string(matrix);
	};

	matrix_2d SplashkitMatrix2d::rotation_matrix(double deg) 
	{
		return ::rotation_matrix(deg);
	};

	matrix_2d SplashkitMatrix2d::scale_matrix(const point_2d &scale) 
	{
		return ::scale_matrix(scale);
	};

	matrix_2d SplashkitMatrix2d::scale_matrix(const vector_2d &scale) 
	{
		return ::scale_matrix(scale);
	};

	matrix_2d SplashkitMatrix2d::scale_matrix(double scale) 
	{
		return ::scale_matrix(scale);
	};

	matrix_2d SplashkitMatrix2d::scale_rotate_translate_matrix(const point_2d &scale, double deg, const point_2d &translate) 
	{
		return ::scale_rotate_translate_matrix(scale, deg, translate);
	};

	matrix_2d SplashkitMatrix2d::translation_matrix(const point_2d &pt) 
	{
		return ::translation_matrix(pt);
	};

	matrix_2d SplashkitMatrix2d::translation_matrix(const vector_2d &pt) 
	{
		return ::translation_matrix(pt);
	};

	matrix_2d SplashkitMatrix2d::translation_matrix(double dx, double dy) 
	{
		return ::translation_matrix(dx, dy);
	};

}
