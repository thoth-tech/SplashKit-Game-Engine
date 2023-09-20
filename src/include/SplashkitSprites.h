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

#include "ISprites.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitSprites : public ISprites
	{
	public:
		void call_for_all_sprites(sprite_float_function *fn, float val) override;
		void call_for_all_sprites(sprite_function *fn) override;
		void call_on_sprite_event(sprite_event_handler *handler) override;
		point_2d center_point(sprite s) override;
		sprite create_sprite(bitmap layer) override;
		sprite create_sprite(bitmap layer, animation_script ani) override;
		sprite create_sprite(const string &bitmap_name) override;
		sprite create_sprite(const string &name, bitmap layer) override;
		sprite create_sprite(const string &name, bitmap layer, animation_script ani) override;
		sprite create_sprite(const string &bitmap_name, const string &animation_name) override;
		void create_sprite_pack(const string &name) override;
		string current_sprite_pack() override;
		void draw_all_sprites() override;
		void draw_sprite(sprite s, const vector_2d &offset) override;
		void draw_sprite(sprite s) override;
		void draw_sprite(sprite s, double x_offset, double y_offset) override;
		void free_all_sprites() override;
		void free_sprite(sprite s) override;
		void free_sprite_pack(const string &name) override;
		bool has_sprite(const string &name) override;
		bool has_sprite_pack(const string &name) override;
		void move_sprite(sprite s) override;
		void move_sprite(sprite s, const vector_2d &distance) override;
		void move_sprite(sprite s, const vector_2d &distance, float pct) override;
		void move_sprite(sprite s, float pct) override;
		void move_sprite_to(sprite s, double x, double y) override;
		void select_sprite_pack(const string &name) override;
		int sprite_add_layer(sprite s, bitmap new_layer, const string &layer_name) override;
		void sprite_add_to_velocity(sprite s, const vector_2d &value) override;
		void sprite_add_value(sprite s, const string &name) override;
		void sprite_add_value(sprite s, const string &name, float init_val) override;
		point_2d sprite_anchor_point(sprite s) override;
		point_2d sprite_anchor_position(sprite s) override;
		bool sprite_animation_has_ended(sprite s) override;
		string sprite_animation_name(sprite s) override;
		bool sprite_at(sprite s, const point_2d &pt) override;
		void sprite_bring_layer_forward(sprite s, int visible_layer) override;
		void sprite_bring_layer_to_front(sprite s, int visible_layer) override;
		void sprite_call_on_event(sprite s, sprite_event_handler *handler) override;
		circle sprite_circle(sprite s) override;
		bitmap sprite_collision_bitmap(sprite s) override;
		circle sprite_collision_circle(sprite s) override;
		collision_test_kind sprite_collision_kind(sprite s) override;
		rectangle sprite_collision_rectangle(sprite s) override;
		int sprite_current_cell(sprite s) override;
		rectangle sprite_current_cell_rectangle(sprite s) override;
		float sprite_dx(sprite s) override;
		float sprite_dy(sprite s) override;
		bool sprite_has_value(sprite s, string name) override;
		float sprite_heading(sprite s) override;
		int sprite_height(sprite s) override;
		void sprite_hide_layer(sprite s, const string &name) override;
		void sprite_hide_layer(sprite s, int id) override;
		bitmap sprite_layer(sprite s, const string &name) override;
		bitmap sprite_layer(sprite s, int idx) override;
		circle sprite_layer_circle(sprite s, const string &name) override;
		circle sprite_layer_circle(sprite s, int idx) override;
		int sprite_layer_count(sprite s) override;
		int sprite_layer_height(sprite s, const string &name) override;
		int sprite_layer_height(sprite s, int idx) override;
		int sprite_layer_index(sprite s, const string &name) override;
		string sprite_layer_name(sprite s, int idx) override;
		vector_2d sprite_layer_offset(sprite s, const string &name) override;
		vector_2d sprite_layer_offset(sprite s, int idx) override;
		rectangle sprite_layer_rectangle(sprite s, const string &name) override;
		rectangle sprite_layer_rectangle(sprite s, int idx) override;
		int sprite_layer_width(sprite s, const string &name) override;
		int sprite_layer_width(sprite s, int idx) override;
		matrix_2d sprite_location_matrix(sprite s) override;
		float sprite_mass(sprite s) override;
		bool sprite_move_from_anchor_point(sprite s) override;
		void sprite_move_to(sprite s, const point_2d &pt, float taking_seconds) override;
		string sprite_name(sprite s) override;
		sprite sprite_named(const string &name) override;
		bool sprite_offscreen(sprite s) override;
		bool sprite_on_screen_at(sprite s, const point_2d &pt) override;
		bool sprite_on_screen_at(sprite s, double x, double y) override;
		point_2d sprite_position(sprite s) override;
		void sprite_replay_animation(sprite s) override;
		void sprite_replay_animation(sprite s, bool with_sound) override;
		float sprite_rotation(sprite s) override;
		float sprite_scale(sprite s) override;
		rectangle sprite_screen_rectangle(sprite s) override;
		void sprite_send_layer_backward(sprite s, int visible_layer) override;
		void sprite_send_layer_to_back(sprite s, int visible_layer) override;
		void sprite_set_anchor_point(sprite s, const point_2d &pt) override;
		void sprite_set_collision_bitmap(sprite s, bitmap bmp) override;
		void sprite_set_collision_kind(sprite s, collision_test_kind value) override;
		void sprite_set_dx(sprite s, float value) override;
		void sprite_set_dy(sprite s, float value) override;
		void sprite_set_heading(sprite s, float value) override;
		void sprite_set_layer_offset(sprite s, const string &name, const vector_2d &value) override;
		void sprite_set_layer_offset(sprite s, int idx, const vector_2d &value) override;
		void sprite_set_mass(sprite s, float value) override;
		void sprite_set_move_from_anchor_point(sprite s, bool value) override;
		void sprite_set_position(sprite s, const point_2d &value) override;
		void sprite_set_rotation(sprite s, float value) override;
		void sprite_set_scale(sprite s, float value) override;
		void sprite_set_speed(sprite s, float value) override;
		void sprite_set_value(sprite s, const string &name, float val) override;
		void sprite_set_velocity(sprite s, const vector_2d &value) override;
		void sprite_set_x(sprite s, float value) override;
		void sprite_set_y(sprite s, float value) override;
		int sprite_show_layer(sprite s, const string &name) override;
		int sprite_show_layer(sprite s, int id) override;
		float sprite_speed(sprite s) override;
		void sprite_start_animation(sprite s, const string &named) override;
		void sprite_start_animation(sprite s, const string &named, bool with_sound) override;
		void sprite_start_animation(sprite s, int idx) override;
		void sprite_start_animation(sprite s, int idx, bool with_sound) override;
		void sprite_stop_calling_on_event(sprite s, sprite_event_handler *handler) override;
		void sprite_toggle_layer_visible(sprite s, const string &name) override;
		void sprite_toggle_layer_visible(sprite s, int id) override;
		float sprite_value(sprite s, const string &name) override;
		int sprite_value_count(sprite s) override;
		vector_2d sprite_velocity(sprite s) override;
		int sprite_visible_index_of_layer(sprite s, const string &name) override;
		int sprite_visible_index_of_layer(sprite s, int id) override;
		int sprite_visible_layer(sprite s, int idx) override;
		int sprite_visible_layer_count(sprite s) override;
		int sprite_visible_layer_id(sprite s, int idx) override;
		int sprite_width(sprite s) override;
		float sprite_x(sprite s) override;
		float sprite_y(sprite s) override;
		void stop_calling_on_sprite_event(sprite_event_handler *handler) override;
		void update_all_sprites() override;
		void update_all_sprites(float pct) override;
		void update_sprite(sprite s) override;
		void update_sprite(sprite s, bool with_sound) override;
		void update_sprite(sprite s, float pct) override;
		void update_sprite(sprite s, float pct, bool with_sound) override;
		void update_sprite_animation(sprite s) override;
		void update_sprite_animation(sprite s, bool with_sound) override;
		void update_sprite_animation(sprite s, float pct) override;
		void update_sprite_animation(sprite s, float pct, bool with_sound) override;
		vector_2d vector_from_center_sprite_to_point(sprite s, const point_2d &pt) override;
		vector_2d vector_from_to(sprite s1, sprite s2) override;
	};
}
