#include <print.h>

#include <log/log.h>
#include <use_log.h>

#include <stdio.h>

#include <compile.h>

void print(const char *msg)
{
    log(msg);    
    printf("%s", msg);
}
