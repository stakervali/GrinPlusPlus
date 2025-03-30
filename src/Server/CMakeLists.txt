set(TARGET_NAME GrinNode)

file(GLOB SOURCE_CODE
	"Main.cpp"
	"JSONFactory.cpp"
	"ShutdownManager.cpp"
	"Node/Node.cpp"
	"Node/NodeRestServer.cpp"
	"Node/API/BlockAPI.cpp"
	"Node/API/ChainAPI.cpp"
	"Node/API/HeaderAPI.cpp"
	"Node/API/PeersAPI.cpp"
	"Node/API/ServerAPI.cpp"
	"Node/API/TxHashSetAPI.cpp"
	"Wallet/WalletDaemon.cpp"
	"Polyfill/fdopen_polyfill.c"
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# Fix for civetweb linking issues
add_definitions(-D_CRT_SECURE_NO_WARNINGS)

add_executable(${TARGET_NAME} ${SOURCE_CODE})
target_compile_definitions(${TARGET_NAME} PRIVATE ssize_t=SSIZE_T)
target_link_libraries(${TARGET_NAME} Common P2P BlockChain Wallet PoW API civetweb::civetweb civetweb::civetweb-cpp)

# Add explicit CRT libraries for Windows (fix for _imp__fdopen and similar symbols)
if(MSVC)
    target_link_libraries(${TARGET_NAME} ucrt.lib vcruntime.lib msvcrt.lib legacy_stdio_definitions.lib)
endif()