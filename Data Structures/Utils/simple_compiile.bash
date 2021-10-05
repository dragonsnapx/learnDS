
if [ $@ == '' ]; then
    echo "Cannot find file!";
else
    $(brew --prefix llvm)/bin/clang -fsanitize=address -std=c99 -pedantic -Wall -Wextra $@.c -g -o _$@.o
fi