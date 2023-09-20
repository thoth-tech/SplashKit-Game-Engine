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

#include "database.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class IDatabase
{
public:
    virtual database database_named(string name) = 0;
    virtual string error_message(query_result query) = 0;
    virtual void free_all_databases() = 0;
    virtual void free_all_query_results() = 0;
    virtual void free_database(database db_to_close) = 0;
    virtual void free_database(string name_of_db_to_close) = 0;
    virtual void free_query_result(query_result query) = 0;
    virtual bool get_next_row(query_result db_result) = 0;
    virtual bool has_database(string name) = 0;
    virtual bool has_row(query_result db_result) = 0;
    virtual database open_database(string name, string filename) = 0;
    virtual int query_column_count(query_result db_result) = 0;
    virtual bool query_column_for_bool(query_result db_result, int col) = 0;
    virtual double query_column_for_double(query_result db_result, int col) = 0;
    virtual int query_column_for_int(query_result db_result, int col) = 0;
    virtual string query_column_for_string(query_result db_result, int col) = 0;
    virtual bool query_success(query_result db_result) = 0;
    virtual string query_type_of_col(query_result db_result, int col) = 0;
    virtual void reset_query_result(query_result db_result) = 0;
    virtual int rows_changed(database db) = 0;
    virtual query_result run_sql(database db, string sql) = 0;
    virtual query_result run_sql(string database_name, string sql) = 0;
};