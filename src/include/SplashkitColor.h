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

#include "IColor.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitColor : public IColor
	{
	public:
		int alpha_of(color c) override;
		int blue_of(color c) override;
		double brightness_of(color c) override;
		color color_alice_blue() override;
		color color_antique_white() override;
		color color_aqua() override;
		color color_aquamarine() override;
		color color_azure() override;
		color color_beige() override;
		color color_bisque() override;
		color color_black() override;
		color color_blanched_almond() override;
		color color_blue() override;
		color color_blue_violet() override;
		color color_bright_green() override;
		color color_brown() override;
		color color_burly_wood() override;
		color color_cadet_blue() override;
		color color_chartreuse() override;
		color color_chocolate() override;
		color color_coral() override;
		color color_cornflower_blue() override;
		color color_cornsilk() override;
		color color_crimson() override;
		color color_cyan() override;
		color color_dark_blue() override;
		color color_dark_cyan() override;
		color color_dark_goldenrod() override;
		color color_dark_gray() override;
		color color_dark_green() override;
		color color_dark_khaki() override;
		color color_dark_magenta() override;
		color color_dark_olive_green() override;
		color color_dark_orange() override;
		color color_dark_orchid() override;
		color color_dark_red() override;
		color color_dark_salmon() override;
		color color_dark_sea_green() override;
		color color_dark_slate_blue() override;
		color color_dark_slate_gray() override;
		color color_dark_turquoise() override;
		color color_dark_violet() override;
		color color_deep_pink() override;
		color color_deep_sky_blue() override;
		color color_dim_gray() override;
		color color_dodger_blue() override;
		color color_firebrick() override;
		color color_floral_white() override;
		color color_forest_green() override;
		color color_fuchsia() override;
		color color_gainsboro() override;
		color color_ghost_white() override;
		color color_gold() override;
		color color_goldenrod() override;
		color color_gray() override;
		color color_green() override;
		color color_green_yellow() override;
		color color_honeydew() override;
		color color_hot_pink() override;
		color color_indian_red() override;
		color color_indigo() override;
		color color_ivory() override;
		color color_khaki() override;
		color color_lavender() override;
		color color_lavender_blush() override;
		color color_lawn_green() override;
		color color_lemon_chiffon() override;
		color color_light_blue() override;
		color color_light_coral() override;
		color color_light_cyan() override;
		color color_light_goldenrod_yellow() override;
		color color_light_gray() override;
		color color_light_green() override;
		color color_light_pink() override;
		color color_light_salmon() override;
		color color_light_sea_green() override;
		color color_light_sky_blue() override;
		color color_light_slate_gray() override;
		color color_light_steel_blue() override;
		color color_light_yellow() override;
		color color_lime() override;
		color color_lime_green() override;
		color color_linen() override;
		color color_magenta() override;
		color color_maroon() override;
		color color_medium_aquamarine() override;
		color color_medium_blue() override;
		color color_medium_orchid() override;
		color color_medium_purple() override;
		color color_medium_sea_green() override;
		color color_medium_slate_blue() override;
		color color_medium_spring_green() override;
		color color_medium_turquoise() override;
		color color_medium_violet_red() override;
		color color_midnight_blue() override;
		color color_mint_cream() override;
		color color_misty_rose() override;
		color color_moccasin() override;
		color color_navajo_white() override;
		color color_navy() override;
		color color_old_lace() override;
		color color_olive() override;
		color color_olive_drab() override;
		color color_orange() override;
		color color_orange_red() override;
		color color_orchid() override;
		color color_pale_goldenrod() override;
		color color_pale_green() override;
		color color_pale_turquoise() override;
		color color_pale_violet_red() override;
		color color_papaya_whip() override;
		color color_peach_puff() override;
		color color_peru() override;
		color color_pink() override;
		color color_plum() override;
		color color_powder_blue() override;
		color color_purple() override;
		color color_red() override;
		color color_rosy_brown() override;
		color color_royal_blue() override;
		color color_saddle_brown() override;
		color color_salmon() override;
		color color_sandy_brown() override;
		color color_sea_green() override;
		color color_sea_shell() override;
		color color_sienna() override;
		color color_silver() override;
		color color_sky_blue() override;
		color color_slate_blue() override;
		color color_slate_gray() override;
		color color_snow() override;
		color color_spring_green() override;
		color color_steel_blue() override;
		color color_swinburne_red() override;
		color color_tan() override;
		color color_teal() override;
		color color_thistle() override;
		string color_to_string(color c) override;
		color color_tomato() override;
		color color_transparent() override;
		color color_turquoise() override;
		color color_violet() override;
		color color_wheat() override;
		color color_white() override;
		color color_white_smoke() override;
		color color_yellow() override;
		color color_yellow_green() override;
		int green_of(color c) override;
		color hsb_color(double hue, double saturation, double brightness) override;
		double hue_of(color c) override;
		color random_color() override;
		color random_rgb_color(int alpha) override;
		int red_of(color c) override;
		color rgb_color(double red, double green, double blue) override;
		color rgb_color(int red, int green, int blue) override;
		color rgba_color(double red, double green, double blue, double alpha) override;
		color rgba_color(int red, int green, int blue, int alpha) override;
		double saturation_of(color c) override;
		color string_to_color(string str) override;
	};
}
