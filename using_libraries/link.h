/*qi:begin

sources := $(link_depends $source)

link($base_name): compile($(remove ($sources) $archive($sources)))
    $CPP -L. -o $base_name $object($(remove ($sources) $archive($sources))) $(reverse $lib($(link_depends $source)))

test: link
    ./$base_name

clean:
    rm -rf $base_name
 
qi:end*/

