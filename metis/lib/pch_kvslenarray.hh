#ifndef PC_KVSLENARRAY_HH_
#define PC_KVSLENARRAY_HH_ 1

#include "pchandler.hh"
#include <assert.h>

struct pch_kvslenarray : public pc_handler_t {
    void pch_set_util(key_cmp_t keycmp) {
        assert(0);
    }
    void pch_init(void *coll);
    int pch_insert_kv(void *coll, void *key, void *val, size_t keylen,
			  unsigned hash) {
        assert(0);
    }
    /* keep sorted */
    void pch_insert_kvs(void *coll, const keyvals_t * kvs) {
        assert(0);
    } 
    static void pch_append_kvs(void *coll, const keyvals_t * kvs);
    void pch_insert_kvslen(void *coll, void *key, void **vals,
			       uint64_t len);
    /* get results */
    uint64_t pch_copy_kvs(void *coll, keyvals_t * dst) {
        assert(0);
    }
    uint64_t pch_copy_kv(void *coll, keyval_t * dst) {
        assert(0);
    }
    /* free the collection, but not the values of the pairs */
    void pch_shallow_free(void *coll);
    /* properties of the pair handler which handles pairs arrays */
    uint64_t pch_get_len(void *coll);
    size_t pch_get_pair_size(void);
    size_t pch_get_parr_size(void);
    void *pch_get_arr_elems(void *coll);
    void *pch_get_key(const void *pair);
    /* set elements */
    void pch_set_elems(void *coll, void *elems, int len);
};

#endif
