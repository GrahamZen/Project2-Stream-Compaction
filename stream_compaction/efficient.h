#pragma once

#include "common.h"

namespace StreamCompaction {
    namespace Efficient {
        StreamCompaction::Common::PerformanceTimer& timer();

        void scanInplace(int n, int* dev_data);

        void scan(int n, int *odata, const int *idata);

        void scanShared(int n, int *odata, const int *idata);

        int compact(int n, int *odata, const int *idata);
    }
}
