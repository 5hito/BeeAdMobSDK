//
//  BeeMobBannerView.h
//  BeeAdMobSDK
//
//  Created by linshucan on 2018/4/19.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BeeMobBannerViewDelegate;

@interface BeeMobBannerView : UIView

@property(nonatomic, weak) UIViewController *rootViewController;
@property(nonatomic, weak) id <BeeMobBannerViewDelegate> delegate;
//必须设置banner广告大小 否则广告无法显示，可以选择初始化设置
@property(nonatomic, assign) CGSize adSize;

- (instancetype)initWithUnitAd:(NSString*)adUnitId;
- (void)loadADRequest;

@end

@protocol BeeMobBannerViewDelegate<NSObject>

@optional
- (void)beeMobBannerAdViewClose:(BeeMobBannerView*)bannerView;
- (void)beeMobBannerAdViewDidReceiveAd:(BeeMobBannerView *)bannerView;
- (void)beeMobBannerAdViewDidImpression:(BeeMobBannerView *)bannerView;
- (void)beeMobBannerAdView:(BeeMobBannerView *)bannerView didFailToReceiveAdWithError:(NSError *)error;
- (void)beeMobBannerAdViewClick:(BeeMobBannerView *)bannerView;

@end
