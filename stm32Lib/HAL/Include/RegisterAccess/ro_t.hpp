#pragma once

/**
 * A read-only mutability policy for use with reg_t.
 */
struct ro_t
{
   static unsigned read(
      volatile unsigned * device,
      unsigned offset,
      unsigned mask
   ) __attribute__((optimize ("O2") ))
   { return (*device & mask) >> offset; }
};
