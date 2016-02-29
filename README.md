# root-plot-helper
small helper scripts for standard root plotting work

## 2d plotting

For some applications, plotting a two dimensional histogram with ROOT is not
fully satisfactory, as the distributions can be hard to interpret by eye. One
of the commonly used, built-in features of ROOT is plotting a TProfile on top
of the "colz" plot. This can be done either with error bars reflecting the
error on the mean in each slice (in my opinion, too rarely used), or
representing the standard deviation in each slice. TProfiles visualise the mean
in each slice, another interesting property of a distribution is the median or
more generally percentiles, also available in ROOT since
[ROOT-4223](https://sft.its.cern.ch/jira/browse/ROOT-4223).

Yet, instead of always calling these functions by hand, I wanted something with
a better out-of-the-box behaviour. I.e. a plotting utility that plots a 2D plot
as x vs y and y vs x and overlays a few percentile distributions, callable with
a single line of code.

The error bar computation for the percentiles plots is non trivial
[ROOT-8012](https://sft.its.cern.ch/jira/browse/ROOT-8012) and I failed so far
to get reliable error estimates for observed medians using the [Laplace
formula](https://en.wikipedia.org/wiki/Median). Due to lack of better ideas I
also add a
[bootstrapping](http://stats.stackexchange.com/questions/35256/is-bootstrapping-a-valid-method-to-assess-the-uncertainty-of-the-median-estimate)
method to determine the uncertainties of observed percentiles.
