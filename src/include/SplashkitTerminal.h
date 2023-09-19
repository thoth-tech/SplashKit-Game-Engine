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

#include "ITerminal.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitTerminal : public ITerminal
	{
	public:
		void activate_advanced_terminal() override;
		bool advanced_terminal_active() override;
		void clear_terminal() override;
		void end_advanced_terminal() override;
		void move_cursor_to(int x, int y) override;
		char read_char() override;
		string read_line() override;
		void refresh_terminal() override;
		void set_terminal_bold(bool value) override;
		void set_terminal_colors(color foreground, color background) override;
		void set_terminal_echo_input(bool value) override;
		int terminal_height() override;
		int terminal_width() override;
		void write(char data) override;
		void write(double data) override;
		void write(int data) override;
		void write(string text) override;
		void write_at(string text, int x, int y) override;
		void write_line(char data) override;
		void write_line() override;
		void write_line(double data) override;
		void write_line(int data) override;
		void write_line(string line) override;
	};
}
