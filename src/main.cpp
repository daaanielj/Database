#include <iostream>
#include "InputBuffer.h"
#include "MetaCommand.h"

// struct InputBuffer
// {
// 	std::string buffer;
// 	size_t buffer_length;
// 	ssize_t input_length;
// };

// enum class MetaCommandResult
// {
// 	META_COMMAND_SUCCESS,
// 	META_COMMAND_UNRECOGNIZED_COMMAND
// };

enum class PrepareResults
{
	PREPARE_SUCCESS,
	PREPARE_UNRECOGNIZED_STATEMENT
};

enum class StatementType
{
	STATMENT_INSERT,
	STATEMENT_SELECT
};

struct Statement
{
	StatementType type;
};

// InputBuffer* new_input_buffer()
// {
// 	InputBuffer* input_buffer = new InputBuffer();
// 	input_buffer->buffer_length = 0;
// 	input_buffer->input_length = 0;
//
// 	return input_buffer;
// }

// void print_prompt()
// {
// 	std::cout << "db > ";
// }

// void read_input(InputBuffer* input_buffer)
// {
// 	std::getline(std::cin, input_buffer->buffer);
//
// 	if (input_buffer->buffer.empty())
// 	{
// 		std::cerr << "Error reading input" << std::endl;
// 		exit(EXIT_FAILURE);
// 	}
//
// 	input_buffer->input_length = input_buffer->buffer.length();
//
// 	if (input_buffer->input_length > 0 && input_buffer->buffer[input_buffer->input_length - 1] == '\n')
// 	{
// 		input_buffer->buffer[input_buffer->input_length - 1] = '\0';
// 		input_buffer->input_length--;
// 	}
//
// 	input_buffer->buffer_length = input_buffer->buffer.capacity();
//
// }

// void close_input_buffer(InputBuffer* input_buffer)
// {
// 	delete input_buffer;
// }

int main(int argc, char* argv[])
{
	InputBuffer* input_buffer = new_input_buffer();
	while (true)
	{
		print_prompt();
		read_input(input_buffer);

		if (input_buffer->buffer == ".exit")
		{
			close_input_buffer(input_buffer);
			exit(EXIT_SUCCESS);
		}
		else
		{
			std::cout << "Unrecognized command '" << input_buffer->buffer << "'." << std::endl;
		}
	}
}
