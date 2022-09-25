# C++ Playground and Resources

## Setting up Visual Studio Code for C++ development on Mac

1: Install Command Line Tools<br>
--a: From a terminal window, type 'xcode-select --install' then press enter<br>
--b: In the same terminal, type 'g++' and if prompted to, click install from the gui that pops up<br>
--c: Keep these updated by going to the App Store, clicking 'Updates' in the left pane, and update accordingly<br>

2: Download Visual Studio Code from https://code.visualstudio.com/<br>

3: Install the following extensions...<br>
--a: https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools<br>
--b: https://marketplace.visualstudio.com/items?itemName=vadimcn.vscode-lldb<br>

4: Configure by doing the following...<br>
--a: In VSCode, hit 'Shift Command P', or in the top menu, click 'view' then 'command palette...'<br>
--b: Type 'C++' and scroll down to 'C/C++: Edit Configurations (UI)'<br>
--c: Scroll down to 'Compiler Path' and select '/usr/bin/g++' from the dropdown<br>
--d: Scroll down to 'C++ standard' and select 'C++ 17' from the dropdown<br>
--e: Save with 'Command S'<br>

5: Set up build task that will build and execute program<br>
--a: After creating a cpp file (main.cpp or whatever.cpp), make sure that file is selected<br>
--b: From the top menu, select 'Terminal' then 'Configure Default Build Task...'<br>
--c: Select 'C/C++: g++ build active file' which builds a 'tasks.json' in the directory '.vscode' file and holds the configuration information<br>
--d: In the 'tasks.json' file, in the "args" array, below "-g", type "-Wall", (be sure to end with a comma)<br>
--e: Below "-Wall", type "-std=c++17",<br>
--f: Below "-std=c++17" change "${file}" to "${fileDirname}/\*.cpp"<br>
--g: Save with 'Command S'<br>

6: To build and run<br>
--a: Be sure the file you want to build is selected<br>
--b: From the top menu, select 'Terminal' then 'Run Build Task...' or type 'Shift Command B'<br>
--c: This creates a file with the same name as your cpp file. Right click that file and select 'Open in Integrated Terminal'<br>
--d: In the terminal, type './' then whatever the name of the file is (example: ./main)<br>
