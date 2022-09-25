# C++ Playground and Resources

## Setting up Visual Studio Code for C++ development on Mac

1: Install Command Line Tools\n
--a: From a terminal window, type 'xcode-select --install' then press enter\n
--b: In the same terminal, type 'g++' and if prompted to, click install from the gui that pops up\n
--c: Keep these updated by going to the App Store, clicking 'Updates' in the left pane, and update accordingly\n

2: Download Visual Studio Code from https://code.visualstudio.com/\n

3: Install the following extensions...\n
--a: https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools\n
--b: https://marketplace.visualstudio.com/items?itemName=vadimcn.vscode-lldb\n

4: Configure by doing the following...\n
--a: In VSCode, hit 'Shift Command P', or in the top menu, click 'view' then 'command palette...'\n
--b: Type 'C++' and scroll down to 'C/C++: Edit Configurations (UI)'\n
--c: Scroll down to 'Compiler Path' and select '/usr/bin/g++' from the dropdown\n
--d: Scroll down to 'C++ standard' and select 'C++ 17' from the dropdown\n
--e: Save with 'Command S'\n

5: Set up build task that will build and execute program\n
--a: After creating a cpp file (main.cpp or whatever.cpp), make sure that file is selected\n
--b: From the top menu, select 'Terminal' then 'Configure Default Build Task...'\n
--c: Select 'C/C++: g++ build active file' which builds a 'tasks.json' in the directory '.vscode' file and holds the configuration information\n
--d: In the 'tasks.json' file, in the "args" array, below "-g", type "-Wall", (be sure to end with a comma)\n
--e: Below "-Wall", type "-std=c++17",\n
--f: Below "-std=c++17" change "${file}" to "${fileDirname}/\*.cpp"\n
--g: Save with 'Command S'\n

6: To build and run\n
--a: Be sure the file you want to build is selected\n
--b: From the top menu, select 'Terminal' then 'Run Build Task...' or type 'Shift Command B'\n
--c: This creates a file with the same name as your cpp file. Right click that file and select 'Open in Integrated Terminal'\n
--d: In the terminal, type './' then whatever the name of the file is (example: ./main)\n
