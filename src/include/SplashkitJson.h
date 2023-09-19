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

#include "IJson.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitJson : public IJson
	{
	public:
		json create_json() override;
		json create_json(string json_string) override;
		void free_all_json() override;
		void free_json(json j) override;
		int json_count_keys(json j) override;
		json json_from_color(color clr) override;
		json json_from_file(const string &filename) override;
		json json_from_string(const string &j_string) override;
		bool json_has_key(json j, string key) override;
		void json_read_array(json j, string key, vector<double> &out_result) override;
		void json_read_array(json j, string key, vector<json> &out_result) override;
		void json_read_array(json j, string key, vector<string> &out_result) override;
		void json_read_array(json j, string key, vector<bool> &out_result) override;
		bool json_read_bool(json j, string key) override;
		float json_read_number(json j, string key) override;
		double json_read_number_as_double(json j, string key) override;
		int json_read_number_as_int(json j, string key) override;
		json json_read_object(json j, string key) override;
		string json_read_string(json j, string key) override;
		void json_set_array(json j, string key, vector<string> value) override;
		void json_set_array(json j, string key, vector<double> value) override;
		void json_set_array(json j, string key, vector<bool> value) override;
		void json_set_array(json j, string key, vector<json> value) override;
		void json_set_bool(json j, string key, bool value) override;
		void json_set_number(json j, string key, int value) override;
		void json_set_number(json j, string key, double value) override;
		void json_set_number(json j, string key, float value) override;
		void json_set_object(json j, string key, json obj) override;
		void json_set_string(json j, string key, string value) override;
		color json_to_color(json j) override;
		void json_to_file(json j, const string &filename) override;
		string json_to_string(json j) override;
	};
}
