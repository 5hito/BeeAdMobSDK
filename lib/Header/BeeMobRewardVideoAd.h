//
//  BeeMobRewardVideoAd.h
//  BeeAdMobSDK
//
//  Created by linshucan on 2018/7/1.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BeeMobRewardVideoAdDelegate;

@interface BeeMobRewardVideoAd : NSObject

@property(nonatomic, weak) id<BeeMobRewardVideoAdDelegate> delegate;
@property(nonatomic, readonly, assign) BOOL isReady;

+ (instancetype)sharedInstance;
- (void)loadAdRequestWithAdUnitID:(NSString *)adUnitID;

- (void)presentFromRootViewController:(UIViewController *)rootViewController;

@end

@protocol BeeMobRewardVideoAdDelegate<NSObject>

@required

- (void)beeMobRewardBasedVideoAd:(BeeMobRewardVideoAd *)rewardBasedVideoAd
   didRewardUserWithReward:(NSDictionary *)reward;

@optional

- (void)beeMobRewardBasedVideoAd:(BeeMobRewardVideoAd *)rewardBasedVideoAd
    didFailToLoadWithError:(NSError *)error;
- (void)beeMobRewardBasedVideoAdDidReceiveAd:(BeeMobRewardVideoAd *)rewardBasedVideoAd;
- (void)beeMobRewardBasedVideoAdDidClose:(BeeMobRewardVideoAd *)rewardBasedVideoAd;

@end
