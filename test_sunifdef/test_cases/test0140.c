/**ARGS: --constant eval -DFOO1 -UFOO2 */
/**SYSCODE: = 1 | 32 */
/* Left(false,elim) || Right(false,keep) := Right */
#if defined(FOO2) || 0
KEEP ME
#else
KEEP ME
#endif
