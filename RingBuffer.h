//==============================================================================
// RingBuffer
//
// Copyright (c) 2020 TAiGA
// https://github.com/metarutaiga/StreamAL
//==============================================================================
#pragma once

#include <stddef.h>
#include <stdint.h>

#ifndef STREAMAL_EXPORT
#define STREAMAL_EXPORT
#endif

struct STREAMAL_EXPORT RingBuffer
{
    RingBuffer();
    ~RingBuffer();

    char* buffer;
    size_t bufferSize;

    bool Startup(size_t size);
    void Shutdown();

    uint64_t Gather(uint64_t index, void* data, size_t dataSize, bool clear);
    uint64_t Scatter(uint64_t index, const void* data, size_t dataSize);

    char* Address(uint64_t index, size_t* size);
};
