#
#  Be sure to run `pod spec lint NYLinkLabel.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

s.name         = "NYLinkLabel"
s.version      = "1.0"
s.summary      = "A link label for label"

s.description  = <<-DESC
commit the first version
DESC

s.homepage     = "https://github.com/Akries/NYLinkLabel.git"

s.license      = "MIT"


s.author             = { "Akries.Ni" => "zxcnoo@163.com" }
s.source       = { :git => "https://github.com/Akries/NYLinkLabel.git", :tag => "{1.0.0}" }


s.source_files  = "NYLinkLabel/*.{h,m}"
s.requires_arc = true
end
