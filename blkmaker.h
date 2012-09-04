#ifndef BLKMAKER_H
#define BLKMAKER_H

#include <stdbool.h>

#include <blktemplate.h>

#define BLKMAKER_VERSION (0L)

extern bool (*blkmk_sha256_impl)(void *hash_out, const void *data, size_t datasz);

extern size_t blkmk_get_data(blktemplate_t *, void *buf, size_t bufsz, time_t usetime, int16_t *out_expire);
extern blktime_diff_t blkmk_time_left(const blktemplate_t *, time_t nowtime);
extern unsigned long blkmk_work_left(const blktemplate_t *);
#define BLKMK_UNLIMITED_WORK_COUNT  ULONG_MAX

#endif