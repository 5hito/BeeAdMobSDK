//
//  QFMobAdSDK.h
//  Pods
//
//  Created by LinBee on 2020/9/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QFMobAdSDKConfigure : NSObject

@property (nonatomic, strong) NSString* guid;
@property (nonatomic, strong) NSString* splashPlacementID;
@property (nonatomic, strong) NSString* interstitialPlacementID;

@end

@interface QFMobAdSDK : NSObject

+ (void)start:(QFMobAdSDKConfigure*)config withAppID:(NSString*)toponAppID withAppKey:(NSString*)toponAppKey;
+ (void)setIsPaidApp:(BOOL)isPaid;
+ (void)setShowInterstitialAdStatus:(BOOL)status;
+ (void)appDidFinishLaunching;

@end

NS_ASSUME_NONNULL_END
