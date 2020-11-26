#
# Be sure to run `pod lib lint MobNewsSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MobNewsSDK'
  s.version          = '2.2.0'
  s.summary          = 'MobNewsSDK.'
  s.description      = <<-DESC
  News SDK.
                       DESC

  s.author           = { 'ad' => 'ad@ad.com' }
  s.homepage         = 'https://gitee.com/mobad/MobNewsSDK'
  s.source           = { :git => 'https://gitee.com/mobad/MobNewsSDK.git', :tag => s.version.to_s }
  s.platform         = :ios, "9.0"  

  s.vendored_frameworks = 'MobNewsSDK/Frameworks/MobNewsSDK.framework'
  s.resource = 'MobNewsSDK/Frameworks/MobNewsSDKBundle.bundle'
  valid_archs = ['armv7', 'arm64', 'i386', 'x86_64']
end
