#' @importFrom graphics plot
#' @export
plot.fdawarp <- function(x, ...){
  M <- nrow(x$fn)
  mean_f0 <- rowMeans(x$f0)
  std_f0 <- apply(x$f0, 1, stats::sd)
  mean_fn <- rowMeans(x$fn)
  std_fn <- apply(x$fn, 1, stats::sd)

  graphics::matplot(
    x = (0:(M - 1)) / (M - 1),
    y = x$warping_functions,
    type = "l",
    main = "Warping functions",
    xlab = "Time"
  )

  graphics::matplot(
    x = x$time,
    y = x$fn,
    type = "l",
    main = bquote(paste("Warped Data (", lambda == .(x$lambda), ")"))
  )

  graphics::matplot(
    x = x$time,
    y = cbind(mean_f0, mean_f0 + std_f0, mean_f0 - std_f0),
    type = "l",
    lty = 1,
    col = c("blue", "red", "green"),
    ylab = "",
    main = bquote(paste("Original Data: ", Mean %+-% STD))
  )
  graphics::legend(
    x = "topright",
    inset = 0.01,
    legend = c("Mean", "Mean + STD", "Mean - STD"),
    col = c("blue", "red", "green"),
    lty = 1
  )

  graphics::matplot(
    x = x$time,
    y = cbind(mean_fn, mean_fn + std_fn, mean_fn - std_fn),
    type = "l",
    lty = 1,
    col = c("blue", "red", "green"),
    ylab = "",
    main = bquote(paste(
      "Warped Data: ", Mean %+-% STD,
      " (", lambda == .(x$lambda), ")"
    ))
  )
  graphics::legend(
    x = "topright",
    inset = 0.01,
    legend = c("Mean", "Mean + STD", "Mean - STD"),
    col = c("blue", "red", "green"),
    lty = 1
  )

  if (x$call$centroid_type == "mean")
    plot(
      x = x$time,
      y = x$fmean,
      type = "l",
      col = "green",
      main = bquote(paste(f[mean], " (", lambda == .(x$call$lambda), ")"))
    )
  else
    plot(
      x = x$time,
      y = x$fmean,
      type = "l",
      col = "green",
      main = bquote(paste(f[median], " (", lambda == .(x$call$lambda), ")"))
    )
}
