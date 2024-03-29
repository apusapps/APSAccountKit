#
# Be sure to run `pod lib lint APSAccountKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'APSAccountKit-DEBUG'
  s.version          = '1.0.0-alpha.5'
  s.summary          = 'APSAccountKit'


  s.description      = <<-DESC
  APSAccountKit (DEBUG)
                       DESC

  s.homepage         = 'https://github.com/apusapps/APSAccountKit'
  s.author           = { 'follyxing' => 'i@xingcheng.me' }
  s.source           = { :git => 'https://github.com/apusapps/APSAccountKit.git', :tag => s.version.to_s }

  s.ios.deployment_target = '10.0'
  


  s.subspec 'Core' do |ss|
    ss.ios.vendored_frameworks = "frameworks/Debug/APSAccountKitCore.framework"
    ss.dependency 'AFNetworking'
    ss.dependency 'XALFrameworks/APSUtilities', '~> 0.1.24.alpha.1'
  end

  s.subspec 'Facebook' do |ss|
    ss.ios.vendored_frameworks = "frameworks/Debug/APSAccountKitFacebook.framework"
    ss.dependency 'APSAccountKit/Core'
    ss.dependency 'FBSDKLoginKit'
  end

  s.subspec 'UnityForHappy' do |ss|
    ss.ios.vendored_frameworks = "frameworks/Debug/APSAccountKitUnityForHappy.framework"
    ss.dependency 'APSAccountKit/Core'
    ss.dependency 'APSAccountKit/Facebook'
    ss.dependency 'UnzipKit'
  end

end
