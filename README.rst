***********
VBF library
***********

Description
===========

The Vector Boolean Function Library (VBF) is a collection of C++ classes designed for analyzing Vector Boolean Functions (functions that map a Boolean vector to another Boolean vector) from a cryptographic perspective. This implementation uses the NTL library from Victor Shoup, modifying some of the general purpose modules of this library (to make it better suited to cryptography), and adding new modules that complement the existing ones. The class representing a Vector Boolean Function can be initialized by several data structures such as Truth Table, Trace representation, Algebraic Normal Form (ANF) among others. The most relevant cryptographic criteria for both block and stream ciphers can be evaluated with VBF. It allows to obtain some interesting cryptologic characterizing features such as linear structures, frequency distribution of the absolute values of the Walsh Spectrum or Autocorrelation Spectrum, among others. In addition, operations such as equality checking, composition, inversion, sum, direct sum, concatenation, bricklayering (parallel application of Vector Boolean Functions as employed in Rijndael cipher), and adding coordinate functions of two Vector Boolean Functions can be executed.

The full documentation is published at the following link:
[http://vbf.rtfd.io/](http://vbf.rtfd.io/)


Installation
============

Environment
-----------

Required

* NTL Library (http://www.shoup.net/ntl/download.html)

Downloading
-----------

	https://github.com/jacubero/VBF/tree/master/src 

Installing
----------

After downloading, **Obtain NTL library source code**. To obtain the source code and documentation for NTL, download ntl-xxx.tar.gz from `Download VBF library <http://www.shoup.net/ntl/download.html>`, placing it in a different directory

**Run the configuration script**. Working in the directory where you placed the NTL library, do the following (here, "xxx" denotes the desired version number of NTL; any version of NTL can be employed):

    cd ntl-xxx/src
    ./configure

The execution of *configure* generates the file "makefile" and the file "../include/NTL/config.h", based upon the values assigned to the variables on the command line. In the example above no arguments were employed. The most important variables are: "CC" for choosing the C compiler,
"CXX" for choosing the C++ compiler, "PREFIX" for choosing the directory in which to install NTL library components.

**Build NTL:**

    make
    make check
    make install

The *make* execution in the directory *src/* compiles all the source files and creates a library *ntl.a* in the same directory. Some testing programs are run by means of the command *make check*. Lastly, *make install* performs among other actions the copy of the library file *ntl.a* into */usr/local/lib/libntl.a* by default. It is not necessary to execute *make check* in each NTL building as it takes a long time. In order to execute *make install*, it is necessary to have privileged user permissions as some directories creation, file deletion, changes of file attributes, and copies of files are done.

Do not forget to use an account with appropriate permissions: *root* for instance.

Usage
-----

A tutorial and overview of the VBF library can be found at
[http://vbflibrary.tk/](http://vbflibrary.tk/)

License
-------

Copyright Jose Antonio Alvarez Cubero.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.