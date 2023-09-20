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

#include "sound.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class ISound
{
public:
    virtual void fade_all_sound_effects_out(int ms) = 0;
    virtual void fade_sound_effect_out(sound_effect effect, int ms) = 0;
    virtual void free_all_sound_effects() = 0;
    virtual void free_sound_effect(sound_effect effect) = 0;
    virtual bool has_sound_effect(const string &name) = 0;
    virtual sound_effect load_sound_effect(const string &name, const string &filename) = 0;
    virtual void play_sound_effect(const string &name) = 0;
    virtual void play_sound_effect(const string &name, float volume) = 0;
    virtual void play_sound_effect(const string &name, int times) = 0;
    virtual void play_sound_effect(const string &name, int times, float volume) = 0;
    virtual void play_sound_effect(sound_effect effect) = 0;
    virtual void play_sound_effect(sound_effect effect, float volume) = 0;
    virtual void play_sound_effect(sound_effect effect, int times) = 0;
    virtual void play_sound_effect(sound_effect effect, int times, float volume) = 0;
    virtual string sound_effect_filename(sound_effect effect) = 0;
    virtual string sound_effect_name(sound_effect effect) = 0;
    virtual sound_effect sound_effect_named(const string &name) = 0;
    virtual bool sound_effect_playing(const string &name) = 0;
    virtual bool sound_effect_playing(sound_effect effect) = 0;
    virtual void stop_sound_effect(const string &name) = 0;
    virtual void stop_sound_effect(sound_effect effect) = 0;
};