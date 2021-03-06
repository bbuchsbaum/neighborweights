% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/temporal_weights.R
\name{temporal_adjacency}
\alias{temporal_adjacency}
\title{temporal_adjacency}
\usage{
temporal_adjacency(
  time,
  weight_mode = c("heat", "binary"),
  sigma = 1,
  window = 2
)
}
\arguments{
\item{time}{the time vector}

\item{weight_mode}{the type of weighting}

\item{sigma}{the bandwidth in units of time}

\item{window}{the window size in sampling units (assuming a regularily space grid)}
}
\description{
temporal_adjacency
}
\examples{

time <- 1:100
tadj <- temporal_adjacency(time, weight_mode="heat", sigma=2, window=3)
}
