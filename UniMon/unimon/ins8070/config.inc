;;; -*- asm -*-
;;;
;;; Universal Monitor INS8070 config file (INS8073 with default software UART)
;;; - Monitor ROM at 0x8800 NB
;;; - 32k RAM 0x0A00 to 0x7FFF NB

;;;
;;; Memory
;;;

ROM_B:	EQU	0x8800
RAM_B:	EQU	0x7800
WORK_B:	equ	0x7FC0
STACK:	equ	0x7F00

BUFLEN:	equ	16

;;;
;;; Options
;;;

USE_REGCMD = 1			; R(egister) command and related functions

FOR_INS8073 = 1			; Called from BASIC (do not initialize SP)

CONSOLE_FOR_BASIC = 0		; Make BASIC use dev/dev_xxxx as console
	
;;;
;;; EMILY Board (Shared Memory)
;;; 

USE_DEV_EMILY = 0
	IF USE_DEV_EMILY
SMBASE:	EQU	0x1FF0
	ENDIF

;;;
;;; INS8073  (Call routine in NSC Tiny BASIC ROM)
;;;

USE_DEV_INS8073 = 1
	IF USE_DEV_INS8073
MEMREQ = 1
	ENDIF
