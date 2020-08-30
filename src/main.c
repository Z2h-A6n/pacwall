#include "generate.h"
#include "render.h"
#include "opts.h"

int main(int argc, char **argv) {
    config_t cfg;
    config_init(&cfg);
    struct opts opts = parse_opts(&cfg);

    generate_graph(&opts);
    render_graph(&opts);
}
