#include "jha-gate.h"


bool register_jha_algo( algo_gate_t* gate )
{
//#if defined (JHA_4WAY)
//  gate->optimizations = SSE2_OPT | AES_OPT | AVX2_OPT;
//  gate->scanhash         = (void*)&scanhash_jha_4way;
//  gate->hash             = (void*)&jha_hash_4way;
//#else
  gate->optimizations = SSE2_OPT | AES_OPT;
  gate->scanhash         = (void*)&scanhash_jha;
  gate->hash             = (void*)&jha_hash;
//#endif
  gate->set_target       = (void*)&scrypt_set_target;
  return true;
};

