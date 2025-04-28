#ifndef WALLE_TYPE_TOOLS_H
#define WALLE_TYPE_TOOLS_H

#include <tuple>

namespace Walle {

template <typename T> struct FunctionTraits;

template <typename R, typename... A> struct FunctionTraits<R (*)(A...)> {
  using arguments_t = std::tuple<A...>;
};

template <typename R, typename... A> struct FunctionTraits<R(A...)> {
  using arguments_t = std::tuple<A...>;
};

} // namespace Walle

#endif // WALLE_TYPE_TOOLS_H