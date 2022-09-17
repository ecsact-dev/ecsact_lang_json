#include <vector>
#include <string>
#include <cassert>
#include "ecsact/runtime/meta.hh"
#include "ecsact/codegen_plugin.h"
#include "ecsact/codegen_plugin.hh"
#include "nlohmann/json.hpp"

const char* ecsact_codegen_plugin_name() {
	return "json";
}

void ecsact_codegen_plugin
  ( ecsact_package_id          package_id
  , ecsact_codegen_write_fn_t  write_fn
  )
{
	ecsact::codegen_plugin_context ctx{package_id, write_fn};
}
