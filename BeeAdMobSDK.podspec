
Pod::Spec.new do |s|

  s.name         = "BeeAdMobSDK"
  s.version      = "1.0.0"
  s.summary      = "广告sdk"
  s.description  = <<-DESC
    0.0.x:基础功能
    1.x.x:合作专用
                   DESC

  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.author             = { "5hito" => "beemans@foxmail.com" }
  s.homepage     = "https://github.com/5hito/BeeAdMobSDK"
  s.source       = { :git => "https://github.com/5hito/BeeAdMobSDK.git", :tag => s.version.to_s }

  s.source_files  = "lib/Header/*.h"
  s.resources = "lib/Resources/*.bundle"

  s.requires_arc = true
  s.ios.deployment_target    = '8.0'
  s.ios.vendored_libraries = 'lib/libBeeAdMobSDK.a'

  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }

  s.dependency "MJExtension"

  s.dependency 'BeeCommonSDK'
  s.dependency 'BeeAFNetSDK'

  s.dependency 'BeeMobGDTSDK', '~> 1.0.1'
  s.dependency 'Google-Mobile-Ads-SDK', '~> 7.32.0'

  s.dependency 'GoogleMobileAdsMediationInMobi'
  s.dependency 'GoogleMobileAdsMediationMoPub'
  s.dependency 'Flurry-iOS-SDK/FlurrySDK'
  s.dependency 'Flurry-iOS-SDK/FlurryAds'
  s.dependency 'AdMobMediationAdapterFlurry'
#s.dependency 'GoogleMobileAdsMediationFacebook'
#s.dependency 'FBAudienceNetwork', '~> 4.28.1'

end
