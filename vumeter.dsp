declare name        "vumeter";
declare version     "1.0";
declare author      "Grame";
declare license     "BSD";
declare copyright   "(c)GRAME 2006";
//-------------------------------------------------
// Simple vumeter
//-------------------------------------------------
import("stdfaust.lib");
vmeter(i,x)       = attach(x, envelop(x) : vbargraph("vmeter%2i[2][unit:dB]", -70, +5));
hmeter(i,x)       = attach(x, envelop(x) : hbargraph("hmeter%2i[2][unit:dB]", -70, +5));
envelop         = abs : max ~ -(1.0/ma.SR) : max(ba.db2linear(-70)) : ba.linear2db;
process         = par(i, 64,hmeter(i));