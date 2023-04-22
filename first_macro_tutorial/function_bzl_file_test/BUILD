load("//function_bzl_file_test:miniature.bzl", "miniature")

miniature(
    name = "logo_miniature",
    src = "logo.png",
)

cc_binary(
    name = "my_app",
    srcs = ["my_app.cc"],
    data = [":logo_miniature"],
)