#pragma cling add_include_path("/home/hp/workfolder/libtorch/include/torch/csrc/api/include")
#pragma cling add_include_path("/home/hp/workfolder/libtorch/include/")
#pragma cling add_library_path("/home/hp/workfolder/libtorch/lib")
#pragma cling load("libtorch")


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Winconsistent-missing-override"