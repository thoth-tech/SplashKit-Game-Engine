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
#include "SplashkitTerminal.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	void SplashkitTerminal::activate_advanced_terminal() 
	{
		::activate_advanced_terminal();
	}

	bool SplashkitTerminal::advanced_terminal_active() 
	{
		return ::advanced_terminal_active();
	};

	void SplashkitTerminal::clear_terminal() 
	{
		::clear_terminal();
	}

	void SplashkitTerminal::end_advanced_terminal() 
	{
		::end_advanced_terminal();
	}

	void SplashkitTerminal::move_cursor_to(int x, int y) 
	{
		::move_cursor_to(x, y);
	}

	char SplashkitTerminal::read_char() 
	{
		return ::read_char();
	};

	string SplashkitTerminal::read_line() 
	{
		return ::read_line();
	};

	void SplashkitTerminal::refresh_terminal() 
	{
		::refresh_terminal();
	}

	void SplashkitTerminal::set_terminal_bold(bool value) 
	{
		::set_terminal_bold(value);
	}

	void SplashkitTerminal::set_terminal_colors(color foreground, color background) 
	{
		::set_terminal_colors(foreground, background);
	}

	void SplashkitTerminal::set_terminal_echo_input(bool value) 
	{
		::set_terminal_echo_input(value);
	}

	int SplashkitTerminal::terminal_height() 
	{
		return ::terminal_height();
	};

	int SplashkitTerminal::terminal_width() 
	{
		return ::terminal_width();
	};

	void SplashkitTerminal::write(char data) 
	{
		::write(data);
	}

	void SplashkitTerminal::write(double data) 
	{
		::write(data);
	}

	void SplashkitTerminal::write(int data) 
	{
		::write(data);
	}

	void SplashkitTerminal::write(string text) 
	{
		::write(text);
	}

	void SplashkitTerminal::write_at(string text, int x, int y) 
	{
		::write_at(text, x, y);
	}

	void SplashkitTerminal::write_line(char data) 
	{
		::write_line(data);
	}

	void SplashkitTerminal::write_line() 
	{
		::write_line();
	}

	void SplashkitTerminal::write_line(double data) 
	{
		::write_line(data);
	}

	void SplashkitTerminal::write_line(int data) 
	{
		::write_line(data);
	}

	void SplashkitTerminal::write_line(string line) 
	{
		::write_line(line);
	}

}
