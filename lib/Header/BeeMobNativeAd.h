//
//  BeeMobNativeAd.h
//  BeeMobSDK
//
//  Created by 林述灿 on 2017/7/28.
//  Copyright © 2017年 reactTest. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BeeMobNativeAdDelegate;

@interface BeeMobNativeAd : UIView

@property(nonatomic, strong) NSString *adUnitID;
@property(nonatomic, weak) UIViewController *controller;
@property(nonatomic, weak) id<BeeMobNativeAdDelegate> delegate;
@property(nonatomic, assign) CGSize adSize;
@property(nonatomic, assign, readonly) BOOL isAppInstallType;
@property(nonatomic, weak, readonly) UIView *headlineView;
@property(nonatomic, weak, readonly) UIView *bodyView;
@property(nonatomic, weak, readonly) UIView *imageView;
@property(nonatomic, weak, readonly) UIView *mediaView;
@property(nonatomic, weak, readonly) UIView *logoView;
@property(nonatomic, weak, readonly) UIView *callToActionView;
@property(nonatomic, weak, readonly) UIView *adChoicesView;
@property(nonatomic, assign, readonly) CGSize imageSize;

//内容类专属
@property(nonatomic, weak, readonly) UIView *advertiserView;
//安装类专属
@property(nonatomic, weak, readonly) UIView *storeView;
@property(nonatomic, weak, readonly) UIView *priceView;
@property(nonatomic, weak, readonly) UIView *starRatingView;

- (void)loadNativeAd;

@end

@protocol BeeMobNativeAdDelegate <NSObject>

//请求相关
- (void)adNativeLoader:(BeeMobNativeAd *)nativeView didFailToReceiveAdWithError:(NSError *)error;
- (void)adNativeLoaderSuccess:(BeeMobNativeAd *)nativeView;

//广告展示 点击相关
- (void)nativeAdDidRecordImpression:(BeeMobNativeAd *)nativeView;
- (void)nativeAdDidRecordClick:(BeeMobNativeAd *)nativeView;
- (void)nativeAdWillPresentScreen:(BeeMobNativeAd *)nativeView;
- (void)nativeAdWillDismissScreen:(BeeMobNativeAd *)nativeView;
- (void)nativeAdDidDismissScreen:(BeeMobNativeAd *)nativeView;
- (void)nativeAdWillLeaveApplication:(BeeMobNativeAd *)nativeView;

//视频播放相关
- (void)adNativeDidPlayVideo:(BeeMobNativeAd *)nativeView;
- (void)adNativeDidPauseVideo:(BeeMobNativeAd *)nativeView;
- (void)adNativeDidEndVideoPlayback:(BeeMobNativeAd *)nativeView;
- (void)adNativeDidMuteVideo:(BeeMobNativeAd *)nativeView;
- (void)adNativeDidUnmuteVideo:(BeeMobNativeAd *)nativeView;

@end

