//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <file_selector_linux/file_selector_plugin.h>
#include <image_compression_flutter/image_compression_flutter_plugin.h>

void fl_register_plugins(FlPluginRegistry* registry) {
  g_autoptr(FlPluginRegistrar) file_selector_linux_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "FileSelectorPlugin");
  file_selector_plugin_register_with_registrar(file_selector_linux_registrar);
  g_autoptr(FlPluginRegistrar) image_compression_flutter_registrar =
      fl_plugin_registry_get_registrar_for_plugin(registry, "ImageCompressionFlutterPlugin");
  image_compression_flutter_plugin_register_with_registrar(image_compression_flutter_registrar);
}
