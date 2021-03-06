% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{Section5}
\alias{Section5}
\alias{swe_nod_aps_ut}
\alias{swe_nod_aps}
\alias{swe_get_orbital_elements}
\alias{swe_orbit_max_min_true_distance}
\title{Section 5: Kepler elements, nodes, apsides and orbital periods}
\usage{
swe_nod_aps_ut(jd_ut, ipl, iflag, method)

swe_nod_aps(jd_et, ipl, iflag, method)

swe_get_orbital_elements(jd_et, ipl, iflag)

swe_orbit_max_min_true_distance(jd_et, ipl, iflag)
}
\arguments{
\item{jd_ut}{UT Julian day number as double (day)}

\item{ipl}{Body/planet as integer (\code{SE$SUN=0}, \code{SE$MOON=1}, ... \code{SE$PLUTO=9})}

\item{iflag}{Computation flag as integer, many options possible (section 2.3)}

\item{method}{Method as integer (\code{SE$NODBIT_MEAN=0}, \code{SE$NODBIT_OSCUN=1},, \code{SE$NODBIT_OSCU_BAR=4}, \code{SE$NODBIT_FOPOINT=256})}

\item{jd_et}{ET Julian day number as double (day)}
}
\value{
\code{swe_nod_aps_ut} returns a list with named entries:
     \code{return} status flag as integer, \code{xnasc} ascending nodes as numeric vector,
     \code{xndsc} descending nodes as numeric vector, \code{xperi} perihelion as numeric vector, \code{xaphe} aphelion as numeric vector and \code{serr} error message as string

\code{swe_nod_aps} returns a list with named entries:
     \code{return} status flag as integer, \code{xnasc} ascending nodes as numeric vector,
     \code{xndsc} descending nodes as numeric vector, \code{xperi} perihelion as numeric vector, \code{xaphe} aphelion as numeric vector and \code{serr} error message as string

\code{swe_get_orbital_elements} returns a list with named entries:
     \code{return} status flag as integer, \code{dret} function results as numeric vector and \code{serr} error message as string

\code{swe_orbit_max_min_true_distance} returns a list with named entries:
     \code{return} status flag as integer, \code{dmax} maximum distance as double,
     \code{dmin} minimum distance as double, \code{dtrue} true distance as double and \code{serr} error message as string
}
\description{
Functions for: determining Kepler elements, nodes, apsides and orbital periods
}
\details{
\describe{
  \item{swe_nod_aps_ut()}{Compute planetary nodes and apsides (perihelia, aphelia, second focal points of the orbital ellipses).}
  }

\describe{
  \item{swe_nod_aps()}{Compute planetary nodes and apsides (perihelia, aphelia, second focal points of the orbital ellipses).}
  }

\describe{
  \item{swe_get_orbital_elements()}{This function calculates osculating elements (Kepler elements) and orbital periods.}
  }

\describe{
  \item{swe_orbit_max_min_true_distance()}{This function calculates the maximum possible distance, the minimum possible distance and the current true distance of planet.}
  }
}
\examples{
data(SE)
swe_nod_aps_ut(2451545,SE$MOON, SE$FLG_MOSEPH,SE$NODBIT_MEAN)
swe_nod_aps(2451545,SE$MOON, SE$FLG_MOSEPH,SE$NODBIT_MEAN)
swe_get_orbital_elements(2451545,SE$MOON, SE$FLG_MOSEPH)
swe_orbit_max_min_true_distance(2451545,SE$MOON, SE$FLG_MOSEPH)
}
\seealso{
Section 5 in \url{http://www.astro.com/swisseph/swephprg.htm}. Remember that array indices start in R at 1, while in C they start at 0!
}
