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
#include "SplashkitMusic.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	void SplashkitMusic::fade_music_in(const string &name, int ms) 
	{
		::fade_music_in(name, ms);
	}

	void SplashkitMusic::fade_music_in(const string &name, int times, int ms) 
	{
		::fade_music_in(name, times, ms);
	}

	void SplashkitMusic::fade_music_in(music data, int ms) 
	{
		::fade_music_in(data, ms);
	}

	void SplashkitMusic::fade_music_in(music data, int times, int ms) 
	{
		::fade_music_in(data, times, ms);
	}

	void SplashkitMusic::fade_music_out(int ms) 
	{
		::fade_music_out(ms);
	}

	void SplashkitMusic::free_all_music() 
	{
		::free_all_music();
	}

	void SplashkitMusic::free_music(music effect) 
	{
		::free_music(effect);
	}

	bool SplashkitMusic::has_music(const string &name) 
	{
		return ::has_music(name);
	};

	music SplashkitMusic::load_music(const string &name, const string &filename) 
	{
		return ::load_music(name, filename);
	};

	string SplashkitMusic::music_filename(music data) 
	{
		return ::music_filename(data);
	};

	string SplashkitMusic::music_name(music data) 
	{
		return ::music_name(data);
	};

	music SplashkitMusic::music_named(const string &name) 
	{
		return ::music_named(name);
	};

	bool SplashkitMusic::music_playing() 
	{
		return ::music_playing();
	};

	float SplashkitMusic::music_volume() 
	{
		return ::music_volume();
	};

	void SplashkitMusic::pause_music() 
	{
		::pause_music();
	}

	void SplashkitMusic::play_music(const string &name) 
	{
		::play_music(name);
	}

	void SplashkitMusic::play_music(const string &name, int times) 
	{
		::play_music(name, times);
	}

	void SplashkitMusic::play_music(music data) 
	{
		::play_music(data);
	}

	void SplashkitMusic::play_music(music data, int times) 
	{
		::play_music(data, times);
	}

	void SplashkitMusic::play_music(music data, int times, float volume) 
	{
		::play_music(data, times, volume);
	}

	void SplashkitMusic::resume_music() 
	{
		::resume_music();
	}

	void SplashkitMusic::set_music_volume(float volume) 
	{
		::set_music_volume(volume);
	}

	void SplashkitMusic::stop_music() 
	{
		::stop_music();
	}

}
