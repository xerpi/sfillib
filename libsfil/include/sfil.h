/**
 * @file sfil.h
 * @author Sergi Granell (xerpi)
 * @date 2 April 2015
 * @brief sfillib header
 */

#ifndef SFIL_H
#define SFIL_H

#include <3ds.h>
#include <sf2d.h>

#ifdef __cplusplus
extern "C" {
#endif

sf2d_texture *sfil_load_PNG_file(const char *filename, sf2d_place place);
sf2d_texture *sfil_load_PNG_buffer(const void *buffer, sf2d_place place);

sf2d_texture *sfil_load_JPEG_file(const char *filename, sf2d_place place);
sf2d_texture *sfil_load_JPEG_buffer(const void *buffer, unsigned long buffer_size, sf2d_place place);

sf2d_texture *sfil_load_BMP_file(const char *filename, sf2d_place place);
sf2d_texture *sfil_load_BMP_buffer(const void *buffer, sf2d_place place);

#ifdef __cplusplus
}
#endif

#endif
