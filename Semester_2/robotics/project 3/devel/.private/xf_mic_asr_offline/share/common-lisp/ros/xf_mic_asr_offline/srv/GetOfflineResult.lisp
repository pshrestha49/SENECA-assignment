; Auto-generated. Do not edit!


(cl:in-package xf_mic_asr_offline-srv)


;//! \htmlinclude GetOfflineResult-request.msg.html

(cl:defclass <GetOfflineResult-request> (roslisp-msg-protocol:ros-message)
  ((offline_recognise_start
    :reader offline_recognise_start
    :initarg :offline_recognise_start
    :type cl:fixnum
    :initform 0)
   (confidence_threshold
    :reader confidence_threshold
    :initarg :confidence_threshold
    :type cl:fixnum
    :initform 0)
   (time_per_order
    :reader time_per_order
    :initarg :time_per_order
    :type cl:fixnum
    :initform 0))
)

(cl:defclass GetOfflineResult-request (<GetOfflineResult-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetOfflineResult-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetOfflineResult-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name xf_mic_asr_offline-srv:<GetOfflineResult-request> is deprecated: use xf_mic_asr_offline-srv:GetOfflineResult-request instead.")))

(cl:ensure-generic-function 'offline_recognise_start-val :lambda-list '(m))
(cl:defmethod offline_recognise_start-val ((m <GetOfflineResult-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader xf_mic_asr_offline-srv:offline_recognise_start-val is deprecated.  Use xf_mic_asr_offline-srv:offline_recognise_start instead.")
  (offline_recognise_start m))

(cl:ensure-generic-function 'confidence_threshold-val :lambda-list '(m))
(cl:defmethod confidence_threshold-val ((m <GetOfflineResult-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader xf_mic_asr_offline-srv:confidence_threshold-val is deprecated.  Use xf_mic_asr_offline-srv:confidence_threshold instead.")
  (confidence_threshold m))

(cl:ensure-generic-function 'time_per_order-val :lambda-list '(m))
(cl:defmethod time_per_order-val ((m <GetOfflineResult-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader xf_mic_asr_offline-srv:time_per_order-val is deprecated.  Use xf_mic_asr_offline-srv:time_per_order instead.")
  (time_per_order m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetOfflineResult-request>) ostream)
  "Serializes a message object of type '<GetOfflineResult-request>"
  (cl:let* ((signed (cl:slot-value msg 'offline_recognise_start)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'confidence_threshold)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'time_per_order)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 256) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetOfflineResult-request>) istream)
  "Deserializes a message object of type '<GetOfflineResult-request>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'offline_recognise_start) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'confidence_threshold) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'time_per_order) (cl:if (cl:< unsigned 128) unsigned (cl:- unsigned 256))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetOfflineResult-request>)))
  "Returns string type for a service object of type '<GetOfflineResult-request>"
  "xf_mic_asr_offline/GetOfflineResultRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetOfflineResult-request)))
  "Returns string type for a service object of type 'GetOfflineResult-request"
  "xf_mic_asr_offline/GetOfflineResultRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetOfflineResult-request>)))
  "Returns md5sum for a message object of type '<GetOfflineResult-request>"
  "28bc8539466b604fc9101f0b3a34c375")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetOfflineResult-request)))
  "Returns md5sum for a message object of type 'GetOfflineResult-request"
  "28bc8539466b604fc9101f0b3a34c375")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetOfflineResult-request>)))
  "Returns full string definition for message of type '<GetOfflineResult-request>"
  (cl:format cl:nil "int8 offline_recognise_start~%int8 confidence_threshold ~%int8 time_per_order~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetOfflineResult-request)))
  "Returns full string definition for message of type 'GetOfflineResult-request"
  (cl:format cl:nil "int8 offline_recognise_start~%int8 confidence_threshold ~%int8 time_per_order~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetOfflineResult-request>))
  (cl:+ 0
     1
     1
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetOfflineResult-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetOfflineResult-request
    (cl:cons ':offline_recognise_start (offline_recognise_start msg))
    (cl:cons ':confidence_threshold (confidence_threshold msg))
    (cl:cons ':time_per_order (time_per_order msg))
))
;//! \htmlinclude GetOfflineResult-response.msg.html

(cl:defclass <GetOfflineResult-response> (roslisp-msg-protocol:ros-message)
  ((result
    :reader result
    :initarg :result
    :type cl:string
    :initform "")
   (fail_reason
    :reader fail_reason
    :initarg :fail_reason
    :type cl:string
    :initform "")
   (text
    :reader text
    :initarg :text
    :type cl:string
    :initform ""))
)

(cl:defclass GetOfflineResult-response (<GetOfflineResult-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetOfflineResult-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetOfflineResult-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name xf_mic_asr_offline-srv:<GetOfflineResult-response> is deprecated: use xf_mic_asr_offline-srv:GetOfflineResult-response instead.")))

(cl:ensure-generic-function 'result-val :lambda-list '(m))
(cl:defmethod result-val ((m <GetOfflineResult-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader xf_mic_asr_offline-srv:result-val is deprecated.  Use xf_mic_asr_offline-srv:result instead.")
  (result m))

(cl:ensure-generic-function 'fail_reason-val :lambda-list '(m))
(cl:defmethod fail_reason-val ((m <GetOfflineResult-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader xf_mic_asr_offline-srv:fail_reason-val is deprecated.  Use xf_mic_asr_offline-srv:fail_reason instead.")
  (fail_reason m))

(cl:ensure-generic-function 'text-val :lambda-list '(m))
(cl:defmethod text-val ((m <GetOfflineResult-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader xf_mic_asr_offline-srv:text-val is deprecated.  Use xf_mic_asr_offline-srv:text instead.")
  (text m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetOfflineResult-response>) ostream)
  "Serializes a message object of type '<GetOfflineResult-response>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'result))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'result))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'fail_reason))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'fail_reason))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'text))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'text))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetOfflineResult-response>) istream)
  "Deserializes a message object of type '<GetOfflineResult-response>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'result) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'result) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'fail_reason) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'fail_reason) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'text) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'text) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetOfflineResult-response>)))
  "Returns string type for a service object of type '<GetOfflineResult-response>"
  "xf_mic_asr_offline/GetOfflineResultResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetOfflineResult-response)))
  "Returns string type for a service object of type 'GetOfflineResult-response"
  "xf_mic_asr_offline/GetOfflineResultResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetOfflineResult-response>)))
  "Returns md5sum for a message object of type '<GetOfflineResult-response>"
  "28bc8539466b604fc9101f0b3a34c375")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetOfflineResult-response)))
  "Returns md5sum for a message object of type 'GetOfflineResult-response"
  "28bc8539466b604fc9101f0b3a34c375")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetOfflineResult-response>)))
  "Returns full string definition for message of type '<GetOfflineResult-response>"
  (cl:format cl:nil "string result~%string fail_reason ~%string text~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetOfflineResult-response)))
  "Returns full string definition for message of type 'GetOfflineResult-response"
  (cl:format cl:nil "string result~%string fail_reason ~%string text~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetOfflineResult-response>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'result))
     4 (cl:length (cl:slot-value msg 'fail_reason))
     4 (cl:length (cl:slot-value msg 'text))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetOfflineResult-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetOfflineResult-response
    (cl:cons ':result (result msg))
    (cl:cons ':fail_reason (fail_reason msg))
    (cl:cons ':text (text msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetOfflineResult)))
  'GetOfflineResult-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetOfflineResult)))
  'GetOfflineResult-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetOfflineResult)))
  "Returns string type for a service object of type '<GetOfflineResult>"
  "xf_mic_asr_offline/GetOfflineResult")