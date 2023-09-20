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
#include "SplashkitTextInput.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	void SplashkitTextInput::draw_collected_text(color clr, font fnt, int font_size, const drawing_options &opts) 
	{
		::draw_collected_text(clr, fnt, font_size, opts);
	}

	void SplashkitTextInput::end_reading_text() 
	{
		::end_reading_text();
	}

	void SplashkitTextInput::end_reading_text(window wind) 
	{
		::end_reading_text(wind);
	}

	bool SplashkitTextInput::reading_text() 
	{
		return ::reading_text();
	};

	bool SplashkitTextInput::reading_text(window wind) 
	{
		return ::reading_text(wind);
	};

	void SplashkitTextInput::start_reading_text(rectangle rect) 
	{
		::start_reading_text(rect);
	}

	void SplashkitTextInput::start_reading_text(rectangle rect, string initial_text) 
	{
		::start_reading_text(rect, initial_text);
	}

	void SplashkitTextInput::start_reading_text(window wind, rectangle rect) 
	{
		::start_reading_text(wind, rect);
	}

	void SplashkitTextInput::start_reading_text(window wind, rectangle rect, string initial_text) 
	{
		::start_reading_text(wind, rect, initial_text);
	}

	bool SplashkitTextInput::text_entry_cancelled() 
	{
		return ::text_entry_cancelled();
	};

	bool SplashkitTextInput::text_entry_cancelled(window wind) 
	{
		return ::text_entry_cancelled(wind);
	};

	string SplashkitTextInput::text_input() 
	{
		return ::text_input();
	};

	string SplashkitTextInput::text_input(window wind) 
	{
		return ::text_input(wind);
	};

}
