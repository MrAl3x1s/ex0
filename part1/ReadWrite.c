#include "ReadWrite.h"

bool readLine(char** output) {
	// allocate space for new line, and create pointer.
	char *input = (char*)(calloc(MAX_STR_SIZE, sizeof(char)));
	if (input == NULL) {
		return false;
	}
	#ifndef NDEBUG
		printf("\n* Created pointer at address: %d\n", &input);
	#endif
	
	// read line from standard input stream.
	fgets(input, MAX_STR_SIZE, stdin);
	
	// parse line into a string of correct length, appended by the correct ending character.
	int len = 0;
	// count the number of characters until the end of the string.
	for (; len < MAX_STR_SIZE && input[len] != '\n' && input[len] != EOF && input[len] != '\0'; len++) {};
	// append correct ending character.
	input[len++] = '\0';
	#ifndef NDEBUG
		printf("\n* Read string: %s Of length: %d\n", input, len);
	#endif
	// create string of appropriate length and free up the rest of the space.
	char str[len];
	#ifndef NDEBUG
		printf("\n* Created pointer at address: %d\n", &str);
	#endif
	
	for (int i = 0; i < len; i++) {
		str[i] = input[i];
	}
	
	free(input);
	#ifndef NDEBUG
		printf("\n* Freed pointer at address: %d\n", &input);
	#endif
	
	(*output) = str;

	return true;
}

bool readInt(int* address) {
	char *input;
	if (!readLine(&input))
		return false;
	#ifndef NDEBUG
		printf("\n* Read line: %s\n", input);
	#endif
	
	int index = 0;
	char current;
	int total = 0;
	while ((current = input[index]) != '\0') {
		if (current < '0' || current > '9')
			return false;
		else {
			int dig = (int)(current) - '0';
			#ifndef NDEBUG
				printf("\n* Translated digit %c to %d\n", current, dig);
			#endif
			total = total * 10 + dig;
			index++;
		}
	}
	
	if (address != NULL)
		(*address) = total;
	
	return true;
}

bool readChar(char* target) {
	char input = getchar();
	while (input == '\n' || input == '\0' || input == EOF) {
		input = getchar();
	}
	#ifndef NDEBUG
		printf("\n* Read character: %c", input);
	#endif
	
	if (target != NULL)
		(*target) = input;
	return true;
}

