file(READ "/home/summer/research/NuSMV-2.6.0/MiniSat/MiniSat_v37dc6c6_nusmv.patch" _minisat_patch)
file(WRITE "/home/summer/research/NuSMV-2.6.0/NuSMV/build/build-MiniSat/MiniSat_v37dc6c6_nusmv.patch" "${_minisat_patch}")
if(EXISTS "/home/summer/research/NuSMV-2.6.0/NuSMV/build/build-MiniSat/minisat-37dc6c67e2af26379d88ce349eb9c4c6160e8543")
    file(REMOVE_RECURSE "/home/summer/research/NuSMV-2.6.0/NuSMV/build/build-MiniSat/minisat-37dc6c67e2af26379d88ce349eb9c4c6160e8543")
endif()
if(EXISTS "/home/summer/research/NuSMV-2.6.0/NuSMV/build/build-MiniSat/patched_37dc6c6")
    file(REMOVE "/home/summer/research/NuSMV-2.6.0/NuSMV/build/build-MiniSat/patched_37dc6c6")
endif()
