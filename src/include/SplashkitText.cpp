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
#include "SplashkitText.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	void SplashkitText::draw_text(const string &text, const color &clr, const string &fnt, int font_size, double x, double y) 
	{
		::draw_text(text, clr, fnt, font_size, x, y);
	}

	void SplashkitText::draw_text(const string &text, const color &clr, const string &fnt, int font_size, double x, double y, const drawing_options &opts) 
	{
		::draw_text(text, clr, fnt, font_size, x, y, opts);
	}

	void SplashkitText::draw_text(const string &text, const color &clr, double x, double y) 
	{
		::draw_text(text, clr, x, y);
	}

	void SplashkitText::draw_text(const string &text, const color &clr, double x, double y, const drawing_options &opts) 
	{
		::draw_text(text, clr, x, y, opts);
	}

	void SplashkitText::draw_text(const string &text, const color &clr, font fnt, int font_size, double x, double y) 
	{
		::draw_text(text, clr, fnt, font_size, x, y);
	}

	void SplashkitText::draw_text(const string &text, const color &clr, font fnt, int font_size, double x, double y, const drawing_options &opts) 
	{
		::draw_text(text, clr, fnt, font_size, x, y, opts);
	}

	void SplashkitText::draw_text_on_bitmap(bitmap bmp, const string &text, const color &clr, const string &fnt, int font_size, double x, double y) 
	{
		::draw_text_on_bitmap(bmp, text, clr, fnt, font_size, x, y);
	}

	void SplashkitText::draw_text_on_bitmap(bitmap bmp, const string &text, const color &clr, const string &fnt, int font_size, double x, double y, const drawing_options &opts) 
	{
		::draw_text_on_bitmap(bmp, text, clr, fnt, font_size, x, y, opts);
	}

	void SplashkitText::draw_text_on_bitmap(bitmap bmp, const string &text, const color &clr, double x, double y) 
	{
		::draw_text_on_bitmap(bmp, text, clr, x, y);
	}

	void SplashkitText::draw_text_on_bitmap(bitmap bmp, const string &text, const color &clr, double x, double y, const drawing_options &opts) 
	{
		::draw_text_on_bitmap(bmp, text, clr, x, y, opts);
	}

	void SplashkitText::draw_text_on_bitmap(bitmap bmp, const string &text, const color &clr, font fnt, int font_size, double x, double y) 
	{
		::draw_text_on_bitmap(bmp, text, clr, fnt, font_size, x, y);
	}

	void SplashkitText::draw_text_on_bitmap(bitmap bmp, const string &text, const color &clr, font fnt, int font_size, double x, double y, const drawing_options &opts) 
	{
		::draw_text_on_bitmap(bmp, text, clr, fnt, font_size, x, y, opts);
	}

	void SplashkitText::draw_text_on_window(window wnd, const string &text, const color &clr, const string &fnt, int font_size, double x, double y) 
	{
		::draw_text_on_window(wnd, text, clr, fnt, font_size, x, y);
	}

	void SplashkitText::draw_text_on_window(window wnd, const string &text, const color &clr, const string &fnt, int font_size, double x, double y, const drawing_options &opts) 
	{
		::draw_text_on_window(wnd, text, clr, fnt, font_size, x, y, opts);
	}

	void SplashkitText::draw_text_on_window(window wnd, const string &text, const color &clr, double x, double y) 
	{
		::draw_text_on_window(wnd, text, clr, x, y);
	}

	void SplashkitText::draw_text_on_window(window wnd, const string &text, const color &clr, double x, double y, const drawing_options &opts) 
	{
		::draw_text_on_window(wnd, text, clr, x, y, opts);
	}

	void SplashkitText::draw_text_on_window(window wnd, const string &text, const color &clr, font fnt, int font_size, double x, double y) 
	{
		::draw_text_on_window(wnd, text, clr, fnt, font_size, x, y);
	}

	void SplashkitText::draw_text_on_window(window wnd, const string &text, const color &clr, font fnt, int font_size, double x, double y, const drawing_options &opts) 
	{
		::draw_text_on_window(wnd, text, clr, fnt, font_size, x, y, opts);
	}

	bool SplashkitText::font_has_size(const string &name, int font_size) 
	{
		return ::font_has_size(name, font_size);
	};

	bool SplashkitText::font_has_size(font fnt, int font_size) 
	{
		return ::font_has_size(fnt, font_size);
	};

	void SplashkitText::font_load_size(const string &name, int font_size) 
	{
		::font_load_size(name, font_size);
	}

	void SplashkitText::font_load_size(font fnt, int font_size) 
	{
		::font_load_size(fnt, font_size);
	}

	font SplashkitText::font_named(string name) 
	{
		return ::font_named(name);
	};

	void SplashkitText::free_all_fonts() 
	{
		::free_all_fonts();
	}

	void SplashkitText::free_font(font fnt) 
	{
		::free_font(fnt);
	}

	font_style SplashkitText::get_font_style(const string &name) 
	{
		return ::get_font_style(name);
	};

	font_style SplashkitText::get_font_style(font fnt) 
	{
		return ::get_font_style(fnt);
	};

	bool SplashkitText::has_font(font fnt) 
	{
		return ::has_font(fnt);
	};

	bool SplashkitText::has_font(string name) 
	{
		return ::has_font(name);
	};

	font SplashkitText::load_font(const string &name, const string &filename) 
	{
		return ::load_font(name, filename);
	};

	void SplashkitText::set_font_style(const string &name, font_style style) 
	{
		::set_font_style(name, style);
	}

	void SplashkitText::set_font_style(font fnt, font_style style) 
	{
		::set_font_style(fnt, style);
	}

	int SplashkitText::text_height(const string &text, const string &fnt, int font_size) 
	{
		return ::text_height(text, fnt, font_size);
	};

	int SplashkitText::text_height(const string &text, font fnt, int font_size) 
	{
		return ::text_height(text, fnt, font_size);
	};

	int SplashkitText::text_width(const string &text, const string &fnt, int font_size) 
	{
		return ::text_width(text, fnt, font_size);
	};

	int SplashkitText::text_width(const string &text, font fnt, int font_size) 
	{
		return ::text_width(text, fnt, font_size);
	};

}
