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
#include "SplashkitMouseInput.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	void SplashkitMouseInput::hide_mouse() 
	{
		::hide_mouse();
	}

	bool SplashkitMouseInput::mouse_clicked(mouse_button button) 
	{
		return ::mouse_clicked(button);
	};

	bool SplashkitMouseInput::mouse_down(mouse_button button) 
	{
		return ::mouse_down(button);
	};

	vector_2d SplashkitMouseInput::mouse_movement() 
	{
		return ::mouse_movement();
	};

	point_2d SplashkitMouseInput::mouse_position() 
	{
		return ::mouse_position();
	};

	vector_2d SplashkitMouseInput::mouse_position_vector() 
	{
		return ::mouse_position_vector();
	};

	bool SplashkitMouseInput::mouse_shown() 
	{
		return ::mouse_shown();
	};

	bool SplashkitMouseInput::mouse_up(mouse_button button) 
	{
		return ::mouse_up(button);
	};

	vector_2d SplashkitMouseInput::mouse_wheel_scroll() 
	{
		return ::mouse_wheel_scroll();
	};

	float SplashkitMouseInput::mouse_x() 
	{
		return ::mouse_x();
	};

	float SplashkitMouseInput::mouse_y() 
	{
		return ::mouse_y();
	};

	void SplashkitMouseInput::move_mouse(double x, double y) 
	{
		::move_mouse(x, y);
	}

	void SplashkitMouseInput::move_mouse(point_2d point) 
	{
		::move_mouse(point);
	}

	void SplashkitMouseInput::show_mouse() 
	{
		::show_mouse();
	}

	void SplashkitMouseInput::show_mouse(bool show) 
	{
		::show_mouse(show);
	}

}
