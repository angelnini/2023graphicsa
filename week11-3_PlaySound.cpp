 #include <windows.h>

 int main()
 {
                        ///�n���ݦP�B SND_ASYNC,���M�|��������
    PlaySound("do_re_mi\\do.wav",NULL, SND_ASYNC);///�۹���|
    PlaySound("do_re_mi\\re.wav",NULL, SND_ASYNC);
    PlaySound("do_re_mi\\mi.wav",NULL, SND_ASYNC);
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\mi.wav",NULL, SND_ASYNC);������|
 }
