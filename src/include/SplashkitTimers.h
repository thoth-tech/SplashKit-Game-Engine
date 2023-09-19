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

#include "ITimers.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitTimers : public ITimers
	{
	public:
		timer create_timer(string name) override;
		void free_all_timers() override;
		void free_timer(timer to_free) override;
		bool has_timer(string name) override;
		void pause_timer(string name) override;
		void pause_timer(timer to_pause) override;
		void reset_timer(string name) override;
		void reset_timer(timer tmr) override;
		void resume_timer(string name) override;
		void resume_timer(timer to_resume) override;
		void start_timer(string name) override;
		void start_timer(timer to_start) override;
		void stop_timer(string name) override;
		void stop_timer(timer to_stop) override;
		timer timer_named(string name) override;
		bool timer_paused(string name) override;
		bool timer_paused(timer to_get) override;
		bool timer_started(string name) override;
		bool timer_started(timer to_get) override;
		int timer_ticks(string name) override;
		int timer_ticks(timer to_get) override;
	};
}
