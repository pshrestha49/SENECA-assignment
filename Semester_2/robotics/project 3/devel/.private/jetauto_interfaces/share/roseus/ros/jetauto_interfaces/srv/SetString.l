;; Auto-generated. Do not edit!


(when (boundp 'jetauto_interfaces::SetString)
  (if (not (find-package "JETAUTO_INTERFACES"))
    (make-package "JETAUTO_INTERFACES"))
  (shadow 'SetString (find-package "JETAUTO_INTERFACES")))
(unless (find-package "JETAUTO_INTERFACES::SETSTRING")
  (make-package "JETAUTO_INTERFACES::SETSTRING"))
(unless (find-package "JETAUTO_INTERFACES::SETSTRINGREQUEST")
  (make-package "JETAUTO_INTERFACES::SETSTRINGREQUEST"))
(unless (find-package "JETAUTO_INTERFACES::SETSTRINGRESPONSE")
  (make-package "JETAUTO_INTERFACES::SETSTRINGRESPONSE"))

(in-package "ROS")





(defclass jetauto_interfaces::SetStringRequest
  :super ros::object
  :slots (_data ))

(defmethod jetauto_interfaces::SetStringRequest
  (:init
   (&key
    ((:data __data) "")
    )
   (send-super :init)
   (setq _data (string __data))
   self)
  (:data
   (&optional __data)
   (if __data (setq _data __data)) _data)
  (:serialization-length
   ()
   (+
    ;; string _data
    4 (length _data)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; string _data
       (write-long (length _data) s) (princ _data s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; string _data
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _data (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass jetauto_interfaces::SetStringResponse
  :super ros::object
  :slots (_success _message ))

(defmethod jetauto_interfaces::SetStringResponse
  (:init
   (&key
    ((:success __success) nil)
    ((:message __message) "")
    )
   (send-super :init)
   (setq _success __success)
   (setq _message (string __message))
   self)
  (:success
   (&optional __success)
   (if __success (setq _success __success)) _success)
  (:message
   (&optional __message)
   (if __message (setq _message __message)) _message)
  (:serialization-length
   ()
   (+
    ;; bool _success
    1
    ;; string _message
    4 (length _message)
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; bool _success
       (if _success (write-byte -1 s) (write-byte 0 s))
     ;; string _message
       (write-long (length _message) s) (princ _message s)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; bool _success
     (setq _success (not (= 0 (sys::peek buf ptr- :char)))) (incf ptr- 1)
   ;; string _message
     (let (n) (setq n (sys::peek buf ptr- :integer)) (incf ptr- 4) (setq _message (subseq buf ptr- (+ ptr- n))) (incf ptr- n))
   ;;
   self)
  )

(defclass jetauto_interfaces::SetString
  :super ros::object
  :slots ())

(setf (get jetauto_interfaces::SetString :md5sum-) "546971982e3fbbd5a41e60fb6432e357")
(setf (get jetauto_interfaces::SetString :datatype-) "jetauto_interfaces/SetString")
(setf (get jetauto_interfaces::SetString :request) jetauto_interfaces::SetStringRequest)
(setf (get jetauto_interfaces::SetString :response) jetauto_interfaces::SetStringResponse)

(defmethod jetauto_interfaces::SetStringRequest
  (:response () (instance jetauto_interfaces::SetStringResponse :init)))

(setf (get jetauto_interfaces::SetStringRequest :md5sum-) "546971982e3fbbd5a41e60fb6432e357")
(setf (get jetauto_interfaces::SetStringRequest :datatype-) "jetauto_interfaces/SetStringRequest")
(setf (get jetauto_interfaces::SetStringRequest :definition-)
      "string data
---
bool success
string message

")

(setf (get jetauto_interfaces::SetStringResponse :md5sum-) "546971982e3fbbd5a41e60fb6432e357")
(setf (get jetauto_interfaces::SetStringResponse :datatype-) "jetauto_interfaces/SetStringResponse")
(setf (get jetauto_interfaces::SetStringResponse :definition-)
      "string data
---
bool success
string message

")



(provide :jetauto_interfaces/SetString "546971982e3fbbd5a41e60fb6432e357")


