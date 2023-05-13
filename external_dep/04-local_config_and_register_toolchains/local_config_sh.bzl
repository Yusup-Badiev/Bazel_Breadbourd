def _is_windows(repostitory_ctx):
    return toolchain_type.os.nane.startswith("windows")

my_sh_config_extension = module_extension(
    implimentation = lambda ctx: my_sh_config(name = "my_local_config_sh")
)