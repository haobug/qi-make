/*qi:begin

lib = $(match use_([^.]+) $source)

compile(lib$lib.a): compile($(list $lib))
    ar rc lib$lib.a $compile($(list $lib))

lib(-l$lib):

archive($(list $lib)):

clean:
    rm -rf lib$(lib).a

qi:end*/

    

