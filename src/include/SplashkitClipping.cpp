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
#include "SplashkitClipping.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	rectangle SplashkitClipping::current_clip() 
	{
		return ::current_clip();
	};

	rectangle SplashkitClipping::current_clip(bitmap bmp) 
	{
		return ::current_clip(bmp);
	};

	rectangle SplashkitClipping::current_clip(window wnd) 
	{
		return ::current_clip(wnd);
	};

	void SplashkitClipping::pop_clip(window wnd) 
	{
		::pop_clip(wnd);
	}

	void SplashkitClipping::pop_clip() 
	{
		::pop_clip();
	}

	void SplashkitClipping::pop_clip(bitmap bmp) 
	{
		::pop_clip(bmp);
	}

	void SplashkitClipping::push_clip(window wnd, const rectangle &r) 
	{
		::push_clip(wnd, r);
	}

	void SplashkitClipping::push_clip(bitmap bmp, const rectangle &r) 
	{
		::push_clip(bmp, r);
	}

	void SplashkitClipping::push_clip(const rectangle &r) 
	{
		::push_clip(r);
	}

	void SplashkitClipping::reset_clip(bitmap bmp) 
	{
		::reset_clip(bmp);
	}

	void SplashkitClipping::reset_clip() 
	{
		::reset_clip();
	}

	void SplashkitClipping::reset_clip(window wnd) 
	{
		::reset_clip(wnd);
	}

	void SplashkitClipping::set_clip(const rectangle &r) 
	{
		::set_clip(r);
	}

	void SplashkitClipping::set_clip(bitmap bmp, const rectangle &r) 
	{
		::set_clip(bmp, r);
	}

	void SplashkitClipping::set_clip(window wnd, const rectangle &r) 
	{
		::set_clip(wnd, r);
	}

}
