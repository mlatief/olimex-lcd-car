/*
The original .wav file credits to:
http://eng.universal-soundbank.com/wav/atari2600-4.htm 
http://s1download-universal-soundbank.com/wav/18605.wav

Used NCH tool:
http://www.nch.com.au/switch/index.html

and wav2c:
http://darkfader.net/ngpc/files/wav2c.zip
*/

#define sound_crash_length crash18605_length
#define sound_crash_data crash18605

const int crash18605_length=3500;
const unsigned char crash18605[] PROGMEM=
{
	116,97,250,8,0,0,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,127,127,127,127,127,128,127,128,127,128,127,128,128,127,128,127,128,127,128,128,127,128,127,128,128,127,128,127,127,127,128,128,127,127,128,127,127,128,127,127,127,127,128,128,128,128,127,127,127,128,127,128,127,127,128,128,128,127,127,128,128,127,127,127,127,128,127,
	128,128,127,128,128,127,128,128,127,128,127,128,128,127,127,127,128,128,127,127,128,127,128,128,127,127,127,128,128,128,128,127,128,127,128,128,127,128,128,127,127,128,128,128,127,127,127,127,128,128,128,127,127,127,128,127,127,128,127,128,127,128,128,127,128,128,128,128,127,128,128,128,127,128,128,128,128,127,127,128,128,128,128,127,128,128,128,128,127,128,128,128,128,128,127,127,128,128,128,128,
	127,127,128,127,128,128,127,126,128,128,127,126,126,127,127,127,127,128,129,128,128,127,128,128,128,129,128,128,128,127,128,127,125,129,127,129,128,130,128,126,186,188,161,171,176,188,182,196,152,106,130,123,108,94,86,79,80,78,80,79,87,89,91,163,166,144,160,174,181,185,191,186,183,179,176,161,171,127,78,101,95,74,109,131,96,108,119,76,66,105,104,97,152,150,117,129,144,155,167,156,
	166,138,86,113,114,98,92,84,82,80,76,112,141,122,131,145,104,91,124,119,121,165,157,141,152,156,161,163,158,170,145,99,130,124,106,106,97,93,89,85,133,170,142,146,157,166,164,161,167,159,167,163,154,158,151,141,152,145,155,125,64,93,90,84,76,61,72,72,76,84,91,86,91,92,144,167,143,160,169,173,174,179,179,169,177,174,168,176,171,162,159,156,153,149,143,139,137,130,91,60,
	80,82,68,113,127,98,105,119,137,147,153,165,174,169,177,169,167,145,89,103,119,96,112,145,118,103,122,88,68,99,98,93,100,103,102,98,99,101,102,96,107,107,97,110,121,126,129,141,139,146,135,159,208,175,162,173,176,186,177,173,185,127,90,128,121,102,151,169,126,137,136,75,75,110,94,111,156,135,115,131,143,155,166,171,180,137,104,133,125,100,146,157,117,115,116,120,124,134,162,153,
	88,88,103,80,93,139,124,110,129,139,152,153,158,160,149,145,159,150,151,111,71,96,87,67,116,122,97,112,121,139,155,153,168,152,74,83,101,81,74,77,78,72,78,72,71,78,89,92,101,119,112,111,118,120,120,132,124,129,193,200,171,191,187,135,142,166,133,147,191,166,147,161,164,168,168,166,178,130,83,112,104,89,136,152,115,125,133,72,71,118,99,103,168,159,127,142,152,159,169,169,
	167,174,171,163,162,156,150,144,138,135,131,126,132,127,127,125,65,46,82,71,67,122,124,91,116,106,63,85,117,96,120,165,140,128,152,118,86,117,124,110,149,171,136,136,146,97,86,127,111,107,157,155,118,141,137,84,106,127,114,107,103,100,95,94,94,101,97,105,112,114,119,120,123,120,121,127,126,130,137,142,129,133,132,135,193,189,162,186,165,117,133,143,124,157,185,154,144,162,115,90,
	124,123,110,101,91,100,96,96,158,167,134,166,164,110,127,159,130,142,189,161,137,157,130,94,117,129,101,141,167,129,126,136,152,154,158,164,157,154,159,158,157,157,145,153,141,147,122,62,80,81,58,47,46,59,61,56,109,151,122,133,162,127,103,143,139,118,173,179,142,150,151,150,153,153,155,159,153,147,137,143,109,57,77,87,66,105,141,102,102,131,139,138,154,168,162,159,172,165,150,145,
	90,91,118,104,96,85,81,78,81,85,82,82,94,97,112,127,125,127,133,134,129,139,143,142,151,147,154,149,155,207,196,171,181,181,181,181,170,168,158,142,143,131,132,100,72,98,98,82,76,74,86,85,78,136,150,126,146,159,164,159,165,167,166,166,163,155,161,136,87,104,116,88,108,142,114,104,130,94,76,108,112,101,98,100,99,96,104,150,154,127,149,150,105,117,142,131,118,116,108,104,
	95,124,165,142,145,154,162,165,169,175,169,174,168,160,156,153,145,148,139,141,128,74,77,94,76,88,127,117,103,121,100,73,99,112,96,131,152,125,132,143,149,150,153,157,155,155,156,147,154,141,87,92,110,81,96,142,124,106,125,103,70,101,117,103,144,170,134,134,149,104,90,116,113,110,117,120,105,105,106,97,92,104,105,132,181,175,166,186,166,127,146,159,139,127,127,121,111,110,145,166,
	143,151,171,133,119,145,147,131,114,111,102,97,101,104,104,106,97,100,105,106,117,112,145,180,156,149,161,164,173,170,164,165,113,93,107,101,92,75,77,92,86,99,155,146,132,150,166,175,170,182,183,178,169,158,152,150,111,89,114,108,95,79,75,77,74,77,89,93,92,101,103,108,113,120,118,144,182,164,154,176,153,124,150,155,134,163,177,148,147,149,149,152,159,153,154,160,151,147,145,145,
	133,130,127,133,108,69,86,96,81,103,135,116,105,119,131,137,140,146,148,108,91,117,107,103,140,141,118,121,130,136,144,144,154,136,92,104,112,102,93,91,89,91,86,120,151,129,131,145,157,164,162,169,166,122,107,128,117,111,147,147,115,129,121,83,102,118,112,106,98,96,97,102,102,104,107,109,108,112,113,121,122,118,168,180,160,171,178,181,183,186,181,179,174,166,156,158,131,88,97,105,
	86,107,129,109,107,116,126,132,135,141,144,140,139,142,135,134,132,133,125,128,122,83,90,100,91,83,83,88,84,87,86,87,91,97,102,109,114,118,125,124,165,179,162,170,176,180,176,179,173,170,169,157,151,147,142,138,132,129,128,123,122,126,120,119,123,121,121,124,124,123,126,128,126,128,132,132,130,135,137,129,129,124,129,113,75,87,96,89,85,83,85,90,91,92,96,96,100,103,108,113,
	118,124,122,132,135,138,136,146,191,185,167,178,187,184,178,178,175,170,159,154,148,140,137,140,135,135,142,107,95,118,112,103,133,137,116,124,134,140,144,152,157,161,164,168,166,165,167,162,158,158,152,139,135,129,121,121,81,62,84,78,72,76,82,81,86,90,89,97,110,104,123,165,152,139,162,151,121,136,145,119,142,167,142,141,146,149,151,150,152,150,150,149,139,137,135,95,97,112,102,94,
	91,91,96,86,104,148,135,132,144,155,164,161,160,171,139,113,134,126,112,105,100,101,90,97,138,138,121,145,143,111,123,136,128,121,118,116,112,113,112,114,109,113,118,114,114,120,126,125,129,128,134,129,132,177,174,150,167,162,127,137,151,139,128,123,123,116,113,109,109,111,111,114,115,116,118,119,122,124,125,126,129,130,131,132,132,133,133,134,134,134,135,134,134,135,134,134,134,133,133,133,
	133,132,132,132,132,132,132,131,130,130,130,130,130,129,129,129,129,130,130,130,130,131,131,131,131,131,131,131,131,130,130,130,130,130,130,130,130,130,130,130,130,130,130,130,131,130,130,130,130,130,130,130,129,129,130,129,129,128,129,130,128,129,130,129,129,130,131,129,130,131,131,131,131,131,129,129,130,132,132,130,130,131,132,132,131,126,127,132,133,128,127,127,132,130,128,130,116,169,143,94,
	131,129,123,123,120,127,114,132,192,178,158,172,185,190,184,180,189,146,100,123,118,89,127,151,115,111,121,134,142,135,147,150,92,87,109,98,88,74,75,73,65,75,86,76,92,93,127,174,159,157,168,143,108,130,146,135,159,175,137,133,145,101,96,124,109,108,156,147,110,136,124,81,103,119,102,101,89,86,96,86,128,166,141,142,163,125,109,142,130,126,112,102,108,96,91,102,98,108,107,123,
	183,167,154,172,172,181,181,178,183,175,170,162,147,151,99,71,99,91,80,65,64,74,70,73,83,79,84,83,105,162,154,144,175,190,191,195,198,193,146,112,131,119,87,128,142,110,119,125,131,145,134,135,138,76,70,103,83,91,141,131,112,137,115,76,109,124,98,137,168,135,132,157,118,87,127,120,100,154,167,126,134,149,147,148,157,167,158,156,163,151,158,131,82,99,103,87,75,71,65,63,
	70,78,79,80,92,94,151,176,142,167,180,124,124,153,136,128,125,113,115,97,122,172,150,142,157,165,166,174,171,176,133,99,127,116,100,88,86,84,75,74,82,82,91,91,106,166,167,144,171,165,117,138,154,136,128,121,114,106,106,106,102,100,112,97,161,167,80,114,140,129,122,126,126,120,122,120,121,121,124,120,121,123,123,124,125,124,122,128,129,127,131,127,127,129,127,130,132,133,132,131,
	132,133,132,133,132,132,133,131,132,132,131,131,134,132,131,132,130,131,133,132,133,132,132,134,133,131,131,134,134,130,133,133,131,131,131,133,132,131,132,133,131,131,132,132,131,130,133,131,130,130,130,132,132,132,130,131,133,132,131,131,131,130,130,130,130,130,129,130,130,129,131,131,131,128,129,131,130,131,130,129,130,130,130,130,130,130,130,131,130,129,130,129,130,131,129,129,128,130,129,129,
	129,129,129,129,130,129,129,129,129,129,128,129,129,129,129,128,129,129,129,129,129,129,129,129,128,129,129,128,128,129,129,129,129,128,129,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,
	128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
	127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,127,
	127,127,127,127,76,73,83,84,80,0,0,0,73,78,70,79,73,80,82,68,10,0,0,0,97,116,97,114,105,50,54,48,48,0,73,65,82,84,14,0,0,0,118,105,110,116,97,103,101,32,115,111,117,110,100,0,73,71,78,82,6,0,0,0,79,116,104,101,114,0,73,78,65,77,14,0,0,0,115,111,110,115,32,118,105,110,116,97,103,101,115,0,68,73,83,80,18,0,0,0,
	1,0,0,0,115,111,110,115,32,118,105,110,116,97,103,101,115,0,98,101,120,116,94,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,61,77,105,99,114,111,115,111,102,116,32,80,67,77,32,70,111,114,109,97,116,32,70,61,52,52,49,48,48,32,87,61,49,54,32,77,61,115,116,101,114,101,111,13,10,65,61,77,105,99,114,111,115,111,102,116,32,80,67,77,32,70,111,114,109,97,116,32,70,61,52,
	52,49,48,48,32,87,61,49,54,32,77,61,115,116,101,114,101,111,13,10,65,61,77,105,99,114,111,115,111,102,116,32,80,67,77,32,70,111,114,109,97,116,32,70,61,52,52,49,48,48,32,87,61,49,54,32,77,61,115,116,101,114,101,111,13,10,65,61,77,105,99,114,111,115,111,102,116,32,80,67,77,32,70,111,114,109,97,116,32,70,61,52,52,49,48,48,32,87,61,49,
	54,32,77,61,115,116,101,114,101,111,13,10,65,61,77,105,99,114,111,115,111,102,116,32,80,67,77,32,70,111,114,109,97,116,32,70,61,52,52,49,48,48,32,87,61,49,54,32,77,61,115,116,101,114,101,111,13,10,65,61,77,105,99,114,111,115,111,102,116,32,80,67,77,32,70,111,114,109,97,116,32,70,61,52,52,49,48,32,99,97,114,116,0,8,0,0,0,0,0,0,
	115,111,110,115,32,118,105,110,116,97,103,101,115,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,118,105,110,116,97,103,101,32,115,111,117,110,100,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
};