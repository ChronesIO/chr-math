file(GLOB_RECURSE chr-math-impl CONFIGURE_DEPENDS "*.cxx")
target_sources(chr-math PUBLIC ${chr-math-impl})