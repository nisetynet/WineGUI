/**
 * Copyright (c) 2022 WineGUI
 *
 * \file    generic_config_file.h
 * \brief   WineGUI Configuration file supporting methods
 * \author  Melroy van den Berg <webmaster1989@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include <string>

struct GenericConfigData
{
  std::string default_folder;
  bool prefer_wine64;
  bool enable_debug_logging;
  bool enable_logging_stderr;
};

/**
 * \class GenericConfigFile
 * \brief Generic Config file helper methods
 */
class GenericConfigFile
{
public:
  // Singleton
  static GenericConfigFile& get_instance();

  static bool write_config_file(const GenericConfigData& generic_config);
  static GenericConfigData read_config_file();

private:
  GenericConfigFile();
  ~GenericConfigFile();
  GenericConfigFile(const GenericConfigFile&) = delete;
  GenericConfigFile& operator=(const GenericConfigFile&) = delete;
};