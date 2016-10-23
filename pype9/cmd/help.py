"""
Prints help information associated with a PyPe9 command
"""
from argparse import ArgumentParser

parser = ArgumentParser(description=__doc__)
parser.add_argument('cmd', default=None,
                    help="Name of the command to print help information")


# List of available cmds
def all_cmds():
    return [c for c in dir(pype9.cmd) if not c.startswith('_')]


def get_parser(cmd):
    "Get the parser associated with a given cmd"
    return getattr(pype9.cmd, cmd).parser


def available_cmds_message():
    return ("Available PyPe9 commands:\n{}".format(
        "\n".join('  {} - {}'.format(c, get_parser(c).description.strip())
                  for c in all_cmds())))


def run(argv):
    if not argv:
        print available_cmds_message()
    else:
        args = parser.parse_args(argv)
        get_parser(args.cmd).print_help()


import pype9.cmd  # @IgnorePep8

if __name__ == '__main__':
    import sys
    run(sys.argv[1:])