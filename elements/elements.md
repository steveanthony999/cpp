# C++ Elements (syntax)

### Keywords

A list of reserved keywords in C++. Since they are used by the language, keywords are not available for re-definition or overloading.

Some examples include: <ul><li>int</li> <li>double</li> <li>float</li> <li>char</li> <li>return</li> <li>if</li> <li>else</li></ul> The link below has a full list of reserved keywords.

https://en.cppreference.com/w/cpp/keyword

### Identifiers

In addition to keywords, there are identifiers with special meaning, which may be used as names of objects or functions, but have special meaning in certain contexts.

Examples include: <ul><li>std</li> <li>cin</li> <li>cout</li> <li>endl</li></ul>

Identifiers were created by other programmers to create something meaningful.

The same link above shows some identifiers.

### Operators

Lke most programming languages, C++ includes the basic operators such as <ul><li>+</li> <li>-</li> <li>\*</li> <li>/</li></ul> C++ also has it's own operators, such as <ul><li><<</li> <li>::</li> <li>>></li></ul>

### Preprocessor Directives

What is a preprocessor?

The C++ Preprocessor is a program that processes your source code before the compiler sees it. It first strips the comments from the source file and replaces each comment with a single space. Then it looks for preprocessor directives and executes them.

Preprocessor directives are lines in the source code that begin with #.

Some preprocessor directives are:

<ul>
<li>#include</li>
<li>#if</li>
<li>#elif</li>
<li>#else</li>
<li>#endif</li>
<li>#ifdef</li>
<li>#ifndef</li>
<li>#define</li>
<li>#undef</li>
<li>#line</li>
<li>#error</li>
<li>#pragma</li>
</ul>

### Arrays

What is an array?

An array is a compound data type, or a structured data type, a data type that's made up of other data types.

An array of ints, strings, etc.

All elements of an array must be of the same type.

<img width="1913" alt="Screen Shot 2022-09-24 at 8 53 43 PM" src="https://user-images.githubusercontent.com/55010070/192127590-89eb02df-055b-4ad6-a8c6-38e89b7b64f6.png">

How to declare an array...

Element_Type array_name [constant number of elements];

examples:

<ul>
<li>int test_scores[5];</li>
<li>const int days_in_year {365};</li>
<li>double high_temps [days_in_year];</li>
</ul>

The above examples have not been initialized. The contents could be anything.

Best practice is to initial arrays when you declare them.

examples:

<ul>
<li>int test_scores[5] {100, 98, 99, 86, 92};</li>
<li>int high_score_per_level[10] {3, 5}; initialize to 3, 5, and the rest 0</li>
<li>const int days_in_year {365};</li>
<li>double high_temps [days_in_year] {0}; initialize all to 0</li>
<li>int rand_array[] {1, 2, 3, 4, 5}; Size automatically calculated</li>
</ul>

![IMG_4550](https://user-images.githubusercontent.com/55010070/192128180-86e994dc-4224-4d77-b476-6a8180565ee3.jpg)
