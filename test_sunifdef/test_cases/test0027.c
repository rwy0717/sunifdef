/**ARGS: -DFOO1 -UFOO2 */
/**SYSCODE: = 1 | 16 | 32 */
#ifdef UNKNOWN
KEEP ME
#elif defined FOO1
KEEP ME
#else
DELETE ME
#endif

