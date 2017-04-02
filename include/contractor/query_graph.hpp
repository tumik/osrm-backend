#ifndef OSRM_CONTRACTOR_QUERY_GRAPH_HPP
#define OSRM_CONTRACTOR_QUERY_GRAPH_HPP

#include "contractor/query_edge.hpp"

#include "util/typedefs.hpp"
#include "util/static_graph.hpp"

#include <tuple>

namespace osrm
{
namespace contractor
{

namespace detail
{
template <storage::Ownership Ownership> using QueryGraph = util::StaticGraph<typename QueryEdge::EdgeData, Ownership>;
}

using QueryGraph = detail::QueryGraph<storage::Ownership::Container>;
using QueryGraphView = detail::QueryGraph<storage::Ownership::View>;

}
}

#endif // QUERYEDGE_HPP