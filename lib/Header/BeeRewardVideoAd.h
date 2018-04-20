//
//  BeeRewardVideoAd.h
//  BeeMobSDK
//
//  Created by linshucan on 2018/1/24.
//  Copyright © 2018年 reactTest. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BeeRewardVideoAdDelegate;

@interface BeeRewardVideoAd : NSObject

@property(nonatomic, weak) id<BeeRewardVideoAdDelegate> delegate;
@property(nonatomic, readonly, getter=isReady) BOOL ready;

+ (instancetype)sharedInstance;
- (void)loadRequestWithAdUnitID:(NSString *)adUnitID;

- (void)presentFromRootViewController:(UIViewController *)viewController;

@end

@protocol BeeRewardVideoAdDelegate<NSObject>

@required

- (void)rewardBasedVideoAd:(BeeRewardVideoAd *)rewardBasedVideoAd
   didRewardUserWithReward:(NSDictionary *)reward;

@optional

- (void)rewardBasedVideoAd:(BeeRewardVideoAd *)rewardBasedVideoAd
    didFailToLoadWithError:(NSError *)error;
- (void)rewardBasedVideoAdDidReceiveAd:(BeeRewardVideoAd *)rewardBasedVideoAd;
- (void)rewardBasedVideoAdDidOpen:(BeeRewardVideoAd *)rewardBasedVideoAd;
- (void)rewardBasedVideoAdDidStartPlaying:(BeeRewardVideoAd *)rewardBasedVideoAd;
- (void)rewardBasedVideoAdDidClose:(BeeRewardVideoAd *)rewardBasedVideoAd;
- (void)rewardBasedVideoAdWillLeaveApplication:(BeeRewardVideoAd *)rewardBasedVideoAd;

@end

