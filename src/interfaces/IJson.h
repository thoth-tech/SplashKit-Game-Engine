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

#include "json.h"
#include "types.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class IJson
{
public:
    virtual json create_json() = 0;
    virtual json create_json(string json_string) = 0;
    virtual void free_all_json() = 0;
    virtual void free_json(json j) = 0;
    virtual int json_count_keys(json j) = 0;
    virtual json json_from_color(color clr) = 0;
    virtual json json_from_file(const string &filename) = 0;
    virtual json json_from_string(const string &j_string) = 0;
    virtual bool json_has_key(json j, string key) = 0;
    virtual void json_read_array(json j, string key, vector<double> &out_result) = 0;
    virtual void json_read_array(json j, string key, vector<json> &out_result) = 0;
    virtual void json_read_array(json j, string key, vector<string> &out_result) = 0;
    virtual void json_read_array(json j, string key, vector<bool> &out_result) = 0;
    virtual bool json_read_bool(json j, string key) = 0;
    virtual float json_read_number(json j, string key) = 0;
    virtual double json_read_number_as_double(json j, string key) = 0;
    virtual int json_read_number_as_int(json j, string key) = 0;
    virtual json json_read_object(json j, string key) = 0;
    virtual string json_read_string(json j, string key) = 0;
    virtual void json_set_array(json j, string key, vector<string> value) = 0;
    virtual void json_set_array(json j, string key, vector<double> value) = 0;
    virtual void json_set_array(json j, string key, vector<bool> value) = 0;
    virtual void json_set_array(json j, string key, vector<json> value) = 0;
    virtual void json_set_bool(json j, string key, bool value) = 0;
    virtual void json_set_number(json j, string key, int value) = 0;
    virtual void json_set_number(json j, string key, double value) = 0;
    virtual void json_set_number(json j, string key, float value) = 0;
    virtual void json_set_object(json j, string key, json obj) = 0;
    virtual void json_set_string(json j, string key, string value) = 0;
    virtual color json_to_color(json j) = 0;
    virtual void json_to_file(json j, const string &filename) = 0;
    virtual string json_to_string(json j) = 0;
};