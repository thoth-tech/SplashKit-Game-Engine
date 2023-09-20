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

#include "IDatabase.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitDatabase : public IDatabase
	{
	public:
		database database_named(string name) override;
		string error_message(query_result query) override;
		void free_all_databases() override;
		void free_all_query_results() override;
		void free_database(database db_to_close) override;
		void free_database(string name_of_db_to_close) override;
		void free_query_result(query_result query) override;
		bool get_next_row(query_result db_result) override;
		bool has_database(string name) override;
		bool has_row(query_result db_result) override;
		database open_database(string name, string filename) override;
		int query_column_count(query_result db_result) override;
		bool query_column_for_bool(query_result db_result, int col) override;
		double query_column_for_double(query_result db_result, int col) override;
		int query_column_for_int(query_result db_result, int col) override;
		string query_column_for_string(query_result db_result, int col) override;
		bool query_success(query_result db_result) override;
		string query_type_of_col(query_result db_result, int col) override;
		void reset_query_result(query_result db_result) override;
		int rows_changed(database db) override;
		query_result run_sql(database db, string sql) override;
		query_result run_sql(string database_name, string sql) override;
	};
}
