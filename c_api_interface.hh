
/*
 * VMProtect Security Instructional Demo | Written by https://github.com/thatfox
 */

#pragma once
// Include: VMPotect API 
#include "c_api.hh"
// Name: VMProtect Security Interface [...]
// Code...
class c_vmp
{

	public:

	c_date_t* date {};
	c_flag_t* flag {};
   c_user_state_t* state {};
	c_serial_data_t* serial {};

};
// Externalize:
extern c_vmp vmp; // Call: Inside Entry
// End...

// API Macro Reference Pointer(s)
#define serial vmp.serial
#define state vmp.state
#define date vmp.date
#define flag vmp.flag
// End...
