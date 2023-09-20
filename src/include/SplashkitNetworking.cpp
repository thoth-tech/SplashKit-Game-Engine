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
#include "SplashkitNetworking.h"
#include "splashkit.h"
namespace SplashkitGameEngine
{
	bool SplashkitNetworking::accept_all_new_connections() 
	{
		return ::accept_all_new_connections();
	};

	bool SplashkitNetworking::accept_new_connection(server_socket server) 
	{
		return ::accept_new_connection(server);
	};

	void SplashkitNetworking::broadcast_message(const string &a_msg, server_socket svr) 
	{
		::broadcast_message(a_msg, svr);
	}

	void SplashkitNetworking::broadcast_message(const string &a_msg) 
	{
		::broadcast_message(a_msg);
	}

	void SplashkitNetworking::broadcast_message(const string &a_msg, const string &name) 
	{
		::broadcast_message(a_msg, name);
	}

	void SplashkitNetworking::check_network_activity() 
	{
		::check_network_activity();
	}

	void SplashkitNetworking::clear_messages(const string &name) 
	{
		::clear_messages(name);
	}

	void SplashkitNetworking::clear_messages(connection a_connection) 
	{
		::clear_messages(a_connection);
	}

	void SplashkitNetworking::clear_messages(server_socket svr) 
	{
		::clear_messages(svr);
	}

	void SplashkitNetworking::close_all_connections() 
	{
		::close_all_connections();
	}

	void SplashkitNetworking::close_all_servers() 
	{
		::close_all_servers();
	}

	bool SplashkitNetworking::close_connection(connection a_connection) 
	{
		return ::close_connection(a_connection);
	};

	bool SplashkitNetworking::close_connection(const string &name) 
	{
		return ::close_connection(name);
	};

	void SplashkitNetworking::close_message(message msg) 
	{
		::close_message(msg);
	}

	bool SplashkitNetworking::close_server(const string &name) 
	{
		return ::close_server(name);
	};

	bool SplashkitNetworking::close_server(server_socket svr) 
	{
		return ::close_server(svr);
	};

	int SplashkitNetworking::connection_count(const string &name) 
	{
		return ::connection_count(name);
	};

	int SplashkitNetworking::connection_count(server_socket server) 
	{
		return ::connection_count(server);
	};

	int SplashkitNetworking::connection_ip(connection a_connection) 
	{
		return ::connection_ip(a_connection);
	};

	int SplashkitNetworking::connection_ip(const string &name) 
	{
		return ::connection_ip(name);
	};

	connection SplashkitNetworking::connection_named(const string &name) 
	{
		return ::connection_named(name);
	};

	short SplashkitNetworking::connection_port(connection a_connection) 
	{
		return ::connection_port(a_connection);
	};

	short SplashkitNetworking::connection_port(const string &name) 
	{
		return ::connection_port(name);
	};

	server_socket SplashkitNetworking::create_server(const string &name, unsigned short port) 
	{
		return ::create_server(name, port);
	};

	server_socket SplashkitNetworking::create_server(const string &name, unsigned short port, connection_type protocol) 
	{
		return ::create_server(name, port, protocol);
	};

	string SplashkitNetworking::dec_to_hex(unsigned int a_dec) 
	{
		return ::dec_to_hex(a_dec);
	};

	connection SplashkitNetworking::fetch_new_connection(server_socket server) 
	{
		return ::fetch_new_connection(server);
	};

	bool SplashkitNetworking::has_connection(const string &name) 
	{
		return ::has_connection(name);
	};

	bool SplashkitNetworking::has_messages() 
	{
		return ::has_messages();
	};

	bool SplashkitNetworking::has_messages(connection con) 
	{
		return ::has_messages(con);
	};

	bool SplashkitNetworking::has_messages(const string &name) 
	{
		return ::has_messages(name);
	};

	bool SplashkitNetworking::has_messages(server_socket svr) 
	{
		return ::has_messages(svr);
	};

	bool SplashkitNetworking::has_new_connections() 
	{
		return ::has_new_connections();
	};

	bool SplashkitNetworking::has_server(const string &name) 
	{
		return ::has_server(name);
	};

	string SplashkitNetworking::hex_str_to_ipv4(const string &a_hex) 
	{
		return ::hex_str_to_ipv4(a_hex);
	};

	string SplashkitNetworking::hex_to_dec_string(const string &a_hex) 
	{
		return ::hex_to_dec_string(a_hex);
	};

	int SplashkitNetworking::ipv4_to_dec(const string &a_ip) 
	{
		return ::ipv4_to_dec(a_ip);
	};

