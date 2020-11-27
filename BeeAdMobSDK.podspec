
Pod::Spec.new do |s|

  s.name             = "BeeAdMobSDK"
  s.version          = "3.0.4"
  s.summary          = 'A short description of BeeAdMobSDK.'
  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

s.license = {"type"=>"MIT", "file"=>"LICENSE"}
s.author             = { "5hito" => "beemans@foxmail.com" }
s.homepage     = "https://github.com/5hito/BeeAdMobSDK"
s.source       = { :git => "https://github.com/5hito/BeeAdMobSDK.git", :tag => s.version.to_s }

  # 配置宏定义 podfile 文件顶部定义 ENV["SMART_AS_ENABLE"] = "true"
  if ENV['SMART_AS_ENABLE']
    s.xcconfig = {
      "GCC_PREPROCESSOR_DEFINITIONS" => 'SD_WEBP=1'
    }
  end

  s.ios.deployment_target = '10.0'
  s.ios.vendored_libraries   = 'ios/libBeeAdMobSDK.a'
  s.source_files = 'ios/Header/*.h'
  # s.resources = "ios/Resources/*.bundle"
  s.resource_bundles = {
     'QFMobAd' => ['ios/Assets/*']
  }

  # valid_archs = ['armv7', 'armv7s', 'x86_64', 'arm64']

  s.frameworks = 'UIKit', 'WebKit', 'AdSupport', 'SafariServices', 'StoreKit', 'SystemConfiguration', 'MobileCoreServices', 'CoreServices', 'Accelerate'
  
  s.dependency 'AnyThinkiOS', '5.6.7'
  s.dependency 'AFNetworking', '~> 4.0'
  s.dependency 'SDWebImage'
  s.dependency 'SDWebImage/WebP'

end
