#!/bin/bash

# Create a static library from the object files
ar rc liball.a *.o

# Index the library for faster linking
ranlib liball.a

