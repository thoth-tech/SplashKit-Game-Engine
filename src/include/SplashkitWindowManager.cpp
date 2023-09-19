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
#include "SplashkitWindowManager.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	void SplashkitWindowManager::clear_window(window wind, color clr) 
	{
		::clear_window(wind, clr);
	}

	void SplashkitWindowManager::close_all_windows() 
	{
		::close_all_windows();
	}

	void SplashkitWindowManager::close_current_window() 
	{
		::close_current_window();
	}

	void SplashkitWindowManager::close_window(const string &name) 
	{
		::close_window(name);
	}

	void SplashkitWindowManager::close_window(window wind) 
	{
		::close_window(wind);
	}

	window SplashkitWindowManager::current_window() 
	{
		return ::current_window();
	};

	bool SplashkitWindowManager::current_window_has_border() 
	{
		return ::current_window_has_border();
	};

	int SplashkitWindowManager::current_window_height() 
	{
		return ::current_window_height();
	};

	bool SplashkitWindowManager::current_window_is_fullscreen() 
	{
		return ::current_window_is_fullscreen();
	};

	point_2d SplashkitWindowManager::current_window_position() 
	{
		return ::current_window_position();
	};

	void SplashkitWindowManager::current_window_toggle_border() 
	{
		::current_window_toggle_border();
	}

	void SplashkitWindowManager::current_window_toggle_fullscreen() 
	{
		::current_window_toggle_fullscreen();
	}

	int SplashkitWindowManager::current_window_width() 
	{
		return ::current_window_width();
	};

	int SplashkitWindowManager::current_window_x() 
	{
		return ::current_window_x();
	};

	int SplashkitWindowManager::current_window_y() 
	{
		return ::current_window_y();
	};

	bool SplashkitWindowManager::has_window(string caption) 
	{
		return ::has_window(caption);
	};

	bool SplashkitWindowManager::is_current_window(window wind) 
	{
		return ::is_current_window(wind);
	};

	void SplashkitWindowManager::move_current_window_to(int x, int y) 
	{
		::move_current_window_to(x, y);
	}

	void SplashkitWindowManager::move_window_to(const string &name, int x, int y) 
	{
		::move_window_to(name, x, y);
	}

	void SplashkitWindowManager::move_window_to(window wind, int x, int y) 
	{
		::move_window_to(wind, x, y);
	}

	window SplashkitWindowManager::open_window(string caption, int width, int height) 
	{
		return ::open_window(caption, width, height);
	};

	void SplashkitWindowManager::refresh_window(window wind) 
	{
		::refresh_window(wind);
	}

	void SplashkitWindowManager::refresh_window(window wind, unsigned int target_fps) 
	{
		::refresh_window(wind, target_fps);
	}

	void SplashkitWindowManager::resize_current_window(int width, int height) 
	{
		::resize_current_window(width, height);
	}

	void SplashkitWindowManager::resize_window(window wnd, int width, int height) 
	{
		::resize_window(wnd, width, height);
	}

	void SplashkitWindowManager::set_current_window(const string &name) 
	{
		::set_current_window(name);
	}

	void SplashkitWindowManager::set_current_window(window wind) 
	{
		::set_current_window(wind);
	}

	string SplashkitWindowManager::window_caption(window wind) 
	{
		return ::window_caption(wind);
	};

	bool SplashkitWindowManager::window_close_requested(const string &name) 
	{
		return ::window_close_requested(name);
	};

	bool SplashkitWindowManager::window_close_requested(window wind) 
	{
		return ::window_close_requested(wind);
	};

	bool SplashkitWindowManager::window_has_border(const string &name) 
	{
		return ::window_has_border(name);
	};

	bool SplashkitWindowManager::window_has_border(window wnd) 
	{
		return ::window_has_border(wnd);
	};

	bool SplashkitWindowManager::window_has_focus(window wind) 
	{
		return ::window_has_focus(wind);
	};

	int SplashkitWindowManager::window_height(const string &name) 
	{
		return ::window_height(name);
	};

	int SplashkitWindowManager::window_height(window wind) 
	{
		return ::window_height(wind);
	};

	bool SplashkitWindowManager::window_is_fullscreen(const string &name) 
	{
		return ::window_is_fullscreen(name);
	};

	bool SplashkitWindowManager::window_is_fullscreen(window wnd) 
	{
		return ::window_is_fullscreen(wnd);
	};

	window SplashkitWindowManager::window_named(string caption) 
	{
		return ::window_named(caption);
	};

	point_2d SplashkitWindowManager::window_position(const string &name) 
	{
		return ::window_position(name);
	};

	point_2d SplashkitWindowManager::window_position(window wnd) 
	{
		return ::window_position(wnd);
	};

	void SplashkitWindowManager::window_set_icon(window wind, bitmap bmp) 
	{
		::window_set_icon(wind, bmp);
	}

	void SplashkitWindowManager::window_toggle_border(const string &name) 
	{
		::window_toggle_border(name);
	}

	void SplashkitWindowManager::window_toggle_border(window wnd) 
	{
		::window_toggle_border(wnd);
	}

	void SplashkitWindowManager::window_toggle_fullscreen(const string &name) 
	{
		::window_toggle_fullscreen(name);
	}

	void SplashkitWindowManager::window_toggle_fullscreen(window wnd) 
	{
		::window_toggle_fullscreen(wnd);
	}

	int SplashkitWindowManager::window_width(const string &name) 
	{
		return ::window_width(name);
	};

	int SplashkitWindowManager::window_width(window wind) 
	{
		return ::window_width(wind);
	};

	window SplashkitWindowManager::window_with_focus() 
	{
		return ::window_with_focus();
	};

	int SplashkitWindowManager::window_x(const string &name) 
	{
		return ::window_x(name);
	};

	int SplashkitWindowManager::window_x(window wnd) 
	{
		return ::window_x(wnd);
	};

	int SplashkitWindowManager::window_y(const string &name) 
	{
		return ::window_y(name);
	};

	int SplashkitWindowManager::window_y(window wnd) 
	{
		return ::window_y(wnd);
	};

}
