/************************************************************************
 *
 * cmdopt.h - Interface declaration for the option parsing subsystem
 *
 * $Id$
 *
 ************************************************************************
 *
 * Licensed to the Apache Software  Foundation (ASF) under one or more
 * contributor  license agreements.  See  the NOTICE  file distributed
 * with  this  work  for  additional information  regarding  copyright
 * ownership.   The ASF  licenses this  file to  you under  the Apache
 * License, Version  2.0 (the  "License"); you may  not use  this file
 * except in  compliance with the License.   You may obtain  a copy of
 * the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the  License is distributed on an  "AS IS" BASIS,
 * WITHOUT  WARRANTIES OR CONDITIONS  OF ANY  KIND, either  express or
 * implied.   See  the License  for  the  specific language  governing
 * permissions and limitations under the License.
 * 
 **************************************************************************/

#ifndef RW_PARSE_OPTS_H
#define RW_PARSE_OPTS_H

#include "target.h" /* For struct target_opts */

extern const char* exe_name;
extern const char escape_code; /**< Escape character used in paths. */
extern const char default_path_sep; /**< Primary path seperator */
extern const char suffix_sep; /**< File suffix seperator. */
extern const size_t exe_suffix_len; /**< Length of executable suffix. */

void 
show_usage (int status);

int 
eval_options (int argc, char** argv, struct target_opts* defaults, 
              const char** exe_opts);

char**
split_opt_string (const char* opts);

/**
   Accessor method for current execution target.

   This function is defined in runall.cpp (not cmdopt.cpp).

   This value is a pointer into argv[0] of the current target.

   @returns (Base) name of current execution target.
*/
const char* get_target ();

#endif   // RW_PARSE_OPTS_H
