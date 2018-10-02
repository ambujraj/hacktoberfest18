#!/usr/bin/gosh

(use gtk)
(define (main args)
  (gtk-init args)
  (let
    (
      (window (gtk-window-new GTK_WINDOW_TOPLEVEL))
      (label (gtk-label-new "hello world"))
    )
    (gtk-container-add window label)
    (gtk-widget-show-all window)
  )
  (gtk-main)
)
