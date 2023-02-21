# alx-low_level_programming
## ANSI C, and Betty-compliant the defirrence between them?
ANSI C is a standard for the C programming language that was established by the American National Standards Institute (ANSI) in 1989. ANSI C defines a set of rules for the syntax and semantics of the C language, as well as specifying the standard library functions and their behavior.

Betty is a coding style guide for the C programming language that was created by Holberton School. Betty is designed to promote code readability and consistency, and it includes rules for naming conventions, indentation, spacing, and other aspects of coding style.

While ANSI C defines the rules for the C language itself, Betty is a set of guidelines for writing C code in a consistent and readable way. Therefore, it is possible to write ANSI C code that is not Betty-compliant, or to write Betty-compliant code that does not conform to the ANSI C standard.

In short, ANSI C is a standard for the C language itself, while Betty is a set of guidelines for writing C code in a particular style.

## What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89?
-Wall, -Werror, -pedantic, -Wextra, and -std=gnu89 are all flags that can be passed to the GCC (GNU Compiler Collection) compiler to modify its behavior. Here's what each of these flags does:

-Wall: Enables a set of warnings that the compiler would not show by default. This includes warnings about unused variables, missing return statements, and type mismatches, among others.

-Werror: Treats all warnings as errors, so that any warning produced by the compiler will cause the compilation to fail.

-pedantic: Enforces strict adherence to the C standard, which can help prevent non-portable code.

-Wextra: Enables additional warnings beyond those enabled by -Wall. This includes warnings about uninitialized variables, implicit conversions, and more.

-std=gnu89: Specifies that the source code should be compiled using the C language standard from 1989, with GNU extensions. This standard is commonly used in Linux and other Unix-like systems, and supports features such as variable-length arrays, designated initializers, and inline functions.

Overall, these flags are intended to help developers write more portable, standards-compliant code, and to catch potential issues before they cause problems. However, it's important to note that enabling all of these flags may produce a large number of warnings and errors, and may require changes to existing code to resolve.	
