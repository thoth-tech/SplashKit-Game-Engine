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
#include "SplashkitSprites.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	void SplashkitSprites::call_for_all_sprites(sprite_float_function *fn, float val) 
	{
		::call_for_all_sprites(fn, val);
	}

	void SplashkitSprites::call_for_all_sprites(sprite_function *fn) 
	{
		::call_for_all_sprites(fn);
	}

	void SplashkitSprites::call_on_sprite_event(sprite_event_handler *handler) 
	{
		::call_on_sprite_event(handler);
	}

	point_2d SplashkitSprites::center_point(sprite s) 
	{
		return ::center_point(s);
	};

	sprite SplashkitSprites::create_sprite(bitmap layer) 
	{
		return ::create_sprite(layer);
	};

	sprite SplashkitSprites::create_sprite(bitmap layer, animation_script ani) 
	{
		return ::create_sprite(layer, ani);
	};

	sprite SplashkitSprites::create_sprite(const string &bitmap_name) 
	{
		return ::create_sprite(bitmap_name);
	};

	sprite SplashkitSprites::create_sprite(const string &name, bitmap layer) 
	{
		return ::create_sprite(name, layer);
	};

	sprite SplashkitSprites::create_sprite(const string &name, bitmap layer, animation_script ani) 
	{
		return ::create_sprite(name, layer, ani);
	};

	sprite SplashkitSprites::create_sprite(const string &bitmap_name, const string &animation_name) 
	{
		return ::create_sprite(bitmap_name, animation_name);
	};

	void SplashkitSprites::create_sprite_pack(const string &name) 
	{
		::create_sprite_pack(name);
	}

	string SplashkitSprites::current_sprite_pack() 
	{
		return ::current_sprite_pack();
	};

	void SplashkitSprites::draw_all_sprites() 
	{
		::draw_all_sprites();
	}

	void SplashkitSprites::draw_sprite(sprite s, const vector_2d &offset) 
	{
		::draw_sprite(s, offset);
	}

	void SplashkitSprites::draw_sprite(sprite s) 
	{
		::draw_sprite(s);
	}

	void SplashkitSprites::draw_sprite(sprite s, double x_offset, double y_offset) 
	{
		::draw_sprite(s, x_offset, y_offset);
	}

	void SplashkitSprites::free_all_sprites() 
	{
		::free_all_sprites();
	}

	void SplashkitSprites::free_sprite(sprite s) 
	{
		::free_sprite(s);
	}

	void SplashkitSprites::free_sprite_pack(const string &name) 
	{
		::free_sprite_pack(name);
	}

	bool SplashkitSprites::has_sprite(const string &name) 
	{
		return ::has_sprite(name);
	};

	bool SplashkitSprites::has_sprite_pack(const string &name) 
	{
		return ::has_sprite_pack(name);
	};

	void SplashkitSprites::move_sprite(sprite s) 
	{
		::move_sprite(s);
	}

	void SplashkitSprites::move_sprite(sprite s, const vector_2d &distance) 
	{
		::move_sprite(s, distance);
	}

	void SplashkitSprites::move_sprite(sprite s, const vector_2d &distance, float pct) 
	{
		::move_sprite(s, distance, pct);
	}

	void SplashkitSprites::move_sprite(sprite s, float pct) 
	{
		::move_sprite(s, pct);
	}

	void SplashkitSprites::move_sprite_to(sprite s, double x, double y) 
	{
		::move_sprite_to(s, x, y);
	}

	void SplashkitSprites::select_sprite_pack(const string &name) 
	{
		::select_sprite_pack(name);
	}

	int SplashkitSprites::sprite_add_layer(sprite s, bitmap new_layer, const string &layer_name) 
	{
		return ::sprite_add_layer(s, new_layer, layer_name);
	};

	void SplashkitSprites::sprite_add_to_velocity(sprite s, const vector_2d &value) 
	{
		::sprite_add_to_velocity(s, value);
	}

	void SplashkitSprites::sprite_add_value(sprite s, const string &name) 
	{
		::sprite_add_value(s, name);
	}

	void SplashkitSprites::sprite_add_value(sprite s, const string &name, float init_val) 
	{
		::sprite_add_value(s, name, init_val);
	}

	point_2d SplashkitSprites::sprite_anchor_point(sprite s) 
	{
		return ::sprite_anchor_point(s);
	};

	point_2d SplashkitSprites::sprite_anchor_position(sprite s) 
	{
		return ::sprite_anchor_position(s);
	};

	bool SplashkitSprites::sprite_animation_has_ended(sprite s) 
	{
		return ::sprite_animation_has_ended(s);
	};

	string SplashkitSprites::sprite_animation_name(sprite s) 
	{
		return ::sprite_animation_name(s);
	};

	bool SplashkitSprites::sprite_at(sprite s, const point_2d &pt) 
	{
		return ::sprite_at(s, pt);
	};

	void SplashkitSprites::sprite_bring_layer_forward(sprite s, int visible_layer) 
	{
		::sprite_bring_layer_forward(s, visible_layer);
	}

	void SplashkitSprites::sprite_bring_layer_to_front(sprite s, int visible_layer) 
	{
		::sprite_bring_layer_to_front(s, visible_layer);
	}

	void SplashkitSprites::sprite_call_on_event(sprite s, sprite_event_handler *handler) 
	{
		::sprite_call_on_event(s, handler);
	}

	circle SplashkitSprites::sprite_circle(sprite s) 
	{
		return ::sprite_circle(s);
	};

	bitmap SplashkitSprites::sprite_collision_bitmap(sprite s) 
	{
		return ::sprite_collision_bitmap(s);
	};

	circle SplashkitSprites::sprite_collision_circle(sprite s) 
	{
		return ::sprite_collision_circle(s);
	};

	collision_test_kind SplashkitSprites::sprite_collision_kind(sprite s) 
	{
		return ::sprite_collision_kind(s);
	};

	rectangle SplashkitSprites::sprite_collision_rectangle(sprite s) 
	{
		return ::sprite_collision_rectangle(s);
	};

	int SplashkitSprites::sprite_current_cell(sprite s) 
	{
		return ::sprite_current_cell(s);
	};

	rectangle SplashkitSprites::sprite_current_cell_rectangle(sprite s) 
	{
		return ::sprite_current_cell_rectangle(s);
	};

	float SplashkitSprites::sprite_dx(sprite s) 
	{
		return ::sprite_dx(s);
	};

	float SplashkitSprites::sprite_dy(sprite s) 
	{
		return ::sprite_dy(s);
	};

	bool SplashkitSprites::sprite_has_value(sprite s, string name) 
	{
		return ::sprite_has_value(s, name);
	};

	float SplashkitSprites::sprite_heading(sprite s) 
	{
		return ::sprite_heading(s);
	};

	int SplashkitSprites::sprite_height(sprite s) 
	{
		return ::sprite_height(s);
	};

	void SplashkitSprites::sprite_hide_layer(sprite s, const string &name) 
	{
		::sprite_hide_layer(s, name);
	}

	void SplashkitSprites::sprite_hide_layer(sprite s, int id) 
	{
		::sprite_hide_layer(s, id);
	}

	bitmap SplashkitSprites::sprite_layer(sprite s, const string &name) 
	{
		return ::sprite_layer(s, name);
	};

	bitmap SplashkitSprites::sprite_layer(sprite s, int idx) 
	{
		return ::sprite_layer(s, idx);
	};

	circle SplashkitSprites::sprite_layer_circle(sprite s, const string &name) 
	{
		return ::sprite_layer_circle(s, name);
	};

	circle SplashkitSprites::sprite_layer_circle(sprite s, int idx) 
	{
		return ::sprite_layer_circle(s, idx);
	};

	int SplashkitSprites::sprite_layer_count(sprite s) 
	{
		return ::sprite_layer_count(s);
	};

	int SplashkitSprites::sprite_layer_height(sprite s, const string &name) 
	{
		return ::sprite_layer_height(s, name);
	};

	int SplashkitSprites::sprite_layer_height(sprite s, int idx) 
	{
		return ::sprite_layer_height(s, idx);
	};

	int SplashkitSprites::sprite_layer_index(sprite s, const string &name) 
	{
		return ::sprite_layer_index(s, name);
	};

	string SplashkitSprites::sprite_layer_name(sprite s, int idx) 
	{
		return ::sprite_layer_name(s, idx);
	};

	vector_2d SplashkitSprites::sprite_layer_offset(sprite s, const string &name) 
	{
		return ::sprite_layer_offset(s, name);
	};

	vector_2d SplashkitSprites::sprite_layer_offset(sprite s, int idx) 
	{
		return ::sprite_layer_offset(s, idx);
	};

	rectangle SplashkitSprites::sprite_layer_rectangle(sprite s, const string &name) 
	{
		return ::sprite_layer_rectangle(s, name);
	};

	rectangle SplashkitSprites::sprite_layer_rectangle(sprite s, int idx) 
	{
		return ::sprite_layer_rectangle(s, idx);
	};

	int SplashkitSprites::sprite_layer_width(sprite s, const string &name) 
	{
		return ::sprite_layer_width(s, name);
	};

	int SplashkitSprites::sprite_layer_width(sprite s, int idx) 
	{
		return ::sprite_layer_width(s, idx);
	};

	matrix_2d SplashkitSprites::sprite_location_matrix(sprite s) 
	{
		return ::sprite_location_matrix(s);
	};

	float SplashkitSprites::sprite_mass(sprite s) 
	{
		return ::sprite_mass(s);
	};

	bool SplashkitSprites::sprite_move_from_anchor_point(sprite s) 
	{
		return ::sprite_move_from_anchor_point(s);
	};

	void SplashkitSprites::sprite_move_to(sprite s, const point_2d &pt, float taking_seconds) 
	{
		::sprite_move_to(s, pt, taking_seconds);
	}

	string SplashkitSprites::sprite_name(sprite s) 
	{
		return ::sprite_name(s);
	};

	sprite SplashkitSprites::sprite_named(const string &name) 
	{
		return ::sprite_named(name);
	};

	bool SplashkitSprites::sprite_offscreen(sprite s) 
	{
		return ::sprite_offscreen(s);
	};

	bool SplashkitSprites::sprite_on_screen_at(sprite s, const point_2d &pt) 
	{
		return ::sprite_on_screen_at(s, pt);
	};

	bool SplashkitSprites::sprite_on_screen_at(sprite s, double x, double y) 
	{
		return ::sprite_on_screen_at(s, x, y);
	};

	point_2d SplashkitSprites::sprite_position(sprite s) 
	{
		return ::sprite_position(s);
	};

	void SplashkitSprites::sprite_replay_animation(sprite s) 
	{
		::sprite_replay_animation(s);
	}

	void SplashkitSprites::sprite_replay_animation(sprite s, bool with_sound) 
	{
		::sprite_replay_animation(s, with_sound);
	}

	float SplashkitSprites::sprite_rotation(sprite s) 
	{
		return ::sprite_rotation(s);
	};

	float SplashkitSprites::sprite_scale(sprite s) 
	{
		return ::sprite_scale(s);
	};

	rectangle SplashkitSprites::sprite_screen_rectangle(sprite s) 
	{
		return ::sprite_screen_rectangle(s);
	};

	void SplashkitSprites::sprite_send_layer_backward(sprite s, int visible_layer) 
	{
		::sprite_send_layer_backward(s, visible_layer);
	}

	void SplashkitSprites::sprite_send_layer_to_back(sprite s, int visible_layer) 
	{
		::sprite_send_layer_to_back(s, visible_layer);
	}

	void SplashkitSprites::sprite_set_anchor_point(sprite s, const point_2d &pt) 
	{
		::sprite_set_anchor_point(s, pt);
	}

	void SplashkitSprites::sprite_set_collision_bitmap(sprite s, bitmap bmp) 
	{
		::sprite_set_collision_bitmap(s, bmp);
	}

	void SplashkitSprites::sprite_set_collision_kind(sprite s, collision_test_kind value) 
	{
		::sprite_set_collision_kind(s, value);
	}

	void SplashkitSprites::sprite_set_dx(sprite s, float value) 
	{
		::sprite_set_dx(s, value);
	}

	void SplashkitSprites::sprite_set_dy(sprite s, float value) 
	{
		::sprite_set_dy(s, value);
	}

	void SplashkitSprites::sprite_set_heading(sprite s, float value) 
	{
		::sprite_set_heading(s, value);
	}

	void SplashkitSprites::sprite_set_layer_offset(sprite s, const string &name, const vector_2d &value) 
	{
		::sprite_set_layer_offset(s, name, value);
	}

	void SplashkitSprites::sprite_set_layer_offset(sprite s, int idx, const vector_2d &value) 
	{
		::sprite_set_layer_offset(s, idx, value);
	}

	void SplashkitSprites::sprite_set_mass(sprite s, float value) 
	{
		::sprite_set_mass(s, value);
	}

	void SplashkitSprites::sprite_set_move_from_anchor_point(sprite s, bool value) 
	{
		::sprite_set_move_from_anchor_point(s, value);
	}

	void SplashkitSprites::sprite_set_position(sprite s, const point_2d &value) 
	{
		::sprite_set_position(s, value);
	}

	void SplashkitSprites::sprite_set_rotation(sprite s, float value) 
	{
		::sprite_set_rotation(s, value);
	}

	void SplashkitSprites::sprite_set_scale(sprite s, float value) 
	{
		::sprite_set_scale(s, value);
	}

	void SplashkitSprites::sprite_set_speed(sprite s, float value) 
	{
		::sprite_set_speed(s, value);
	}

	void SplashkitSprites::sprite_set_value(sprite s, const string &name, float val) 
	{
		::sprite_set_value(s, name, val);
	}

	void SplashkitSprites::sprite_set_velocity(sprite s, const vector_2d &value) 
	{
		::sprite_set_velocity(s, value);
	}

	void SplashkitSprites::sprite_set_x(sprite s, float value) 
	{
		::sprite_set_x(s, value);
	}

	void SplashkitSprites::sprite_set_y(sprite s, float value) 
	{
		::sprite_set_y(s, value);
	}

	int SplashkitSprites::sprite_show_layer(sprite s, const string &name) 
	{
		return ::sprite_show_layer(s, name);
	};

	int SplashkitSprites::sprite_show_layer(sprite s, int id) 
	{
		return ::sprite_show_layer(s, id);
	};

	float SplashkitSprites::sprite_speed(sprite s) 
	{
		return ::sprite_speed(s);
	};

	void SplashkitSprites::sprite_start_animation(sprite s, const string &named) 
	{
		::sprite_start_animation(s, named);
	}

	void SplashkitSprites::sprite_start_animation(sprite s, const string &named, bool with_sound) 
	{
		::sprite_start_animation(s, named, with_sound);
	}

	void SplashkitSprites::sprite_start_animation(sprite s, int idx) 
	{
		::sprite_start_animation(s, idx);
	}

	void SplashkitSprites::sprite_start_animation(sprite s, int idx, bool with_sound) 
	{
		::sprite_start_animation(s, idx, with_sound);
	}

	void SplashkitSprites::sprite_stop_calling_on_event(sprite s, sprite_event_handler *handler) 
	{
		::sprite_stop_calling_on_event(s, handler);
	}

	void SplashkitSprites::sprite_toggle_layer_visible(sprite s, const string &name) 
	{
		::sprite_toggle_layer_visible(s, name);
	}

	void SplashkitSprites::sprite_toggle_layer_visible(sprite s, int id) 
	{
		::sprite_toggle_layer_visible(s, id);
	}

	float SplashkitSprites::sprite_value(sprite s, const string &name) 
	{
		return ::sprite_value(s, name);
	};

	int SplashkitSprites::sprite_value_count(sprite s) 
	{
		return ::sprite_value_count(s);
	};

	vector_2d SplashkitSprites::sprite_velocity(sprite s) 
	{
		return ::sprite_velocity(s);
	};

	int SplashkitSprites::sprite_visible_index_of_layer(sprite s, const string &name) 
	{
		return ::sprite_visible_index_of_layer(s, name);
	};

	int SplashkitSprites::sprite_visible_index_of_layer(sprite s, int id) 
	{
		return ::sprite_visible_index_of_layer(s, id);
	};

	int SplashkitSprites::sprite_visible_layer(sprite s, int idx) 
	{
		return ::sprite_visible_layer(s, idx);
	};

	int SplashkitSprites::sprite_visible_layer_count(sprite s) 
	{
		return ::sprite_visible_layer_count(s);
	};

	int SplashkitSprites::sprite_visible_layer_id(sprite s, int idx) 
	{
		return ::sprite_visible_layer_id(s, idx);
	};

	int SplashkitSprites::sprite_width(sprite s) 
	{
		return ::sprite_width(s);
	};

	float SplashkitSprites::sprite_x(sprite s) 
	{
		return ::sprite_x(s);
	};

	float SplashkitSprites::sprite_y(sprite s) 
	{
		return ::sprite_y(s);
	};

	void SplashkitSprites::stop_calling_on_sprite_event(sprite_event_handler *handler) 
	{
		::stop_calling_on_sprite_event(handler);
	}

	void SplashkitSprites::update_all_sprites() 
	{
		::update_all_sprites();
	}

	void SplashkitSprites::update_all_sprites(float pct) 
	{
		::update_all_sprites(pct);
	}

	void SplashkitSprites::update_sprite(sprite s) 
	{
		::update_sprite(s);
	}

	void SplashkitSprites::update_sprite(sprite s, bool with_sound) 
	{
		::update_sprite(s, with_sound);
	}

	void SplashkitSprites::update_sprite(sprite s, float pct) 
	{
		::update_sprite(s, pct);
	}

	void SplashkitSprites::update_sprite(sprite s, float pct, bool with_sound) 
	{
		::update_sprite(s, pct, with_sound);
	}

	void SplashkitSprites::update_sprite_animation(sprite s) 
	{
		::update_sprite_animation(s);
	}

	void SplashkitSprites::update_sprite_animation(sprite s, bool with_sound) 
	{
		::update_sprite_animation(s, with_sound);
	}

	void SplashkitSprites::update_sprite_animation(sprite s, float pct) 
	{
		::update_sprite_animation(s, pct);
	}

	void SplashkitSprites::update_sprite_animation(sprite s, float pct, bool with_sound) 
	{
		::update_sprite_animation(s, pct, with_sound);
	}

	vector_2d SplashkitSprites::vector_from_center_sprite_to_point(sprite s, const point_2d &pt) 
	{
		return ::vector_from_center_sprite_to_point(s, pt);
	};

	vector_2d SplashkitSprites::vector_from_to(sprite s1, sprite s2) 
	{
		return ::vector_from_to(s1, s2);
	};

}
