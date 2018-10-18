#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include "wave.h"

typedef struct wavheader {
		char	riff_tag[4];
		int		riff_length;
		char	wave_tag[4];
		char	fmt_tag[4];
		int		fmt_length;
		short	audio_format;
		short	num_channels;
		int		sample_rate;
		int		byte_rate;
		short	block_align;
		short	bits_per_sample;
		char	data_tag[4];
		int		data_length;
};

void main() 
{
	FILE * datei;

	/* Funktioniert noch nicht, Kann Datei nicht öffnen ---- WARUM? */
	datei = fopen("test.wav", "r");
	if (NULL == datei) {
		printf("Kann Datei nicht öffnen\n");

	}
}
