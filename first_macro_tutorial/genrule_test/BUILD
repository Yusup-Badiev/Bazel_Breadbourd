genrule(
    name = "logo_miniature",
    srcs = ["logo.png"],
    outs = ["small_logo.png"],
    cmd = "cp $< $@",
)

cc_binary(
    name = "my_app",
    srcs = ["my_app.cc"],
    data = [":logo_miniature"],
)