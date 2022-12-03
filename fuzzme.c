#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fuzzme(char *buf)
{
  if(strlen(buf) >= 3)
    if(buf[0] == 'm')
      if(buf[1] == 'a')
        if(buf[2] == 'y')
          if(buf[3] == 'h')
            if(buf[4] == 'e')
              if(buf[5] == 'm')
                if(buf[6] == '!')
                  if(buf[8] == '%') {
                    printf("You've got it!");
                    abort();
                  }
    return 0;
}


int LLVMFuzzerTestOneInput(char *data, size_t size)
{
    fuzzme(data);

    return 0;
}

