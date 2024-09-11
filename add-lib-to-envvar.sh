#!/usr/bin/bash
if [ ! -d "$HOME/andromeda-master" ]; then
  echo "Error: 'andromeda-master' directory not found in $HOME."
  echo "Please make sure the directory exists before running this script."
  exit 1
fi
FLTK_DIR="$HOME/andromeda-master/fltk-precompiled"
if [ -d "$FLTK_DIR" ]; then
  export PATH="$FLTK_DIR:$PATH"
  echo "FLTK-precompiled has been added to your PATH."
else
  echo "Error: 'fltk-precompiled' directory not found in andromeda-master."
  echo "Please make sure it exists."
  exit 1
fi
echo "Setup completed successfully!"
