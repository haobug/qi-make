/*qi:begin
CPP = g++
base_name = $(match ([^.]+) $source)
compile($base_name.o): $source
    $CPP -I. -c -o $base_name.o $source
clean:
    rm -rf $base_name.o
qi:end*/

