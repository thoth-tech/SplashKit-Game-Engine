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

#include "ICamera.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitCamera : public ICamera
	{
	public:
		point_2d camera_position() override;
		double camera_x() override;
		double camera_y() override;
		void center_camera_on(sprite s, const vector_2d &offset) override;
		void center_camera_on(sprite s, double offset_x, double offset_y) override;
		void move_camera_by(const vector_2d &offset) override;
		void move_camera_by(double dx, double dy) override;
		void move_camera_to(const point_2d &pt) override;
		void move_camera_to(double x, double y) override;
		bool point_in_window(window wind, const point_2d &pt) override;
		bool point_on_screen(const point_2d &pt) override;
		bool rect_in_window(window wind, const rectangle &rect) override;
		bool rect_on_screen(const rectangle &rect) override;
		point_2d screen_center() override;
		rectangle screen_rectangle() override;
		void set_camera_position(point_2d pos) override;
		void set_camera_x(double x) override;
		void set_camera_y(double y) override;
		point_2d to_screen(const point_2d &pt) override;
		rectangle to_screen(const rectangle &rect) override;
		double to_screen_x(double world_x) override;
		double to_screen_y(double world_y) override;
		point_2d to_world(const point_2d &pt) override;
		double to_world_x(double screen_x) override;
		double to_world_y(double screen_y) override;
		vector_2d vector_world_to_screen() override;
		rectangle window_area(window wind) override;
	};
}
