
/*
 * VMProtect Security Instructional Demo | Written by https://github.com/thatfox
 */

#pragma once
// Include: VMProtect Security Date 
#include "c_api.hh"
// Name: VMProtect Security Serial Data [...]
// Code...	
struct c_serial_data_t
{

	int32_t	flag_state {};
	wchar_t	username[256] {};
	wchar_t	email[256] {};
	c_date_t expiration_date {};
	c_date_t maxiumum_builds_per_key {};
	int32_t	activation_time {};
	unsigned char user_data_length {};
	unsigned char user_data[255] {};

};
// End...
