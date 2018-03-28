
Pod::Spec.new do |s|

  s.name         = "BeeAdMobSDK"
  s.version      = "0.0.2"
  s.summary      = "广告sdk"
  s.description  = <<-DESC
    0.0.x:基础功能
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

  s.dependency 'BeeCommonSDK', '1.0.2'
  s.dependency 'BeeAFNetSDK', '0.0.1'

  s.dependency 'BeeMobGDTSDK', '1.0.0'
  s.dependency 'Google-Mobile-Ads-SDK'

  s.dependency 'GoogleMobileAdsMediationInMobi', '~> 7.0.4.0'
  s.dependency 'GoogleMobileAdsMediationMoPub', '~> 4.19.0.0'
  s.dependency 'Flurry-iOS-SDK/FlurrySDK'
  s.dependency 'Flurry-iOS-SDK/FlurryAds'
  s.dependency 'AdMobMediationAdapterFlurry'
  s.dependency 'GoogleMobileAdsMediationFacebook'

end
