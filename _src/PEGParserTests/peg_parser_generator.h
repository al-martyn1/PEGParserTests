#pragma once

#if defined(HAS_UMBA)

    #include "umba/warnings/push.h"
    
        #include "umba/warnings/disable_C4244.h"
        #include "umba/warnings/disable_C4267.h"
        #include "umba/warnings/disable_C4365.h"
        #include "umba/warnings/disable_C4868.h"
        #include "umba/warnings/disable_C5219.h"
    
        #include <peg_parser/generator.h>
    
    #include "umba/warnings/pop.h"

#else

    // No UMBA

    #include "umba/warnings/pop.h"

#endif