#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{75, 87, 16, 15, 5};
    assert(score_signal(signal_case_1) == 104);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{65, 106, 26, 12, 12};
    assert(score_signal(signal_case_2) == 122);
    assert(classify_signal(signal_case_2) == "review");
    Signal signal_case_3{88, 74, 16, 10, 5};
    assert(score_signal(signal_case_3) == 152);
    assert(classify_signal(signal_case_3) == "review");
}
