#undef ARCH_SIXTYFOUR
#define SIZEOF_INT 4
#define SIZEOF_LONG 4
#define SIZEOF_PTR 4
#define SIZEOF_SHORT 2
#undef ARCH_BIG_ENDIAN
#define ARCH_ALIGN_DOUBLE
#define ARCH_ALIGN_INT64
#undef NONSTANDARD_DIV_MOD
#define ASM_CFI_SUPPORTED
/* New to OCaml 4.02 */
#define SIZEOF_LONGLONG 8
/* No longer used in OCaml 4.02 */
#define ARCH_INT64_TYPE long long
#define ARCH_UINT64_TYPE unsigned long long
#define ARCH_INT64_PRINTF_FORMAT "ll"
