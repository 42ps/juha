#!/bin/bash

set -e

gcc -Wall -Werror -Wextra -g3 $1
./a.out < test_case
