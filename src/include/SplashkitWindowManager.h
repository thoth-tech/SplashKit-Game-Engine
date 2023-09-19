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

#include "IWindowManager.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitWindowManager : public IWindowManager
	{
	public:
		void clear_window(window wind, color clr) override;
		void close_all_windows() override;
		void close_current_window() override;
		void close_window(const string &name) override;
		void close_window(window wind) override;
		window current_window() override;
		bool current_window_has_border() override;
		int current_window_height() override;
		bool current_window_is_fullscreen() override;
		point_2d current_window_position() override;
		void current_window_toggle_border() override;
		void current_window_toggle_fullscreen() override;
		int current_window_width() override;
		int current_window_x() override;
		int current_window_y() override;
		bool has_window(string caption) override;
		bool is_current_window(window wind) override;
		void move_current_window_to(int x, int y) override;
		void move_window_to(const string &name, int x, int y) override;
		void move_window_to(window wind, int x, int y) override;
		window open_window(string caption, int width, int height) override;
		void refresh_window(window wind) override;
		void refresh_window(window wind, unsigned int target_fps) override;
		void resize_current_window(int width, int height) override;
		void resize_window(window wnd, int width, int height) override;
		void set_current_window(const string &name) override;
		void set_current_window(window wind) override;
		string window_caption(window wind) override;
		bool window_close_requested(const string &name) override;
		bool window_close_requested(window wind) override;
		bool window_has_border(const string &name) override;
		bool window_has_border(window wnd) override;
		bool window_has_focus(window wind) override;
		int window_height(const string &name) override;
		int window_height(window wind) override;
		bool window_is_fullscreen(const string &name) override;
		bool window_is_fullscreen(window wnd) override;
		window window_named(string caption) override;
		point_2d window_position(const string &name) override;
		point_2d window_position(window wnd) override;
		void window_set_icon(window wind, bitmap bmp) override;
		void window_toggle_border(const string &name) override;
		void window_toggle_border(window wnd) override;
		void window_toggle_fullscreen(const string &name) override;
		void window_toggle_fullscreen(window wnd) override;
		int window_width(const string &name) override;
		int window_width(window wind) override;
		window window_with_focus() override;
		int window_x(const string &name) override;
		int window_x(window wnd) override;
		int window_y(const string &name) override;
		int window_y(window wnd) override;
	};
}