	string SplashkitNetworking::ipv4_to_hex(const string &a_ip) 
	{
		return ::ipv4_to_hex(a_ip);
	};

	string SplashkitNetworking::ipv4_to_str(unsigned int ip) 
	{
		return ::ipv4_to_str(ip);
	};

	bool SplashkitNetworking::is_connection_open(connection con) 
	{
		return ::is_connection_open(con);
	};

	bool SplashkitNetworking::is_connection_open(const string &name) 
	{
		return ::is_connection_open(name);
	};

	connection SplashkitNetworking::last_connection(const string &name) 
	{
		return ::last_connection(name);
	};

	connection SplashkitNetworking::last_connection(server_socket server) 
	{
		return ::last_connection(server);
	};

	connection SplashkitNetworking::message_connection(message msg) 
	{
		return ::message_connection(msg);
	};

	int SplashkitNetworking::message_count(server_socket svr) 
	{
		return ::message_count(svr);
	};

	int SplashkitNetworking::message_count(connection a_connection) 
	{
		return ::message_count(a_connection);
	};

	int SplashkitNetworking::message_count(const string &name) 
	{
		return ::message_count(name);
	};

	string SplashkitNetworking::message_data(message msg) 
	{
		return ::message_data(msg);
	};

	string SplashkitNetworking::message_host(message msg) 
	{
		return ::message_host(msg);
	};

	short SplashkitNetworking::message_port(message msg) 
	{
		return ::message_port(msg);
	};

	connection_type SplashkitNetworking::message_protocol(message msg) 
	{
		return ::message_protocol(msg);
	};

	string SplashkitNetworking::my_ip() 
	{
		return ::my_ip();
	};

	string SplashkitNetworking::name_for_connection(const string host, const unsigned int port) 
	{
		return ::name_for_connection(host, port);
	};

	int SplashkitNetworking::new_connection_count(server_socket server) 
	{
		return ::new_connection_count(server);
	};

	connection SplashkitNetworking::open_connection(const string &name, const string &host, unsigned short port) 
	{
		return ::open_connection(name, host, port);
	};

	connection SplashkitNetworking::open_connection(const string &name, const string &host, unsigned short port, connection_type protocol) 
	{
		return ::open_connection(name, host, port, protocol);
	};

	message SplashkitNetworking::read_message() 
	{
		return ::read_message();
	};

	message SplashkitNetworking::read_message(connection a_connection) 
	{
		return ::read_message(a_connection);
	};

	message SplashkitNetworking::read_message(const string &name) 
	{
		return ::read_message(name);
	};

	message SplashkitNetworking::read_message(server_socket svr) 
	{
		return ::read_message(svr);
	};

	string SplashkitNetworking::read_message_data(const string &name) 
	{
		return ::read_message_data(name);
	};

	string SplashkitNetworking::read_message_data(connection a_connection) 
	{
		return ::read_message_data(a_connection);
	};

	string SplashkitNetworking::read_message_data(server_socket svr) 
	{
		return ::read_message_data(svr);
	};

	void SplashkitNetworking::reconnect(connection a_connection) 
	{
		::reconnect(a_connection);
	}

	void SplashkitNetworking::reconnect(const string &name) 
	{
		::reconnect(name);
	}

	void SplashkitNetworking::release_all_connections() 
	{
		::release_all_connections();
	}

	void SplashkitNetworking::reset_new_connection_count(server_socket server) 
	{
		::reset_new_connection_count(server);
	}

	connection SplashkitNetworking::retrieve_connection(const string &name, int idx) 
	{
		return ::retrieve_connection(name, idx);
	};

	connection SplashkitNetworking::retrieve_connection(server_socket server, int idx) 
	{
		return ::retrieve_connection(server, idx);
	};

	bool SplashkitNetworking::send_message_to(const string &a_msg, connection a_connection) 
	{
		return ::send_message_to(a_msg, a_connection);
	};

	bool SplashkitNetworking::send_message_to(const string &a_msg, const string &name) 
	{
		return ::send_message_to(a_msg, name);
	};

	bool SplashkitNetworking::server_has_new_connection(const string &name) 
	{
		return ::server_has_new_connection(name);
	};

	bool SplashkitNetworking::server_has_new_connection(server_socket server) 
	{
		return ::server_has_new_connection(server);
	};

	server_socket SplashkitNetworking::server_named(const string &name) 
	{
		return ::server_named(name);
	};

	void SplashkitNetworking::set_udp_packet_size(unsigned int udp_packet_size) 
	{
		::set_udp_packet_size(udp_packet_size);
	}

	int SplashkitNetworking::udp_packet_size() 
	{
		return ::udp_packet_size();
	};

}
