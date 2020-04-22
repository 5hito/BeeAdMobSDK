
Pod::Spec.new do |s|

  s.name         = "BeeAdMobSDK"
  s.version      = "2.5.6"
  s.summary      = "广告sdk"
  s.description  = <<-DESC
    1.0.0:基础功能
    2.0.0:全新升级
    2.1.0:修复穿山甲奔溃问题
    2.1.1:移除穿山甲
    2.2.0:添加穿山甲
    2.2.1:解决穿山甲奔溃
    2.2.3:采用穿山甲pod
    2.2.5:采用广点通podß
    2.2.6:fix bugs
    2.3.1:fix ios13 bugs
    2.5.0:移除穿山甲
    2.5.1:fix bugs
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

  s.dependency 'BeeCommonSDK'
  s.dependency 'BeeAFNetSDK'

  s.dependency "MJExtension"
  s.dependency 'Masonry'

  s.dependency 'GDTMobSDK'
  s.dependency 'Google-Mobile-Ads-SDK', '~> 7.55.0'
  s.dependency 'FBAudienceNetwork', '~> 4.28.1'
  # s.dependency 'GoogleMobileAdsMediationFacebook'

  # s.dependency 'GoogleMobileAdsMediationMoPub'
  # s.dependency 'GoogleMobileAdsMediationAdColony'
  # s.dependency 'GoogleMobileAdsMediationAppLovin'
  # s.dependency 'GoogleMobileAdsMediationVungle'
  # s.dependency 'GoogleMobileAdsMediationUnity'

  #s.dependency 'MoPub-Applovin-Adapters'

end
