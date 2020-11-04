/*
**  Options for OSOM grid 
*/
/* OPTIONS associated with momentum equations:*/
#define UV_ADV
#define UV_COR
#define UV_SADVECTION
#define UV_LOGDRAG
#define UV_VIS2
#define NESTING
#define TWO_WAY
/* OPTIONS associated with tracers equations:*/  
#define SALINITY
#define NONLIN_EOS
#define TS_MPDATA
#define TS_DIF2
#undef T_PASSIVE
#define AVERAGES
/* Pressure gradient algorithm OPTIONS:*/ 
#define DJ_GRADPS
/* OPTIONS for surface fluxes formulation using atmospheric boundary layer:*/
#define BULK_FLUXES
#define LONGWAVE_OUT
#define EMINUSP
/* Model configuration OPTIONS:*/ 
#define SOLVE3D
#define CURVGRID
#define MASKING
#define STATIONS
/* OPTIONS for Lagrangian drifters:*/
#undef FLOATS
/* OPTIONS for analytical fields configuration:*/
#define ANA_BSFLUX
#define ANA_BTFLUX
#define ANA_BPFLUX
#define ANA_SPFLUX
/* options for zeroing out surface fluxes:*/
#undef ANA_SMFLUX
#undef ANA_STFLUX
#undef ANA_SSFLUX
/* OPTIONS for horizontal mixing of momentum:*/ 
#define VISC_GRID
#define MIX_S_UV
/* OPTIONS for horizontal mixing of tracers:*/ 
#define DIFF_GRID
#define MIX_S_TS
#undef MIX_GEO_TS
/* OPTIONS for vertical turbulent mixing scheme of momentum and tracers:*/
#define GLS_MIXING
/* OPTIONS for tidal forcing at open boundaries:*/
#define SSH_TIDES
#define UV_TIDES
#undef RAMP_TIDES
/* will need following for runs with OBC from FVCOM:*/
#define ADD_FSOBC
#define ADD_M2OBC
/* radiation bc option:*/
#define RADIATION_2D
/* NetCDF input/output OPTIONS:*/ 
#define PERFECT_RESTART
#undef INLINE_2DIO
#define NO_WRITE_GRID
#undef WRITE_WATER
#undef HDF5

#undef ATM_PRESS
