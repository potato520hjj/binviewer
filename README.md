# binviewer
《二进制查看器》
版本：0.0
作者：potato520hjj
语言：C/C99标准以上
功能： 1.将文本文件中内容对应的原始值以某一进制显示出来
       2.待加入
用法： 1.编译： gcc -stc=c99 BinMain.c -o BinMain
       2.使用：$ ./BinMain test.txt
            或 $ ./BinMain test.txt > t.txt
            (test.txt 为目标文件名; t.txt 为转换后的文件)
效果：
[root@~/test]# ./a.out test.txt
45 6E 67 6C 69 73 68 20  |  English
74 65 73 74 20 3A 20 68  |  test : h
65 6C 6C 6F 0A 43 68 69  |  ello Chi
6E 65 73 65 20 74 65 73  |  nese tes
74 20 3A 20 E4 BD A0 E5  |  t :
A5 BD 0A 41 53 43 49 49  |     ASCII
20 74 65 73 74 20 3A 0A  |   test :
71 77 65 72 74 79 75 69  |  qwertyui
6F 70 61 73 64 66 67 68  |  opasdfgh
6A 6B 6C 7A 78 63 76 62  |  jklzxcvb
6E 6D 5B 5D 3B 27 2C 2E  |  nm[];',.
2F 7B 7D 3A 22 3C 3E 3F  |  /{}:"<>?
0A 31 32 33 34 35 36 37  |   1234567
38 39 30 2D 3D 0A 21 40  |  890-= !@
23 24 25 5E 26 2A 28 29  |   #$%^&*()
5F 2B 0A 7E 60 0A 0A     |  _+ ~`
