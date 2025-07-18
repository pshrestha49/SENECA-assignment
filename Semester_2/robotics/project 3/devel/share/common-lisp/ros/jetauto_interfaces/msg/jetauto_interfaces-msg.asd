
(cl:in-package :asdf)

(defsystem "jetauto_interfaces-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "ColorDetect" :depends-on ("_package_ColorDetect"))
    (:file "_package_ColorDetect" :depends-on ("_package"))
    (:file "ColorInfo" :depends-on ("_package_ColorInfo"))
    (:file "_package_ColorInfo" :depends-on ("_package"))
    (:file "ColorsInfo" :depends-on ("_package_ColorsInfo"))
    (:file "_package_ColorsInfo" :depends-on ("_package"))
    (:file "Float64List" :depends-on ("_package_Float64List"))
    (:file "_package_Float64List" :depends-on ("_package"))
    (:file "LineROI" :depends-on ("_package_LineROI"))
    (:file "_package_LineROI" :depends-on ("_package"))
    (:file "ObjectInfo" :depends-on ("_package_ObjectInfo"))
    (:file "_package_ObjectInfo" :depends-on ("_package"))
    (:file "ObjectsInfo" :depends-on ("_package_ObjectsInfo"))
    (:file "_package_ObjectsInfo" :depends-on ("_package"))
    (:file "PixelPosition" :depends-on ("_package_PixelPosition"))
    (:file "_package_PixelPosition" :depends-on ("_package"))
    (:file "Point2D" :depends-on ("_package_Point2D"))
    (:file "_package_Point2D" :depends-on ("_package"))
    (:file "Points" :depends-on ("_package_Points"))
    (:file "_package_Points" :depends-on ("_package"))
    (:file "Pose2D" :depends-on ("_package_Pose2D"))
    (:file "_package_Pose2D" :depends-on ("_package"))
    (:file "ROI" :depends-on ("_package_ROI"))
    (:file "_package_ROI" :depends-on ("_package"))
  ))