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
#include "SplashkitAnimations.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	int SplashkitAnimations::animation_count(animation_script script) 
	{
		return ::animation_count(script);
	};

	int SplashkitAnimations::animation_current_cell(animation anim) 
	{
		return ::animation_current_cell(anim);
	};

	vector_2d SplashkitAnimations::animation_current_vector(animation anim) 
	{
		return ::animation_current_vector(anim);
	};

	bool SplashkitAnimations::animation_ended(animation anim) 
	{
		return ::animation_ended(anim);
	};

	bool SplashkitAnimations::animation_entered_frame(animation anim) 
	{
		return ::animation_entered_frame(anim);
	};

	float SplashkitAnimations::animation_frame_time(animation anim) 
	{
		return ::animation_frame_time(anim);
	};

	int SplashkitAnimations::animation_index(animation_script script, const string &name) 
	{
		return ::animation_index(script, name);
	};

	string SplashkitAnimations::animation_name(animation temp) 
	{
		return ::animation_name(temp);
	};

	string SplashkitAnimations::animation_script_name(animation_script script) 
	{
		return ::animation_script_name(script);
	};

	animation_script SplashkitAnimations::animation_script_named(const string &name) 
	{
		return ::animation_script_named(name);
	};

	void SplashkitAnimations::assign_animation(animation anim, animation_script script, const string &name) 
	{
		::assign_animation(anim, script, name);
	}

	void SplashkitAnimations::assign_animation(animation anim, animation_script script, const string &name, bool with_sound) 
	{
		::assign_animation(anim, script, name, with_sound);
	}

	void SplashkitAnimations::assign_animation(animation anim, animation_script script, int idx) 
	{
		::assign_animation(anim, script, idx);
	}

	void SplashkitAnimations::assign_animation(animation anim, animation_script script, int idx, bool with_sound) 
	{
		::assign_animation(anim, script, idx, with_sound);
	}

	void SplashkitAnimations::assign_animation(animation anim, const string &script_name, const string &name) 
	{
		::assign_animation(anim, script_name, name);
	}

	void SplashkitAnimations::assign_animation(animation anim, const string &script_name, const string &name, bool with_sound) 
	{
		::assign_animation(anim, script_name, name, with_sound);
	}

	void SplashkitAnimations::assign_animation(animation anim, int idx) 
	{
		::assign_animation(anim, idx);
	}

	void SplashkitAnimations::assign_animation(animation anim, int idx, bool with_sound) 
	{
		::assign_animation(anim, idx, with_sound);
	}

	void SplashkitAnimations::assign_animation(animation anim, string name) 
	{
		::assign_animation(anim, name);
	}

	void SplashkitAnimations::assign_animation(animation anim, string name, bool with_sound) 
	{
		::assign_animation(anim, name, with_sound);
	}

	animation SplashkitAnimations::create_animation(animation_script script, int idx, bool with_sound) 
	{
		return ::create_animation(script, idx, with_sound);
	};

	animation SplashkitAnimations::create_animation(animation_script script, const string &name) 
	{
		return ::create_animation(script, name);
	};

	animation SplashkitAnimations::create_animation(animation_script script, const string &name, bool with_sound) 
	{
		return ::create_animation(script, name, with_sound);
	};

	animation SplashkitAnimations::create_animation(const string &script_name, const string &name) 
	{
		return ::create_animation(script_name, name);
	};

	animation SplashkitAnimations::create_animation(const string &script_name, const string &name, bool with_sound) 
	{
		return ::create_animation(script_name, name, with_sound);
	};

	void SplashkitAnimations::free_all_animation_scripts() 
	{
		::free_all_animation_scripts();
	}

	void SplashkitAnimations::free_animation(animation ani) 
	{
		::free_animation(ani);
	}

	void SplashkitAnimations::free_animation_script(animation_script script_to_free) 
	{
		::free_animation_script(script_to_free);
	}

	void SplashkitAnimations::free_animation_script(const string &name) 
	{
		::free_animation_script(name);
	}

	bool SplashkitAnimations::has_animation_named(animation_script script, const string &name) 
	{
		return ::has_animation_named(script, name);
	};

	bool SplashkitAnimations::has_animation_script(const string &name) 
	{
		return ::has_animation_script(name);
	};

	animation_script SplashkitAnimations::load_animation_script(const string &name, const string &filename) 
	{
		return ::load_animation_script(name, filename);
	};

	void SplashkitAnimations::restart_animation(animation anim) 
	{
		::restart_animation(anim);
	}

	void SplashkitAnimations::restart_animation(animation anim, bool with_sound) 
	{
		::restart_animation(anim, with_sound);
	}

	void SplashkitAnimations::update_animation(animation anim, float pct, bool with_sound) 
	{
		::update_animation(anim, pct, with_sound);
	}

	void SplashkitAnimations::update_animation(animation anim) 
	{
		::update_animation(anim);
	}

	void SplashkitAnimations::update_animation(animation anim, float pct) 
	{
		::update_animation(anim, pct);
	}

}
