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
#include "SplashkitSound.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	void SplashkitSound::fade_all_sound_effects_out(int ms) 
	{
		::fade_all_sound_effects_out(ms);
	}

	void SplashkitSound::fade_sound_effect_out(sound_effect effect, int ms) 
	{
		::fade_sound_effect_out(effect, ms);
	}

	void SplashkitSound::free_all_sound_effects() 
	{
		::free_all_sound_effects();
	}

	void SplashkitSound::free_sound_effect(sound_effect effect) 
	{
		::free_sound_effect(effect);
	}

	bool SplashkitSound::has_sound_effect(const string &name) 
	{
		return ::has_sound_effect(name);
	};

	sound_effect SplashkitSound::load_sound_effect(const string &name, const string &filename) 
	{
		return ::load_sound_effect(name, filename);
	};

	void SplashkitSound::play_sound_effect(const string &name) 
	{
		::play_sound_effect(name);
	}

	void SplashkitSound::play_sound_effect(const string &name, float volume) 
	{
		::play_sound_effect(name, volume);
	}

	void SplashkitSound::play_sound_effect(const string &name, int times) 
	{
		::play_sound_effect(name, times);
	}

	void SplashkitSound::play_sound_effect(const string &name, int times, float volume) 
	{
		::play_sound_effect(name, times, volume);
	}

	void SplashkitSound::play_sound_effect(sound_effect effect) 
	{
		::play_sound_effect(effect);
	}

	void SplashkitSound::play_sound_effect(sound_effect effect, float volume) 
	{
		::play_sound_effect(effect, volume);
	}

	void SplashkitSound::play_sound_effect(sound_effect effect, int times) 
	{
		::play_sound_effect(effect, times);
	}

	void SplashkitSound::play_sound_effect(sound_effect effect, int times, float volume) 
	{
		::play_sound_effect(effect, times, volume);
	}

	string SplashkitSound::sound_effect_filename(sound_effect effect) 
	{
		return ::sound_effect_filename(effect);
	};

	string SplashkitSound::sound_effect_name(sound_effect effect) 
	{
		return ::sound_effect_name(effect);
	};

	sound_effect SplashkitSound::sound_effect_named(const string &name) 
	{
		return ::sound_effect_named(name);
	};

	bool SplashkitSound::sound_effect_playing(const string &name) 
	{
		return ::sound_effect_playing(name);
	};

	bool SplashkitSound::sound_effect_playing(sound_effect effect) 
	{
		return ::sound_effect_playing(effect);
	};

	void SplashkitSound::stop_sound_effect(const string &name) 
	{
		::stop_sound_effect(name);
	}

	void SplashkitSound::stop_sound_effect(sound_effect effect) 
	{
		::stop_sound_effect(effect);
	}

}
