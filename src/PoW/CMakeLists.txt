set(TARGET_NAME PoW)

file(GLOB SOURCE_CODE
    "*.cpp"
)

add_library(${TARGET_NAME} STATIC ${SOURCE_CODE})
target_compile_definitions(${TARGET_NAME} PRIVATE MW_POW)
target_link_libraries(${TARGET_NAME} Common Core Crypto uint128)

if(MSVC)
    target_compile_options(${TARGET_NAME} PRIVATE /wd4828)
endif()