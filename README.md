# CMake Install Tutorial - P

This is one of three repositories which "teach"es how to setup cmake to install the targets and its dependencies. The three parts are:

1. [cmake-install-tutorial-Q](https://github.com/lucasguesserts/cmake-install-tutorial-Q);
2. [cmake-install-tutorial-P](https://github.com/lucasguesserts/cmake-install-tutorial-P);
3. [cmake-install-tutorial-R](https://github.com/lucasguesserts/cmake-install-tutorial-R) (this one);

The dependency tree is: `Q -> P -> R`, where `X -> Y` means that `Y` depends on `X`.

## Dependencies of this project

This project depends on [cmake-install-tutorial-Q](https://github.com/lucasguesserts/cmake-install-tutorial-Q). Before using it, make sure that `Q` is installed in your system. If it is not, go to its page and follow the instructions to install it.

It also depends on [cmake-install-tutorial-P](https://github.com/lucasguesserts/cmake-install-tutorial-P). This one can be installed locally, but it can also be installed with CPM.

### Building

Once the dependency `Q` is installed locally, build this project by running:

```sh
make
```

It will compile one executable, `R`, which you can then run by executing:

```sh
$ ./build/R
ClassQ constructor
ClassP constructor!
print from ClassQ
a number: 10
ClassR
```

Its output simply shows that the dependencies are working as expected.
