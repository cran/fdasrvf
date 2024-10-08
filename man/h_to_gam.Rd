% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/geometry.R
\name{h_to_gam}
\alias{h_to_gam}
\title{map shooting vector to warping function at identity}
\usage{
h_to_gam(h)
}
\arguments{
\item{h}{Either a numeric vector of a numeric matrix or a numeric array
specifying the shooting vectors}
}
\value{
A numeric array of the same shape as the input array \code{h} storing the
warping functions of \code{h}.
}
\description{
map shooting vector to warping function at identity
}
\keyword{alignment}
\keyword{srvf}
