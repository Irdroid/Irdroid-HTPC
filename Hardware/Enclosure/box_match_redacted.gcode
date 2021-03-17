G21         ; Set units to mm
G90         ; Absolute positioning
G1 Z2.54 F600      ; Move to clearance level

;
; Operation:    0
; Name:         
; Type:         Inside
; Paths:        1
; Direction:    Conventional
; Cut Depth:    2.2
; Pass Depth:   0.20000000000000004
; Plunge rate:  100
; Cut rate:     250
;

; Path 0
; Rapid to initial position
G1 X9.3628 Y-3.6515 F600
G1 Z0.0000
; plunge
G1 Z-0.2000 F100
; cut
G1 X-9.3628 Y-3.6515 F250
G1 X-9.3628 Y3.6515
G1 X9.3628 Y3.6515
G1 X9.3628 Y-3.6515
; Rapid to initial position
G1 X9.3628 Y-3.6515 F600
G1 Z-0.2000
; plunge
G1 Z-0.4000 F100
; cut
G1 X-9.3628 Y-3.6515 F250
G1 X-9.3628 Y3.6515
G1 X9.3628 Y3.6515
G1 X9.3628 Y-3.6515
; Rapid to initial position
G1 X9.3628 Y-3.6515 F600
G1 Z-0.4000
; plunge
G1 Z-0.6000 F100
; cut
G1 X-9.3628 Y-3.6515 F250
G1 X-9.3628 Y3.6515
G1 X9.3628 Y3.6515
G1 X9.3628 Y-3.6515
; Rapid to initial position
G1 X9.3628 Y-3.6515 F600
G1 Z-0.6000
; plunge
G1 Z-0.8000 F100
; cut
G1 X-9.3628 Y-3.6515 F250
G1 X-9.3628 Y3.6515
G1 X9.3628 Y3.6515
G1 X9.3628 Y-3.6515
; Rapid to initial position
G1 X9.3628 Y-3.6515 F600
G1 Z-0.8000
; plunge
G1 Z-1.0000 F100
; cut
G1 X-9.3628 Y-3.6515 F250
G1 X-9.3628 Y3.6515
G1 X9.3628 Y3.6515
G1 X9.3628 Y-3.6515
; Rapid to initial position
G1 X9.3628 Y-3.6515 F600
G1 Z-1.0000
; plunge
G1 Z-1.2000 F100
; cut
G1 X-9.3628 Y-3.6515 F250
G1 X-9.3628 Y3.6515
G1 X9.3628 Y3.6515
G1 X9.3628 Y-3.6515
; Rapid to initial position
G1 X9.3628 Y-3.6515 F600
G1 Z-1.2000
; plunge
G1 Z-1.4000 F100
; cut
G1 X-9.3628 Y-3.6515 F250
G1 X-9.3628 Y3.6515
G1 X9.3628 Y3.6515
G1 X9.3628 Y-3.6515
; Rapid to initial position
G1 X9.3628 Y-3.6515 F600
G1 Z-1.4000
; plunge
G1 Z-1.6000 F100
; cut
G1 X-9.3628 Y-3.6515 F250
G1 X-9.3628 Y3.6515
G1 X9.3628 Y3.6515
G1 X9.3628 Y-3.6515
; Rapid to initial position
G1 X9.3628 Y-3.6515 F600
G1 Z-1.6000
; plunge
G1 Z-1.8000 F100
; cut
G1 X-9.3628 Y-3.6515 F250
G1 X-9.3628 Y3.6515
G1 X9.3628 Y3.6515
G1 X9.3628 Y-3.6515
; Rapid to initial position
G1 X9.3628 Y-3.6515 F600
G1 Z-1.8000
; plunge
G1 Z-2.0000 F100
; cut
G1 X-9.3628 Y-3.6515 F250
G1 X-9.3628 Y3.6515
G1 X9.3628 Y3.6515
G1 X9.3628 Y-3.6515
; Rapid to initial position
G1 X9.3628 Y-3.6515 F600
G1 Z-2.0000
; plunge
G1 Z-2.2000 F100
; cut
G1 X-9.3628 Y-3.6515 F250
G1 X-9.3628 Y3.6515
G1 X9.3628 Y3.6515
G1 X9.3628 Y-3.6515
; Retract
G1 Z2.5400 F600

; Return to 0,0
G0 X0 Y0 F600
M2
