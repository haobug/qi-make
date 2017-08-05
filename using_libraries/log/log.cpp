#include <log/log.h>

#include <format/format.h>

#include <compile.h>

void log(const char *msg)
{
    format(msg);
}
