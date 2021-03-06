/**************************************************************************/
/*                                                                        */
/*                              WWIV Version 5.0x                         */
/*               Copyright (C)2014-2015 WWIV Software Services            */
/*                                                                        */
/*    Licensed  under the  Apache License, Version  2.0 (the "License");  */
/*    you may not use this  file  except in compliance with the License.  */
/*    You may obtain a copy of the License at                             */
/*                                                                        */
/*                http://www.apache.org/licenses/LICENSE-2.0              */
/*                                                                        */
/*    Unless  required  by  applicable  law  or agreed to  in  writing,   */
/*    software  distributed  under  the  License  is  distributed on an   */
/*    "AS IS"  BASIS, WITHOUT  WARRANTIES  OR  CONDITIONS OF ANY  KIND,   */
/*    either  express  or implied.  See  the  License for  the specific   */
/*    language governing permissions and limitations under the License.   */
/*                                                                        */
/**************************************************************************/
#ifndef __INCLUDED_SCOPE_EXIT_H__
#define __INCLUDED_SCOPE_EXIT_H__

#include <functional>

namespace wwiv {
namespace core {

class ScopeExit {
public:
  explicit ScopeExit(std::function<void()> fn) : fn_(fn) {}
  ~ScopeExit() { fn_(); }
private:
  std::function<void()> fn_;
};

}  // namespace core
}  // namespace wwiv

#endif // __INCLUDED_SCOPE_EXIT_H__
