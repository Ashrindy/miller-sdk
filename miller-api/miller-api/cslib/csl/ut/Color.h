#pragma once
#include <ucsl/colors.h>

namespace csl::ut {
    UCSL_NEWTYPE_STRUCT_SIMPLE(Color8, ucsl::colors::Color8ABGR);
    UCSL_NEWTYPE_STRUCT_SIMPLE(Colorf, ucsl::colors::ColorfABGR);
}
