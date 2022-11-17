#include "shell.h"

/**
 * _getline - Return command line type by user
 *
 * @prmData: data structure
 *
 * Return: buffer
 */
void _getline(appData_t *prmData)
{
	char c[1025];
	int i = 0, rd, bufferSize = BUFFER_SIZE;
	int k = 0;

	prmData->buffer = _calloc(sizeof(char), BUFFER_SIZE);

	while (c[k] != '\n' || c[k] != EOF)
	{
		rd = read(STDIN_FILENO, &c, 1024);

		if (rd == 0)
		{
			_putchar('\n');
			if (prmData->env != NULL)
				_freeEnvList(prmData->env);
			prmData->env = NULL;
			_freeAppData(prmData);
			free(prmData);
			exit(EXIT_SUCCESS);
		}

		if (i >= bufferSize - 1)
		{
			prmData->buffer = _realloc(
				prmData->buffer,
				bufferSize,
				sizeof(char) * (i + 2)
			);
			bufferSize = i + 2;
		}
		prmData->buffer[i] = c[k];
		i++;
		k++;
	}
	prmData->buffer[i] = '\0';
}
