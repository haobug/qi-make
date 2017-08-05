/*qi:begin

CPP = g++
CPPFLAGS += -I.
base_name = $(match ([^.]+) $source)

compile($base_name.o): $source
    $CPP $CPPFLAGS -c -o $base_name.o $source

object($base_name.o):

clean:
    rm -rf $base_name.o
 
qi:end*/

