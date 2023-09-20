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

#include "IClipping.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitClipping : public IClipping
	{
	public:
		rectangle current_clip() override;
		rectangle current_clip(bitmap bmp) override;
		rectangle current_clip(window wnd) override;
		void pop_clip(window wnd) override;
		void pop_clip() override;
		void pop_clip(bitmap bmp) override;
		void push_clip(window wnd, const rectangle &r) override;
		void push_clip(bitmap bmp, const rectangle &r) override;
		void push_clip(const rectangle &r) override;
		void reset_clip(bitmap bmp) override;
		void reset_clip() override;
		void reset_clip(window wnd) override;
		void set_clip(const rectangle &r) override;
		void set_clip(bitmap bmp, const rectangle &r) override;
		void set_clip(window wnd, const rectangle &r) override;
	};
}
