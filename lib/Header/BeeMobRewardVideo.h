//
//  BeeMobRewardVideo.h
//  BeeAdMobSDK
//
//  Created by linshucan on 2018/7/1.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BeeMobRewardVideoDelegate;

@interface BeeMobRewardVideo : NSObject

- (instancetype)initWithAdUnitID:(NSString *)adUnitID NS_DESIGNATED_INITIALIZER;

@property(nonatomic, weak) id<BeeMobRewardVideoDelegate> delegate;
@property(nonatomic, readonly, assign) BOOL isReady;

- (void)loadAdRequest;
- (void)presentFromRootViewController:(UIViewController *)rootViewController;

@end

@protocol BeeMobRewardVideoDelegate<NSObject>

@required

- (void)beeMobRewardBasedVideoAd:(BeeMobRewardVideo *)rewardBasedVideoAd
   didRewardUserWithReward:(NSDictionary *)reward;

@optional

- (void)beeMobRewardBasedVideoAd:(BeeMobRewardVideo *)rewardBasedVideoAd
    didFailToLoadWithError:(NSError *)error;
- (void)beeMobRewardBasedVideoAdDidReceiveAd:(BeeMobRewardVideo *)rewardBasedVideoAd;
- (void)beeMobRewardBasedVideoAdDidClose:(BeeMobRewardVideo *)rewardBasedVideoAd;

@end
