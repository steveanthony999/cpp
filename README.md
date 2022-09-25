# C++ Playground and Resources

## Setting up Visual Studio Code for C++ development on Mac

1: Install Command Line Tools
--a: From a terminal window, type 'xcode-select --install' then press enter
--b: In the same terminal, type 'g++' and if prompted to, click install from the gui that pops up
--c: Keep these updated by going to the App Store, clicking 'Updates' in the left pane, and update accordingly

2: Download Visual Studio Code from https://code.visualstudio.com/

3: Install the following extensions...
--a: https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools
--b: https://marketplace.visualstudio.com/items?itemName=vadimcn.vscode-lldb

4: Configure by doing the following...
--a: In VSCode, hit 'Shift Command P', or in the top menu, click 'view' then 'command palette...'
--b: Type 'C++' and scroll down to 'C/C++: Edit Configurations (UI)'
--c: Scroll down to 'Compiler Path' and select '/usr/bin/g++' from the dropdown
--d: Scroll down to 'C++ standard' and select 'C++ 17' from the dropdown
--e: Save with 'Command S'

5: Set up build task that will build and execute program
--a: After creating a cpp file (main.cpp or whatever.cpp), make sure that file is selected
--b: From the top menu, select 'Terminal' then 'Configure Default Build Task...'
--c: Select 'C/C++: g++ build active file' which builds a 'tasks.json' in the directory '.vscode' file and holds the configuration information
--d: In the 'tasks.json' file, in the "args" array, below "-g", type "-Wall", (be sure to end with a comma)
--e: Below "-Wall", type "-std=c++17",
--f: Below "-std=c++17" change "${file}" to "${fileDirname}/\*.cpp"
--g: Save with 'Command S'

6: To build and run
--a: Be sure the file you want to build is selected
--b: From the top menu, select 'Terminal' then 'Run Build Task...' or type 'Shift Command B'
