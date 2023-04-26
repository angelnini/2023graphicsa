 #include <windows.h>

 int main()
 {
                        ///要等待同步 SND_ASYNC,不然會瞬間結束
    PlaySound("do_re_mi\\do.wav",NULL, SND_ASYNC);///相對路徑
    PlaySound("do_re_mi\\re.wav",NULL, SND_ASYNC);
    PlaySound("do_re_mi\\mi.wav",NULL, SND_ASYNC);
    ///PlaySound("C:\\Users\\Administrator\\Desktop\\do_re_mi\\mi.wav",NULL, SND_ASYNC);絕對路徑
 }
