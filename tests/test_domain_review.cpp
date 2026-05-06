#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{77, 29, 28, 48};
    assert(domain_review_score(item) == 147);
    assert(domain_review_lane(item) == "ship");
}
