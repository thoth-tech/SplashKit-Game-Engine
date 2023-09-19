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
#include "SplashkitCamera.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	point_2d SplashkitCamera::camera_position() 
	{
		return ::camera_position();
	};

	double SplashkitCamera::camera_x() 
	{
		return ::camera_x();
	};

	double SplashkitCamera::camera_y() 
	{
		return ::camera_y();
	};

	void SplashkitCamera::center_camera_on(sprite s, const vector_2d &offset) 
	{
		::center_camera_on(s, offset);
	}

	void SplashkitCamera::center_camera_on(sprite s, double offset_x, double offset_y) 
	{
		::center_camera_on(s, offset_x, offset_y);
	}

	void SplashkitCamera::move_camera_by(const vector_2d &offset) 
	{
		::move_camera_by(offset);
	}

	void SplashkitCamera::move_camera_by(double dx, double dy) 
	{
		::move_camera_by(dx, dy);
	}

	void SplashkitCamera::move_camera_to(const point_2d &pt) 
	{
		::move_camera_to(pt);
	}

	void SplashkitCamera::move_camera_to(double x, double y) 
	{
		::move_camera_to(x, y);
	}

	bool SplashkitCamera::point_in_window(window wind, const point_2d &pt) 
	{
		return ::point_in_window(wind, pt);
	};

	bool SplashkitCamera::point_on_screen(const point_2d &pt) 
	{
		return ::point_on_screen(pt);
	};

	bool SplashkitCamera::rect_in_window(window wind, const rectangle &rect) 
	{
		return ::rect_in_window(wind, rect);
	};

	bool SplashkitCamera::rect_on_screen(const rectangle &rect) 
	{
		return ::rect_on_screen(rect);
	};

	point_2d SplashkitCamera::screen_center() 
	{
		return ::screen_center();
	};

	rectangle SplashkitCamera::screen_rectangle() 
	{
		return ::screen_rectangle();
	};

	void SplashkitCamera::set_camera_position(point_2d pos) 
	{
		::set_camera_position(pos);
	}

	void SplashkitCamera::set_camera_x(double x) 
	{
		::set_camera_x(x);
	}

	void SplashkitCamera::set_camera_y(double y) 
	{
		::set_camera_y(y);
	}

	point_2d SplashkitCamera::to_screen(const point_2d &pt) 
	{
		return ::to_screen(pt);
	};

	rectangle SplashkitCamera::to_screen(const rectangle &rect) 
	{
		return ::to_screen(rect);
	};

	double SplashkitCamera::to_screen_x(double world_x) 
	{
		return ::to_screen_x(world_x);
	};

	double SplashkitCamera::to_screen_y(double world_y) 
	{
		return ::to_screen_y(world_y);
	};

	point_2d SplashkitCamera::to_world(const point_2d &pt) 
	{
		return ::to_world(pt);
	};

	double SplashkitCamera::to_world_x(double screen_x) 
	{
		return ::to_world_x(screen_x);
	};

	double SplashkitCamera::to_world_y(double screen_y) 
	{
		return ::to_world_y(screen_y);
	};

	vector_2d SplashkitCamera::vector_world_to_screen() 
	{
		return ::vector_world_to_screen();
	};

	rectangle SplashkitCamera::window_area(window wind) 
	{
		return ::window_area(wind);
	};

}
