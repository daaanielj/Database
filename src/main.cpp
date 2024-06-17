#include <iostream>
#include "InputBuffer.h"
#include "MetaCommand.h"

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
