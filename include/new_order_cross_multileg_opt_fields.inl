#if !defined(FIELD) || !defined(CONTRA_FIELD)
#	error You need to define FIELD and CONTRA_FIELD macro
#else

CONTRA_FIELD(algoritmic_indicator, 1, 64)
CONTRA_FIELD(leg_position_effects, 3, 16)
FIELD(symbol, 1, 1)
#undef FIELD
#undef CONTRA_FIELD

#endif