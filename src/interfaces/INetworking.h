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

#include "networking.h"
#include <cstdint>
#include <string>
#include <vector>

using std::string;
using std::vector;

class INetworking
{
public:
    virtual bool accept_all_new_connections() = 0;
    virtual bool accept_new_connection(server_socket server) = 0;
    virtual void broadcast_message(const string &a_msg, server_socket svr) = 0;
    virtual void broadcast_message(const string &a_msg) = 0;
    virtual void broadcast_message(const string &a_msg, const string &name) = 0;
    virtual void check_network_activity() = 0;
    virtual void clear_messages(const string &name) = 0;
    virtual void clear_messages(connection a_connection) = 0;
    virtual void clear_messages(server_socket svr) = 0;
    virtual void close_all_connections() = 0;
    virtual void close_all_servers() = 0;
    virtual bool close_connection(connection a_connection) = 0;
    virtual bool close_connection(const string &name) = 0;
    virtual void close_message(message msg) = 0;
    virtual bool close_server(const string &name) = 0;
    virtual bool close_server(server_socket svr) = 0;
    virtual int connection_count(const string &name) = 0;
    virtual int connection_count(server_socket server) = 0;
    virtual int connection_ip(connection a_connection) = 0;
    virtual int connection_ip(const string &name) = 0;
    virtual connection connection_named(const string &name) = 0;
    virtual short connection_port(connection a_connection) = 0;
    virtual short connection_port(const string &name) = 0;
    virtual server_socket create_server(const string &name, unsigned short port) = 0;
    virtual server_socket create_server(const string &name, unsigned short port, connection_type protocol) = 0;
    virtual string dec_to_hex(unsigned int a_dec) = 0;
    virtual connection fetch_new_connection(server_socket server) = 0;
    virtual bool has_connection(const string &name) = 0;
    virtual bool has_messages() = 0;
    virtual bool has_messages(connection con) = 0;
    virtual bool has_messages(const string &name) = 0;
    virtual bool has_messages(server_socket svr) = 0;
    virtual bool has_new_connections() = 0;
    virtual bool has_server(const string &name) = 0;
    virtual string hex_str_to_ipv4(const string &a_hex) = 0;
    virtual string hex_to_dec_string(const string &a_hex) = 0;
    virtual int ipv4_to_dec(const string &a_ip) = 0;
    virtual string ipv4_to_hex(const string &a_ip) = 0;
    virtual string ipv4_to_str(unsigned int ip) = 0;
    virtual bool is_connection_open(connection con) = 0;
    virtual bool is_connection_open(const string &name) = 0;
    virtual connection last_connection(const string &name) = 0;
    virtual connection last_connection(server_socket server) = 0;
    virtual connection message_connection(message msg) = 0;
    virtual int message_count(server_socket svr) = 0;
    virtual int message_count(connection a_connection) = 0;
    virtual int message_count(const string &name) = 0;
    virtual string message_data(message msg) = 0;
    virtual string message_host(message msg) = 0;
    virtual short message_port(message msg) = 0;
    virtual connection_type message_protocol(message msg) = 0;
    virtual string my_ip() = 0;
    virtual string name_for_connection(const string host, const unsigned int port) = 0;
    virtual int new_connection_count(server_socket server) = 0;
    virtual connection open_connection(const string &name, const string &host, unsigned short port) = 0;
    virtual connection open_connection(const string &name, const string &host, unsigned short port, connection_type protocol) = 0;
    virtual message read_message() = 0;
    virtual message read_message(connection a_connection) = 0;
    virtual message read_message(const string &name) = 0;
    virtual message read_message(server_socket svr) = 0;
    virtual string read_message_data(const string &name) = 0;
    virtual string read_message_data(connection a_connection) = 0;
    virtual string read_message_data(server_socket svr) = 0;
    virtual void reconnect(connection a_connection) = 0;
    virtual void reconnect(const string &name) = 0;
    virtual void release_all_connections() = 0;
    virtual void reset_new_connection_count(server_socket server) = 0;
    virtual connection retrieve_connection(const string &name, int idx) = 0;
    virtual connection retrieve_connection(server_socket server, int idx) = 0;
    virtual bool send_message_to(const string &a_msg, connection a_connection) = 0;
    virtual bool send_message_to(const string &a_msg, const string &name) = 0;
    virtual bool server_has_new_connection(const string &name) = 0;
    virtual bool server_has_new_connection(server_socket server) = 0;
    virtual server_socket server_named(const string &name) = 0;
    virtual void set_udp_packet_size(unsigned int udp_packet_size) = 0;
    virtual int udp_packet_size() = 0;
};