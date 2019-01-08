
#ifndef endlesstunnel_sfxman_hpp
#define endlesstunnel_sfxman_hpp

#include <SLES/OpenSLES.h>
#include <SLES/OpenSLES_Android.h>

#include "engine.hpp"


class SfxMan {
    private:
        bool mInitOk;
        SLAndroidSimpleBufferQueueItf mPlayerBufferQueue;

    public:
        SfxMan();

        // Returns the (singleton) instance of SfxMan
        static SfxMan* GetInstance();


        void PlayTone(const char *tone);

        // Returns whether or not the sound effect pipeline is idle (able to play
        // a tone right now).
        bool IsIdle();
};

#endif

