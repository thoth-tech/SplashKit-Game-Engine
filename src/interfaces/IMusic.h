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

#include "music.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class IMusic
{
public:
    virtual void fade_music_in(const string &name, int ms) = 0;
    virtual void fade_music_in(const string &name, int times, int ms) = 0;
    virtual void fade_music_in(music data, int ms) = 0;
    virtual void fade_music_in(music data, int times, int ms) = 0;
    virtual void fade_music_out(int ms) = 0;
    virtual void free_all_music() = 0;
    virtual void free_music(music effect) = 0;
    virtual bool has_music(const string &name) = 0;
    virtual music load_music(const string &name, const string &filename) = 0;
    virtual string music_filename(music data) = 0;
    virtual string music_name(music data) = 0;
    virtual music music_named(const string &name) = 0;
    virtual bool music_playing() = 0;
    virtual float music_volume() = 0;
    virtual void pause_music() = 0;
    virtual void play_music(const string &name) = 0;
    virtual void play_music(const string &name, int times) = 0;
    virtual void play_music(music data) = 0;
    virtual void play_music(music data, int times) = 0;
    virtual void play_music(music data, int times, float volume) = 0;
    virtual void resume_music() = 0;
    virtual void set_music_volume(float volume) = 0;
    virtual void stop_music() = 0;
};