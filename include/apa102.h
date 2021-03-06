#ifndef __APA102_H__
#define __APA102_H__

#include <common.h>

#define BOFFSET 1
#define GOFFSET 2
#define ROFFSET 3

#define BITRATE 32000000

int apa102_spi_setup(void);
int begin(void);
void set_index_rgb(uint8_t index, uint8_t r, uint8_t g, uint8_t b);
void set_index_4byte(uint8_t index, uint32_t color);
void show(void);
void clear(void);
#endif