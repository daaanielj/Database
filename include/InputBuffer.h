// InputBuffer.h
#ifndef INPUTBUFFER_H
#define INPUTBUFFER_H

#include <string>

struct InputBuffer
{
	std::string buffer;
	size_t buffer_length;
	ssize_t input_length;
};

InputBuffer* new_input_buffer();
void print_prompt();
void read_input(InputBuffer* input_buffer);
void close_input_buffer(InputBuffer* input_buffer);

#endif


