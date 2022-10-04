#!/bin/bash
#This script looks in the git_diff.patch for the word passed as the first argument and changes it to the second argument.
sed -i "s/$1/$2/g" git_diff.patch
