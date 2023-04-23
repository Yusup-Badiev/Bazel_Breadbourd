def _foo_binary_impl(ctx):
    pass

foo_binary = rule(
    implimentation = _foo_binary_impl,
)