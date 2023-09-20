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
#include "SplashkitGraphics.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	void SplashkitGraphics::clear_screen() 
	{
		::clear_screen();
	}

	void SplashkitGraphics::clear_screen(color clr) 
	{
		::clear_screen(clr);
	}

	display SplashkitGraphics::display_details(unsigned int index) 
	{
		return ::display_details(index);
	};

	int SplashkitGraphics::display_height(display disp) 
	{
		return ::display_height(disp);
	};

	string SplashkitGraphics::display_name(display disp) 
	{
		return ::display_name(disp);
	};

	int SplashkitGraphics::display_width(display disp) 
	{
		return ::display_width(disp);
	};

	int SplashkitGraphics::display_x(display disp) 
	{
		return ::display_x(disp);
	};

	int SplashkitGraphics::display_y(display disp) 
	{
		return ::display_y(disp);
	};

	int SplashkitGraphics::number_of_displays() 
	{
		return ::number_of_displays();
	};

	void SplashkitGraphics::refresh_screen() 
	{
		::refresh_screen();
	}

	void SplashkitGraphics::refresh_screen(unsigned int target_fps) 
	{
		::refresh_screen(target_fps);
	}

	void SplashkitGraphics::save_bitmap(bitmap bmp, const string &basename) 
	{
		::save_bitmap(bmp, basename);
	}

	int SplashkitGraphics::screen_height() 
	{
		return ::screen_height();
	};

	int SplashkitGraphics::screen_width() 
	{
		return ::screen_width();
	};

	void SplashkitGraphics::take_screenshot(const string &basename) 
	{
		::take_screenshot(basename);
	}

	void SplashkitGraphics::take_screenshot(window wind, const string &basename) 
	{
		::take_screenshot(wind, basename);
	}

}
