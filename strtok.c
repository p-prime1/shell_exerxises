#include <stdio.h>
#include <strings.h>

char *_strtok(char *str, const char *delim)
{
	size_t i;
	static char *lastToken;
	
	if (str == NULL)
		str = lastToken;
	if (str == NULL)
		return NULL;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == delim[0])
		{
			lastToken = &str[i + 1];
			str[i] = '\0';
			return lastToken;
		}
	}
	lastToken = NULL;
	return (str);
}

int main() {
    char str[] = "Hello,World,This,is,an,example";
    char *token = _strtok(str, ",");

    while (token != NULL) {
        printf("Token: %s\n", token);
        token = _strtok(NULL, ",");
    }

    printf("Original String after strtok: %s\n", str);

    return 0;
}



