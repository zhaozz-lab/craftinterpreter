#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);

#endif