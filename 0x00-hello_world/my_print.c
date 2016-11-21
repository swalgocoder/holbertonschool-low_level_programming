#include <unistd.h>
#include <stdarg.h>

void main()
{
const char msg[] = "Hello World!";
write(STDOUT_FILENO, msg, sizeof(msg)-1);
}
