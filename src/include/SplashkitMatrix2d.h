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

#include "IMatrix2d.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitMatrix2d : public IMatrix2d
	{
	public:
		void apply_matrix(const matrix_2d &matrix, quad &q) override;
		void apply_matrix(const matrix_2d &m, triangle &tri) override;
		matrix_2d identity_matrix() override;
		matrix_2d matrix_inverse(const matrix_2d &m) override;
		point_2d matrix_multiply(const matrix_2d &m, const point_2d &pt) override;
		matrix_2d matrix_multiply(const matrix_2d &m1, const matrix_2d &m2) override;
		vector_2d matrix_multiply(const matrix_2d &m, const vector_2d &v) override;
		string matrix_to_string(const matrix_2d &matrix) override;
		matrix_2d rotation_matrix(double deg) override;
		matrix_2d scale_matrix(const point_2d &scale) override;
		matrix_2d scale_matrix(const vector_2d &scale) override;
		matrix_2d scale_matrix(double scale) override;
		matrix_2d scale_rotate_translate_matrix(const point_2d &scale, double deg, const point_2d &translate) override;
		matrix_2d translation_matrix(const point_2d &pt) override;
		matrix_2d translation_matrix(const vector_2d &pt) override;
		matrix_2d translation_matrix(double dx, double dy) override;
	};
}
