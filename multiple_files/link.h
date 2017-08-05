/*qi:begin
link($base_name): compile($(link_depends $source)) 
    $CPP -o $base_name $compile($(link_depends $source)) 
test: link
    ./$base_name
clean:
    rm -rf $base_name
qi:end*/

