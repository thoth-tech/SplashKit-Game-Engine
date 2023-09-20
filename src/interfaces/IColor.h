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

#include "color.h"
#include "types.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class IColor
{
public:
    virtual int alpha_of(color c) = 0;
    virtual int blue_of(color c) = 0;
    virtual double brightness_of(color c) = 0;
    virtual color color_alice_blue() = 0;
    virtual color color_antique_white() = 0;
    virtual color color_aqua() = 0;
    virtual color color_aquamarine() = 0;
    virtual color color_azure() = 0;
    virtual color color_beige() = 0;
    virtual color color_bisque() = 0;
    virtual color color_black() = 0;
    virtual color color_blanched_almond() = 0;
    virtual color color_blue() = 0;
    virtual color color_blue_violet() = 0;
    virtual color color_bright_green() = 0;
    virtual color color_brown() = 0;
    virtual color color_burly_wood() = 0;
    virtual color color_cadet_blue() = 0;
    virtual color color_chartreuse() = 0;
    virtual color color_chocolate() = 0;
    virtual color color_coral() = 0;
    virtual color color_cornflower_blue() = 0;
    virtual color color_cornsilk() = 0;
    virtual color color_crimson() = 0;
    virtual color color_cyan() = 0;
    virtual color color_dark_blue() = 0;
    virtual color color_dark_cyan() = 0;
    virtual color color_dark_goldenrod() = 0;
    virtual color color_dark_gray() = 0;
    virtual color color_dark_green() = 0;
    virtual color color_dark_khaki() = 0;
    virtual color color_dark_magenta() = 0;
    virtual color color_dark_olive_green() = 0;
    virtual color color_dark_orange() = 0;
    virtual color color_dark_orchid() = 0;
    virtual color color_dark_red() = 0;
    virtual color color_dark_salmon() = 0;
    virtual color color_dark_sea_green() = 0;
    virtual color color_dark_slate_blue() = 0;
    virtual color color_dark_slate_gray() = 0;
    virtual color color_dark_turquoise() = 0;
    virtual color color_dark_violet() = 0;
    virtual color color_deep_pink() = 0;
    virtual color color_deep_sky_blue() = 0;
    virtual color color_dim_gray() = 0;
    virtual color color_dodger_blue() = 0;
    virtual color color_firebrick() = 0;
    virtual color color_floral_white() = 0;
    virtual color color_forest_green() = 0;
    virtual color color_fuchsia() = 0;
    virtual color color_gainsboro() = 0;
    virtual color color_ghost_white() = 0;
    virtual color color_gold() = 0;
    virtual color color_goldenrod() = 0;
    virtual color color_gray() = 0;
    virtual color color_green() = 0;
    virtual color color_green_yellow() = 0;
    virtual color color_honeydew() = 0;
    virtual color color_hot_pink() = 0;
    virtual color color_indian_red() = 0;
    virtual color color_indigo() = 0;
    virtual color color_ivory() = 0;
    virtual color color_khaki() = 0;
    virtual color color_lavender() = 0;
    virtual color color_lavender_blush() = 0;
    virtual color color_lawn_green() = 0;
    virtual color color_lemon_chiffon() = 0;
    virtual color color_light_blue() = 0;
    virtual color color_light_coral() = 0;
    virtual color color_light_cyan() = 0;
    virtual color color_light_goldenrod_yellow() = 0;
    virtual color color_light_gray() = 0;
    virtual color color_light_green() = 0;
    virtual color color_light_pink() = 0;
    virtual color color_light_salmon() = 0;
    virtual color color_light_sea_green() = 0;
    virtual color color_light_sky_blue() = 0;
    virtual color color_light_slate_gray() = 0;
    virtual color color_light_steel_blue() = 0;
    virtual color color_light_yellow() = 0;
    virtual color color_lime() = 0;
    virtual color color_lime_green() = 0;
    virtual color color_linen() = 0;
    virtual color color_magenta() = 0;
    virtual color color_maroon() = 0;
    virtual color color_medium_aquamarine() = 0;
    virtual color color_medium_blue() = 0;
    virtual color color_medium_orchid() = 0;
    virtual color color_medium_purple() = 0;
    virtual color color_medium_sea_green() = 0;
    virtual color color_medium_slate_blue() = 0;
    virtual color color_medium_spring_green() = 0;
    virtual color color_medium_turquoise() = 0;
    virtual color color_medium_violet_red() = 0;
    virtual color color_midnight_blue() = 0;
    virtual color color_mint_cream() = 0;
    virtual color color_misty_rose() = 0;
    virtual color color_moccasin() = 0;
    virtual color color_navajo_white() = 0;
    virtual color color_navy() = 0;
    virtual color color_old_lace() = 0;
    virtual color color_olive() = 0;
    virtual color color_olive_drab() = 0;
    virtual color color_orange() = 0;
    virtual color color_orange_red() = 0;
    virtual color color_orchid() = 0;
    virtual color color_pale_goldenrod() = 0;
    virtual color color_pale_green() = 0;
    virtual color color_pale_turquoise() = 0;
    virtual color color_pale_violet_red() = 0;
    virtual color color_papaya_whip() = 0;
    virtual color color_peach_puff() = 0;
    virtual color color_peru() = 0;
    virtual color color_pink() = 0;
    virtual color color_plum() = 0;
    virtual color color_powder_blue() = 0;
    virtual color color_purple() = 0;
    virtual color color_red() = 0;
    virtual color color_rosy_brown() = 0;
    virtual color color_royal_blue() = 0;
    virtual color color_saddle_brown() = 0;
    virtual color color_salmon() = 0;
    virtual color color_sandy_brown() = 0;
    virtual color color_sea_green() = 0;
    virtual color color_sea_shell() = 0;
    virtual color color_sienna() = 0;
    virtual color color_silver() = 0;
    virtual color color_sky_blue() = 0;
    virtual color color_slate_blue() = 0;
    virtual color color_slate_gray() = 0;
    virtual color color_snow() = 0;
    virtual color color_spring_green() = 0;
    virtual color color_steel_blue() = 0;
    virtual color color_swinburne_red() = 0;
    virtual color color_tan() = 0;
    virtual color color_teal() = 0;
    virtual color color_thistle() = 0;
    virtual string color_to_string(color c) = 0;
    virtual color color_tomato() = 0;
    virtual color color_transparent() = 0;
    virtual color color_turquoise() = 0;
    virtual color color_violet() = 0;
    virtual color color_wheat() = 0;
    virtual color color_white() = 0;
    virtual color color_white_smoke() = 0;
    virtual color color_yellow() = 0;
    virtual color color_yellow_green() = 0;
    virtual int green_of(color c) = 0;
    virtual color hsb_color(double hue, double saturation, double brightness) = 0;
    virtual double hue_of(color c) = 0;
    virtual color random_color() = 0;
    virtual color random_rgb_color(int alpha) = 0;
    virtual int red_of(color c) = 0;
    virtual color rgb_color(double red, double green, double blue) = 0;
    virtual color rgb_color(int red, int green, int blue) = 0;
    virtual color rgba_color(double red, double green, double blue, double alpha) = 0;
    virtual color rgba_color(int red, int green, int blue, int alpha) = 0;
    virtual double saturation_of(color c) = 0;
    virtual color string_to_color(string str) = 0;
};