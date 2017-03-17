#
#  Be sure to run `pod spec lint KZNetwork.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

    s.name         = "KZNetwork"
    s.version      = "1.0.0"
    s.summary      = "课栈APP网络请求库"

    s.homepage     = "https://github.com/LiuXiangJing/KZNetwork.git"

    s.license      = "MIT"

    s.author             = { "刘咕噜" => "lxj_tintin@126.com" }

    s.platform     = :ios, "8.0"
    s.source       = { :git => "https://github.com/LiuXiangJing/KZNetwork.git", :tag => "#{s.version}" }

    s.vendored_frameworks = 'JsonModelTranfer.framework','KZNetwork.framework'
    s.dependency = 'JsonModelTranfer'

    s.frameworks = "Foundation", "CoreData","UIKit"



end
