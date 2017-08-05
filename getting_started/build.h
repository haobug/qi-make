/*qi:begin
CPP = g++
base_name = $(match ([^.]+) $source)
compile($base_name.o): $source
    $CPP -I. -c -o $base_name.o $source
link($base_name): compile
    $CPP -o $base_name $base_name.o
test: link
    ./$base_name
clean:
    rm -rf $base_name.o $base_name
qi:end*/

