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
#include "SplashkitDatabase.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	database SplashkitDatabase::database_named(string name) 
	{
		return ::database_named(name);
	};

	string SplashkitDatabase::error_message(query_result query) 
	{
		return ::error_message(query);
	};

	void SplashkitDatabase::free_all_databases() 
	{
		::free_all_databases();
	}

	void SplashkitDatabase::free_all_query_results() 
	{
		::free_all_query_results();
	}

	void SplashkitDatabase::free_database(database db_to_close) 
	{
		::free_database(db_to_close);
	}

	void SplashkitDatabase::free_database(string name_of_db_to_close) 
	{
		::free_database(name_of_db_to_close);
	}

	void SplashkitDatabase::free_query_result(query_result query) 
	{
		::free_query_result(query);
	}

	bool SplashkitDatabase::get_next_row(query_result db_result) 
	{
		return ::get_next_row(db_result);
	};

	bool SplashkitDatabase::has_database(string name) 
	{
		return ::has_database(name);
	};

	bool SplashkitDatabase::has_row(query_result db_result) 
	{
		return ::has_row(db_result);
	};

	database SplashkitDatabase::open_database(string name, string filename) 
	{
		return ::open_database(name, filename);
	};

	int SplashkitDatabase::query_column_count(query_result db_result) 
	{
		return ::query_column_count(db_result);
	};

	bool SplashkitDatabase::query_column_for_bool(query_result db_result, int col) 
	{
		return ::query_column_for_bool(db_result, col);
	};

	double SplashkitDatabase::query_column_for_double(query_result db_result, int col) 
	{
		return ::query_column_for_double(db_result, col);
	};

	int SplashkitDatabase::query_column_for_int(query_result db_result, int col) 
	{
		return ::query_column_for_int(db_result, col);
	};

	string SplashkitDatabase::query_column_for_string(query_result db_result, int col) 
	{
		return ::query_column_for_string(db_result, col);
	};

	bool SplashkitDatabase::query_success(query_result db_result) 
	{
		return ::query_success(db_result);
	};

	string SplashkitDatabase::query_type_of_col(query_result db_result, int col) 
	{
		return ::query_type_of_col(db_result, col);
	};

	void SplashkitDatabase::reset_query_result(query_result db_result) 
	{
		::reset_query_result(db_result);
	}

	int SplashkitDatabase::rows_changed(database db) 
	{
		return ::rows_changed(db);
	};

	query_result SplashkitDatabase::run_sql(database db, string sql) 
	{
		return ::run_sql(db, sql);
	};

	query_result SplashkitDatabase::run_sql(string database_name, string sql) 
	{
		return ::run_sql(database_name, sql);
	};

}
