/**ARGS: --constant eval,del -DFOO1 -UFOO2 */
/**SYSCODE: = 1 | 16 */
/* Left(true,elim) || Right(false,elim) := Elim */
#if defined(FOO1) || 0
KEEP ME
#else
DELETE ME
#endif
