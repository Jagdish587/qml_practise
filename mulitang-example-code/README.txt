steps to generate mulitang
==========================

lupdate -(will generate untransaled .ts files) 
linguist (translated .ts files ) 
lrelease (will generate qm files)

(1) Add your ts file name in .pro file , let's say HelloWorld_HIN.ts
(2) Go to IDE->Tools->External->lupdate , it will generate .ts file with translation unfinished
(3) From ./linguist , it will open window , input the .ts file , lets say HelloWorld_HIN.ts
(4) Add each translation and save it , it will translation entry in .ts file 
(5) Now ./lrelease <path of pro file > , will generate .qm files 
(6) Add each file in qml.qrc file 

