************
Installation
************

We are going to illustrate the installation of the package in an Unix or Unix-like platforms (including Linux distributions). 

1. **Download the lastest version of the library** from `VBF source code URL <https://github.com/jacubero/VBF/tree/master/src>`_ and place it in the working directory. You should see the example program, input files and the "*.h" files. 

2. **Obtain NTL library source code**. To obtain the source code and documentation for NTL, download ntl-xxx.tar.gz from `Download NTL library <http://www.shoup.net/ntl/download.html>`_, placing it in a different directory.

3. **Run the configuration script**. Working in the directory where you placed the NTL library, do the following (here, "xxx" denotes the desired version number of NTL; any version of NTL can be employed):

.. code-block:: console

   $ cd ntl-xxx/src
   $ ./configure

The execution of *configure* generates the file "makefile" and the file "../include/NTL/config.h", based upon the values assigned to the variables on the command line. In the example above no arguments were employed. The most important variables are: "CC" for choosing the C compiler,
"CXX" for choosing the C++ compiler, "PREFIX" for choosing the directory in which to install NTL library components.

4. **Build NTL:**

.. code-block:: console

   $ make
   $ make check
   $ make install

The *make* execution in the directory *src/* compiles all the source files and creates a library *ntl.a* in the same directory. Some testing programs are run by means of the command *make check*. Lastly, *make install* performs among other actions the copy of the library file *ntl.a* into */usr/local/lib/libntl.a* by default. It is not necessary to execute *make check* in each NTL building as it takes a long time. In order to execute *make install*, it is necessary to have privileged user permissions as some directories creation, file deletion, changes of file attributes, and copies of files are done.

Do not forget to use an account with appropriate permissions: *root* for instance.
