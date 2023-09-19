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

#include "INetworking.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	class SplashkitNetworking : public INetworking
	{
	public:
		bool accept_all_new_connections() override;
		bool accept_new_connection(server_socket server) override;
		void broadcast_message(const string &a_msg, server_socket svr) override;
		void broadcast_message(const string &a_msg) override;
		void broadcast_message(const string &a_msg, const string &name) override;
		void check_network_activity() override;
		void clear_messages(const string &name) override;
		void clear_messages(connection a_connection) override;
		void clear_messages(server_socket svr) override;
		void close_all_connections() override;
		void close_all_servers() override;
		bool close_connection(connection a_connection) override;
		bool close_connection(const string &name) override;
		void close_message(message msg) override;
		bool close_server(const string &name) override;
		bool close_server(server_socket svr) override;
		int connection_count(const string &name) override;
		int connection_count(server_socket server) override;
		int connection_ip(connection a_connection) override;
		int connection_ip(const string &name) override;
		connection connection_named(const string &name) override;
		short connection_port(connection a_connection) override;
		short connection_port(const string &name) override;
		server_socket create_server(const string &name, unsigned short port) override;
		server_socket create_server(const string &name, unsigned short port, connection_type protocol) override;
		string dec_to_hex(unsigned int a_dec) override;
		connection fetch_new_connection(server_socket server) override;
		bool has_connection(const string &name) override;
		bool has_messages() override;
		bool has_messages(connection con) override;
		bool has_messages(const string &name) override;
		bool has_messages(server_socket svr) override;
		bool has_new_connections() override;
		bool has_server(const string &name) override;
		string hex_str_to_ipv4(const string &a_hex) override;
		string hex_to_dec_string(const string &a_hex) override;
		int ipv4_to_dec(const string &a_ip) override;
		string ipv4_to_hex(const string &a_ip) override;
		string ipv4_to_str(unsigned int ip) override;
		bool is_connection_open(connection con) override;
		bool is_connection_open(const string &name) override;
		connection last_connection(const string &name) override;
		connection last_connection(server_socket server) override;
		connection message_connection(message msg) override;
		int message_count(server_socket svr) override;
		int message_count(connection a_connection) override;
		int message_count(const string &name) override;
		string message_data(message msg) override;
		string message_host(message msg) override;
		short message_port(message msg) override;
		connection_type message_protocol(message msg) override;
		string my_ip() override;
		string name_for_connection(const string host, const unsigned int port) override;
		int new_connection_count(server_socket server) override;
		connection open_connection(const string &name, const string &host, unsigned short port) override;
		connection open_connection(const string &name, const string &host, unsigned short port, connection_type protocol) override;
		message read_message() override;
		message read_message(connection a_connection) override;
		message read_message(const string &name) override;
		message read_message(server_socket svr) override;
		string read_message_data(const string &name) override;
		string read_message_data(connection a_connection) override;
		string read_message_data(server_socket svr) override;
		void reconnect(connection a_connection) override;
		void reconnect(const string &name) override;
		void release_all_connections() override;
		void reset_new_connection_count(server_socket server) override;
		connection retrieve_connection(const string &name, int idx) override;
		connection retrieve_connection(server_socket server, int idx) override;
		bool send_message_to(const string &a_msg, connection a_connection) override;
		bool send_message_to(const string &a_msg, const string &name) override;
		bool server_has_new_connection(const string &name) override;
		bool server_has_new_connection(server_socket server) override;
		server_socket server_named(const string &name) override;
		void set_udp_packet_size(unsigned int udp_packet_size) override;
		int udp_packet_size() override;
	};
}
