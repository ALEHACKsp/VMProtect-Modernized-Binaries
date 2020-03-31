
/*
 * VMProtect Security Instructional Demo | Written by https://github.com/thatfox
 */

#pragma once
// Name: VMProtect Security Flags [...]
// Code...
enum c_flag_t
{

	corrupted = 1,
	invalid = 2,
	blacklisted = 4,
	date_expired = 8,
	running_out_of_time = 10,
	bad_hwid = 20,
	build_expired = 40,

};
// End...
