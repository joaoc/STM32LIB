#pragma once

#include "ro_t.hpp"

/**
 * A read-only mutability policy for use with reg_t.
 */
struct rw_t : ro_t
{
   static void write(
      volatile unsigned * device,
      unsigned offset,
      unsigned mask,
      unsigned value
   ) __attribute__((optimize ("O2") ))
   { *device = (*device & ~mask) | ((value << offset) & mask); }

   static void set(
      volatile unsigned * device,
      unsigned mask
   ) __attribute__((optimize ("O2") ))
   { *device |= mask; }

   static void clear(
      volatile unsigned * device,
      unsigned mask
   ) __attribute__((optimize ("O2") ))
   { *device &= ~mask; }
};
