#include <stdio.h>
#include <stdlib.h>
#define MAX 47
int main(void) 
{
	FILE *fp;
	char words[MAX];
	int wordct = 0;
	if ((fp = fopen("wordy", "a+")) == NULL) 
	{
		fprintf(stderr,"Can't open \"words\" file.\n");
		rewind(fp);
		while (fgets(words, MAX, fp) != NULL)
			wordct++;
			
			
		rewind(fp);
		puts("Enter words to add to the file; press the #");
		puts("key at the beginning of a line to terminate.");
		while ((fscanf(stdin,"%40s", words) == 1)  && (words[0] != '#'))
			fprintf(fp, "%3d: %s\n", ++wordct, words);
		puts("File contents:");
		
		rewind(fp);
		while (fgets(words, MAX, fp) != NULL)
			fputs(words, stdout);
		if (fclose(fp) != 0)
			fprintf(stderr,"Error closing file\n");
		puts("Done");
		exit(EXIT_FAILURE);
	}
	return 0;
}
