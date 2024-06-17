#include "InputBuffer.h"
#include <iostream>
#include <cstdlib>

InputBuffer* new_input_buffer()
{
	InputBuffer* input_buffer = new InputBuffer();
	input_buffer->buffer_length = 0;
	input_buffer->input_length = 0;

	return input_buffer;
}

void print_prompt()
{
	std::cout << "db > ";
}

void read_input(InputBuffer* input_buffer)
{
	std::getline(std::cin, input_buffer->buffer);

	if (input_buffer->buffer.empty())
	{
		std::cerr << "Error reading input" << std::endl;
		exit(EXIT_FAILURE);
	}

	input_buffer->input_length = input_buffer->buffer.length();

	if (input_buffer->input_length > 0 && input_buffer->buffer[input_buffer->input_length - 1] == '\n')
	{
		input_buffer->buffer[input_buffer->input_length - 1] = '\0';
		input_buffer->input_length--;
	}

	input_buffer->buffer_length = input_buffer->buffer.capacity();

}

void close_input_buffer(InputBuffer* input_buffer)
{
	delete input_buffer;
}
