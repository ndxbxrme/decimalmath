REM Build it, make sure you have emscripten installed and working first

em++ src\decimal-web.cpp --pre-js src\jspre.js.partial --post-js src\jspost.js.partial -o build\decimalmath-web.js --bind -O2 --memory-init-file 0


REM Comment out global Module declaration, currently not working because sed locks the file
REM Do it by hand by commenting out line 142 of build/decimalmath-web.js

REM sed -i 's/window/\/\/window/g' build\decimalmath-web.js
REM Module.printErr("pre-main prep time: "+(Date.now()-preloadStartTime)+" ms")

REM Minimize it
uglifyjs decimalmath-web.js -c -o decimalmath-web.min.js
