//
// Created by kvasarnomad on 5/16/21.
//

#ifndef DES64B_DES_H
#define DES64B_DES_H

#include <stdint.h>

typedef struct DesBlock {
    uint64_t data;
} DesBlock;

DesBlock new_block(uint64_t data);
DesBlock permutation(DesBlock src_block, const uint8_t p[64]);
DesBlock ip(DesBlock message_block);
DesBlock fp(DesBlock message_block);

#endif //DES64B_DES_H
