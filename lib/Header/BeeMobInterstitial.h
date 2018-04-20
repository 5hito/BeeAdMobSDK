//
//  BeeMobInterstitial.h
//  BeeAdMobSDK
//
//  Created by linshucan on 2018/4/20.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BeeMobInterstitialDelegate;

@interface BeeMobInterstitial : NSObject

- (instancetype)initWithAdUnitID:(NSString *)adUnitID NS_DESIGNATED_INITIALIZER;

@property(nonatomic, readonly, strong) NSString *adUnitID;
@property(nonatomic, weak) id<BeeMobInterstitialDelegate> delegate;
@property(nonatomic, readonly, assign) BOOL isReady;
@property(nonatomic, readonly, assign) BOOL hasBeenUsed;

- (void)loadAdRequest;
- (void)presentFromRootViewController:(UIViewController *)rootViewController;

@end

@protocol BeeMobInterstitialDelegate <NSObject>

@optional

- (void)interstitialDidReceiveAd:(BeeMobInterstitial *)ad;
- (void)interstitial:(BeeMobInterstitial *)ad didFailToReceiveAdWithError:(NSError *)error;
- (void)interstitialWillPresentScreen:(BeeMobInterstitial *)ad;
- (void)interstitialDidFailToPresentScreen:(BeeMobInterstitial *)ad;
- (void)interstitialWillDismissScreen:(BeeMobInterstitial *)ad;
- (void)interstitialDidDismissScreen:(BeeMobInterstitial *)ad;
- (void)interstitialWillLeaveApplication:(BeeMobInterstitial *)ad;

@end

