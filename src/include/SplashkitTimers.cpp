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
#include "SplashkitTimers.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	timer SplashkitTimers::create_timer(string name) 
	{
		return ::create_timer(name);
	};

	void SplashkitTimers::free_all_timers() 
	{
		::free_all_timers();
	}

	void SplashkitTimers::free_timer(timer to_free) 
	{
		::free_timer(to_free);
	}

	bool SplashkitTimers::has_timer(string name) 
	{
		return ::has_timer(name);
	};

	void SplashkitTimers::pause_timer(string name) 
	{
		::pause_timer(name);
	}

	void SplashkitTimers::pause_timer(timer to_pause) 
	{
		::pause_timer(to_pause);
	}

	void SplashkitTimers::reset_timer(string name) 
	{
		::reset_timer(name);
	}

	void SplashkitTimers::reset_timer(timer tmr) 
	{
		::reset_timer(tmr);
	}

	void SplashkitTimers::resume_timer(string name) 
	{
		::resume_timer(name);
	}

	void SplashkitTimers::resume_timer(timer to_resume) 
	{
		::resume_timer(to_resume);
	}

	void SplashkitTimers::start_timer(string name) 
	{
		::start_timer(name);
	}

	void SplashkitTimers::start_timer(timer to_start) 
	{
		::start_timer(to_start);
	}

	void SplashkitTimers::stop_timer(string name) 
	{
		::stop_timer(name);
	}

	void SplashkitTimers::stop_timer(timer to_stop) 
	{
		::stop_timer(to_stop);
	}

	timer SplashkitTimers::timer_named(string name) 
	{
		return ::timer_named(name);
	};

	bool SplashkitTimers::timer_paused(string name) 
	{
		return ::timer_paused(name);
	};

	bool SplashkitTimers::timer_paused(timer to_get) 
	{
		return ::timer_paused(to_get);
	};

	bool SplashkitTimers::timer_started(string name) 
	{
		return ::timer_started(name);
	};

	bool SplashkitTimers::timer_started(timer to_get) 
	{
		return ::timer_started(to_get);
	};

	int SplashkitTimers::timer_ticks(string name) 
	{
		return ::timer_ticks(name);
	};

	int SplashkitTimers::timer_ticks(timer to_get) 
	{
		return ::timer_ticks(to_get);
	};

}
