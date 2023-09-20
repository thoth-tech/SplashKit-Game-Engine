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

#include "IMusic.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitMusic : public IMusic
	{
	public:
		void fade_music_in(const string &name, int ms) override;
		void fade_music_in(const string &name, int times, int ms) override;
		void fade_music_in(music data, int ms) override;
		void fade_music_in(music data, int times, int ms) override;
		void fade_music_out(int ms) override;
		void free_all_music() override;
		void free_music(music effect) override;
		bool has_music(const string &name) override;
		music load_music(const string &name, const string &filename) override;
		string music_filename(music data) override;
		string music_name(music data) override;
		music music_named(const string &name) override;
		bool music_playing() override;
		float music_volume() override;
		void pause_music() override;
		void play_music(const string &name) override;
		void play_music(const string &name, int times) override;
		void play_music(music data) override;
		void play_music(music data, int times) override;
		void play_music(music data, int times, float volume) override;
		void resume_music() override;
		void set_music_volume(float volume) override;
		void stop_music() override;
	};
}
