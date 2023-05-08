genrule(
    name = "city_count",
    cmd = "wc -l < $< > $@",
    outs = ["city_number"],
    srcs = ["@world_cities//file"],
)

genrule(
    name = "emoji_count",
    cmd = "wc -l < $< > $@",
    outs = ["emoji_number"],
    srcs = ["@com_foo_bar_emojis//file"],
)