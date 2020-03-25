// hush.c but in c++

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>

namespace hush
{
    class shell
    {
        private:
            const int MAXCOM;
            const int MAXLIST;
        public:
            shell();
            void clear(); // clear screen
            void init();  // initialises shell
            int takeInput(); // take input from user
            void printDir(); // print current directory
            void execArgs(char** parsed)

    } ;
}

hush::shell::shell() : MAXCOM(1000), MAXLIST(100)
{

}

int main()
{
    return 0;
}