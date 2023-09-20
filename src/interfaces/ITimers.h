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

#include "timers.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class ITimers
{
public:
    virtual timer create_timer(string name) = 0;
    virtual void free_all_timers() = 0;
    virtual void free_timer(timer to_free) = 0;
    virtual bool has_timer(string name) = 0;
    virtual void pause_timer(string name) = 0;
    virtual void pause_timer(timer to_pause) = 0;
    virtual void reset_timer(string name) = 0;
    virtual void reset_timer(timer tmr) = 0;
    virtual void resume_timer(string name) = 0;
    virtual void resume_timer(timer to_resume) = 0;
    virtual void start_timer(string name) = 0;
    virtual void start_timer(timer to_start) = 0;
    virtual void stop_timer(string name) = 0;
    virtual void stop_timer(timer to_stop) = 0;
    virtual timer timer_named(string name) = 0;
    virtual bool timer_paused(string name) = 0;
    virtual bool timer_paused(timer to_get) = 0;
    virtual bool timer_started(string name) = 0;
    virtual bool timer_started(timer to_get) = 0;
    virtual int timer_ticks(string name) = 0;
    virtual int timer_ticks(timer to_get) = 0;
};