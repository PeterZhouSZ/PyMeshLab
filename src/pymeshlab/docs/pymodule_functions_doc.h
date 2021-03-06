/****************************************************************************
* PyMeshLab                                                         o o     *
* A versatile mesh processing toolbox                             o     o   *
*                                                                _   O  _   *
* Copyright(C) 2005-2021                                           \/)\/    *
* Visual Computing Lab                                            /\/|      *
* ISTI - Italian National Research Council                           |      *
*                                                                    \      *
* All rights reserved.                                                      *
*                                                                           *
* This program is free software; you can redistribute it and/or modify      *
* it under the terms of the GNU General Public License as published by      *
* the Free Software Foundation; either version 2 of the License, or         *
* (at your option) any later version.                                       *
*                                                                           *
* This program is distributed in the hope that it will be useful,           *
* but WITHOUT ANY WARRANTY; without even the implied warranty of            *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
* GNU General Public License (http://www.gnu.org/licenses/gpl.txt)          *
* for more details.                                                         *
*                                                                           *
****************************************************************************/
#ifndef PYMESHLAB_MODULE_FUNCTIONS_DOC_H
#define PYMESHLAB_MODULE_FUNCTIONS_DOC_H

namespace pymeshlab {
namespace doc {

//print_pymeshlab_version
const char* MODULE_PRINT_VERSION =
		"Prints the PyMeshLab version that is currently running.";

//number_plugins
const char* MODULE_NUMBER_PLUGINS =
		"Returns the number of plugins loaded in the current session of PyMeshLab.";

//print_plugin_list
const char* MODULE_PRINT_PLUGIN_LIST =
		"Prints all the meshlab plugins loaded in the current session of PyMeshLab.";

//set_max_gpu_memory
const char* MODULE_SET_MAX_GPU_MEMORY =
		"Sets the maximum number of GPU memory MegaBytes dedicated to PyMeshLab filters. "
		"This function should be run just one time after ``import pymeshlab`` instruction. "
		"If not changed, the default value is 350 Mb.";

}
}

#endif // PYMESHLAB_MODULE_FUNCTIONS_DOC_H
