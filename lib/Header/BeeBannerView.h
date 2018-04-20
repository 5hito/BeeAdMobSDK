//
//  BeeBannerView.h
//  BeeAdMobSDK
//
//  Created by linshucan on 2018/4/19.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BeeBannerViewDelegate;

@interface BeeBannerView : UIView

@property(nonatomic, strong) NSString *adUnitID;
@property(nonatomic, weak) UIViewController *rootViewController;
@property(nonatomic, weak) id <BeeBannerViewDelegate> delegate;
//必须设置banner广告大小 否则广告无法显示，可以选择初始化设置
@property(nonatomic, assign) CGSize adSize;

- (void)loadADRequest;

@end

@protocol BeeBannerViewDelegate<NSObject>

@optional
- (void)adViewClose:(BeeBannerView*)bannerView;
- (void)adViewDidReceiveAd:(BeeBannerView *)bannerView;
- (void)adView:(BeeBannerView *)bannerView didFailToReceiveAdWithError:(NSError *)error;
- (void)adViewWillPresentScreen:(BeeBannerView *)bannerView;
- (void)adViewWillDismissScreen:(BeeBannerView *)bannerView;
- (void)adViewDidDismissScreen:(BeeBannerView *)bannerView;
- (void)adViewWillLeaveApplication:(BeeBannerView *)bannerView;

@end
