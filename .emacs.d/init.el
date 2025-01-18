(message "Emacs 28.2 in Crostini in acer chromebook spin 311 -- 2025.01.18")
(message "In init.el in .emacs.d in HOME which is /home/koco")
(ido-mode 't)

(global-set-key "c" 'find-file-at-point)

;; from https://magit.vc/manual/magit/Installing-from-Melpa.html

(require 'package)
(add-to-list 'package-archives
             '("melpa" . "https://melpa.org/packages/") t)

;; Once you have added your preferred archive, you need to update the local package list using:
					; M-x package-refresh-contents RET

;; Once you have done that, you can install Magit and its dependencies using:
					; M-x package-install RET magit RET

;; package install created the following and the custom defs below:
;; ./magit-installation-warnings.txt

(setq package-install-upgrade-built-in t)

(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(package-selected-packages '(seq magit)))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 )
