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

#include "IAnimations.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitAnimations : public IAnimations
	{
	public:
		int animation_count(animation_script script) override;
		int animation_current_cell(animation anim) override;
		vector_2d animation_current_vector(animation anim) override;
		bool animation_ended(animation anim) override;
		bool animation_entered_frame(animation anim) override;
		float animation_frame_time(animation anim) override;
		int animation_index(animation_script script, const string &name) override;
		string animation_name(animation temp) override;
		string animation_script_name(animation_script script) override;
		animation_script animation_script_named(const string &name) override;
		void assign_animation(animation anim, animation_script script, const string &name) override;
		void assign_animation(animation anim, animation_script script, const string &name, bool with_sound) override;
		void assign_animation(animation anim, animation_script script, int idx) override;
		void assign_animation(animation anim, animation_script script, int idx, bool with_sound) override;
		void assign_animation(animation anim, const string &script_name, const string &name) override;
		void assign_animation(animation anim, const string &script_name, const string &name, bool with_sound) override;
		void assign_animation(animation anim, int idx) override;
		void assign_animation(animation anim, int idx, bool with_sound) override;
		void assign_animation(animation anim, string name) override;
		void assign_animation(animation anim, string name, bool with_sound) override;
		animation create_animation(animation_script script, int idx, bool with_sound) override;
		animation create_animation(animation_script script, const string &name) override;
		animation create_animation(animation_script script, const string &name, bool with_sound) override;
		animation create_animation(const string &script_name, const string &name) override;
		animation create_animation(const string &script_name, const string &name, bool with_sound) override;
		void free_all_animation_scripts() override;
		void free_animation(animation ani) override;
		void free_animation_script(animation_script script_to_free) override;
		void free_animation_script(const string &name) override;
		bool has_animation_named(animation_script script, const string &name) override;
		bool has_animation_script(const string &name) override;
		animation_script load_animation_script(const string &name, const string &filename) override;
		void restart_animation(animation anim) override;
		void restart_animation(animation anim, bool with_sound) override;
		void update_animation(animation anim, float pct, bool with_sound) override;
		void update_animation(animation anim) override;
		void update_animation(animation anim, float pct) override;
	};
}
